#include "FireStarterState.h"
#include <cmath>
#include <iostream>
#include <limits>
#include <stdexcept>

static void Check(bool condition, const char* message)
{
    if (!condition)
        throw std::runtime_error(message);
}

static FireStarterState Candidate(bool parabola, unsigned int index = 0, unsigned int variations = 1)
{
    FireStarterSettings settings(FIRESTARTER_EVOLVE_CPU);
    settings.m_instructions = 5;
    settings.m_registers = FIRESTARTER_REGISTERS;
    settings.m_variations = variations;
    settings.m_samples = 2;
    settings.m_targetMin = 0.0f;
    settings.m_targetMax = TARGET_PI;
    settings.m_target = 0.1f;
    FireStarterState state(settings, 1, index);
    if (parabola) {
        // 4*x*(pi-x)/(pi*pi) + .001 approximates sine between the two fitness samples.
        state.Code()->SetOperation(0, Operation_data_multiply, 0);
        state.Code()->SetOperation(1, Operation_data_add, 1);
        state.Code()->SetOperation(2, Operation_data_multiply, 0);
        state.Code()->SetOperation(3, Operation_data_multiply, 2);
        state.Code()->SetOperation(4, Operation_data_add, 3);
    } else {
        for (unsigned int i = 0; i < settings.m_instructions; i++)
            state.Code()->SetOperation(i, Operation_data_multiply, 0);
    }
    for (unsigned int v = 0; v < variations; v++) {
        FireStarterData* data = state.Result(v)->Data();
        data->d[0] = parabola ? -1.0f : 0.0f;
        data->d[1] = TARGET_PI;
        data->d[2] = -4.0f / (TARGET_PI * TARGET_PI);
        data->d[3] = .001f;
        state.MaxResult(v) = .001f; // Enable evaluation; replace with the actual sampled score below.
    }
    state.m_uniqueRegisters = 4;
    float sampled = 0.0f;
    for (unsigned int v = 0; v < variations; v++) {
        for (float theta : {0.0f, TARGET_PI}) {
            FireStarterData data(state.Result(v)->Data());
            float result = state.Code()->Evaluate(data, theta, settings.m_instructions);
            sampled = std::max(sampled, fabsf(result - Target(theta, v + FIRESTARTER_VARIATION)));
        }
    }
    for (unsigned int v = 0; v < variations; v++)
        state.MaxResult(v) = sampled;
    state.m_bestResult = state.MaxResults();
    state.m_optimizeValid = true;
    return state;
}

static void CheckRankingAndCompletion()
{
    FireStarterState zero = Candidate(false);
    FireStarterState parabola = Candidate(true);
    Check(zero.MaxResults() < parabola.MaxResults(), "Fixture must favor zero on sampled fitness");
    Check(parabola.TestResults() < zero.TestResults(), "Fixture must favor parabola on dense precision");
    Check(parabola.TestResults() < parabola.Settings().m_target, "Parabola should pass dense target");
    Check(zero.TestResults() > zero.Settings().m_target, "Zero should fail dense target");

    FireStarterState best(zero.Settings());
    Check(best.UpdateBest(zero), "First valid candidate should be accepted");
    Check(best.Complete() == !FIRESTARTER_USE_PRECISION, "Sampled success must not complete precision search");
    bool accepted = best.UpdateBest(parabola);
    Check(accepted == bool(FIRESTARTER_USE_PRECISION), "A better dense candidate must survive worse sampled fitness");
    Check(best.Complete(), "Winning candidate should complete the selected criterion");
    Check(best.MaxResults() == (FIRESTARTER_USE_PRECISION ? parabola.MaxResults() : zero.MaxResults()),
          "Saved winner must correspond to the active criterion");

    // Reverse asynchronous arrival order and retain the same final winner.
    FireStarterState reversed(zero.Settings());
    reversed.UpdateBest(parabola);
    reversed.UpdateBest(zero);
    Check(best.MaxResults() == reversed.MaxResults() && best.m_precision == reversed.m_precision,
          "Candidate arrival order changed the final winner");
    if (FIRESTARTER_USE_PRECISION) {
        Check(parabola.m_precisionValid && zero.m_precisionValid, "Every candidate needs validation, including rejected candidates");
        parabola.m_age = 3;
        parabola.m_generation = 4;
        Check(parabola.SelectWeight() == parabola.m_precision * 3, "Selection weight must use dense precision");
        Check(parabola.EvolveWeight() == parabola.m_precision * 4, "Evolution weight must use dense precision");
        Check(parabola.BetterEvolutionResult(zero), "CPU history replacement must use dense precision");

        FireStarterState later = Candidate(true, 5);
        FireStarterState earlier = Candidate(true, 2);
        FireStarterState tied(later.Settings());
        tied.UpdateBest(later);
        tied.UpdateBest(earlier);
        Check(tied.m_index == 2, "Equal dense candidates need deterministic tie resolution");
    }
}

static void CheckPopulationSelection()
{
    // All members use the same compiled code. The lowest sampled error belongs
    // to zero-valued register data, while a later member approximates sine.
    FireStarterState state = Candidate(true);
    state.Settings().m_population = 130;
    float parabolaSampled = state.MaxResults();
    std::vector<unsigned char> buffer(FireStarterPopulation::PopulationSize(state.Settings()));
    FireStarterPopulation* population = (FireStarterPopulation*)buffer.data();
    FireStarterData zeroData;
    zeroData.Clear();
    float zeroSampled = Candidate(false).MaxResults();
    for (unsigned int index = 0; index < state.Settings().m_population; index++) {
        FireStarterResult* result = FireStarterPopulation::PopulationResult(population, state.Settings(), index);
        if (index < 128)
            result->InitResult(zeroData, zeroSampled);
        else
            result->InitResult(state.Result()->Data(), state.MaxResults());
    }
    unsigned int selected = state.SelectOptimizeResult(population, 0);
    Check(selected == (FIRESTARTER_USE_PRECISION ? 128u : 0u),
          "Population selection discarded a better dense member with worse sampled error");
    state.InitResult(state.Settings(), population, selected);
    state.UpdatePrecision();
    Check((state.m_precision < state.Settings().m_target) == bool(FIRESTARTER_USE_PRECISION),
          "Population selection failed to expose the precision-qualified member");
    Check(state.MaxResults() == (FIRESTARTER_USE_PRECISION ? parabolaSampled : zeroSampled),
          "Selecting by dense error must preserve the member's sampled score");
}

static void CheckValidationAndPersistence()
{
    FireStarterState state = Candidate(true);
    state.UpdatePrecision();
    FireStarterState copied(state);
    Check(copied.m_precisionValid && copied.m_precision == state.m_precision, "State copies lost dense precision");
    state.CopyCode(copied);
    Check(!state.m_precisionValid, "Changing code must invalidate dense precision");
    if (FIRESTARTER_USE_PRECISION)
        Check(!state.MeetsTarget(), "Stale precision must not complete evolution");
    state.UpdatePrecision();
    state.m_precision = state.Settings().m_target;
    state.MaxResult() = state.Settings().m_target;
    Check(!state.MeetsTarget(), "Completion must use a strict threshold");

    FireStarterState untested(state.Settings());
    Check(untested.TestResults() == untested.Settings().m_startResult, "Unevaluated states must not return zero validation error");
    FireStarterState nonfinite = Candidate(true);
    nonfinite.Result()->Data()->d[0] = std::numeric_limits<float>::quiet_NaN();
    Check(nonfinite.TestResults() == nonfinite.Settings().m_startResult, "Nonfinite evaluation must fail validation");

    FireStarterState multi = Candidate(true, 0, 2);
    float worst = multi.TestResults();
    float separateWorst = 0.0f;
    for (unsigned int v = 0; v < 2; v++) {
        FireStarterState single(multi);
        single.Settings().m_variations = v + 1;
        separateWorst = std::max(separateWorst, single.TestResults());
    }
    Check(worst == separateWorst && worst > Candidate(true).TestResults(), "Dense validation must cover every target variation");

    state.UpdatePrecision();
    std::string saved;
    state.SaveState(saved);
    Check(saved.find("state.m_precision = ") != std::string::npos &&
          saved.find("state.m_precisionValid = true;") != std::string::npos, "Saved states lost precision selection data");
    Check(saved.find("settings.m_usePrecision") == std::string::npos, "Diagnostic settings must not generate invalid saved-state assignments");
    std::string header;
    FireStarterState::SettingsText(state.Settings(), header);
    Check(header.find(FIRESTARTER_USE_PRECISION ? "usePrecision = 1" : "usePrecision = 0") != std::string::npos,
          "Log header must identify active selection criterion");

    for (unsigned int mode : {FIRESTARTER_MONEYMAKER, FIRESTARTER_MONEYOPTIMIZE,
                             FIRESTARTER_SINSIM, FIRESTARTER_EVOLVE_SINSIM, FIRESTARTER_SPEEDTEST}) {
        FireStarterSettings settings(mode);
        Check(!settings.UsePrecision(), "Precision flag must not change unsupported objectives");
    }
}

int main()
{
    try {
        CheckRankingAndCompletion();
        CheckPopulationSelection();
        CheckValidationAndPersistence();
        std::cout << "Precision selection checks passed (FIRESTARTER_USE_PRECISION=" << FIRESTARTER_USE_PRECISION << ")\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
