"""Render campaign documentation and figures from preserved analyses."""
import csv, json, statistics
from datetime import datetime
from pathlib import Path

BASE=Path(__file__).resolve().parent
TARGETS=['EvolveNew','EvolveGPU','EvolveCPU']
def load(path):return json.loads(path.read_text(encoding='utf-8'))
def save(path,value):path.write_text(json.dumps(value,indent=2)+'\n',encoding='utf-8')
def fmt(x,n=5):return 'Not logged' if x is None else f'{x:.{n}f}'
all_reports={};all_rows={};summary=[]
for target in TARGETS:
 reports=[];rows=[]
 for n in (1,2):
  p=BASE/target/f'Run{n}/analysis.json';r=load(p)
  if 'precision_above_1e6_tests' in r:r['precision_above_1e_minus_6_tests']=r.pop('precision_above_1e6_tests');save(p,r)
  reports.append(r)
  with (p.parent/'tests.csv').open(encoding='utf-8') as file:rows.append(list(csv.DictReader(file)))
  s=r['successful_solution_seconds'];g=r['successful_generations']
  summary.append(dict(target=target,run=n,tests=r['completed_tests'],successes=r['successes'],failures=r['failures'],success_rate=r['success_rate'],
   **{k+'_seconds':s[k] for k in ['mean','median','sample_stddev','minimum','maximum','p90','p95']},mean_generations=g['mean'],median_generations=g['median']))
 all_reports[target]=reports;all_rows[target]=rows
 compare=load(BASE/target/'comparison.json')
 lines=[f'# {target} timing results — October 8, 2026','',
  'Benchmark date: October 8, 2026 (Pacific Daylight Time). Exact Git commit: `13461b1733a03019eded0745a557ab021613fa17`. User-launched Release x64 executable, one Sin variation, two complete batches without rebuilding or changing settings within the pair. See the campaign README for environment, binary provenance, and raw-file manifests.','',
  ('Timing is secondary for CPU; the primary interest is fitness success and dense-grid precision.' if target=='EvolveCPU' else 'This is a primary timing target.'),'',
  '| Metric | Run 1 | Run 2 |','| --- | ---: | ---: |']
 metrics=[('Configured / completed tests',lambda r:f"{r['configured_tests']} / {r['completed_tests']}"),
  ('Successes / failures / incomplete',lambda r:f"{r['successes']} / {r['failures']} / {r['incomplete_tests']}"),
  ('Fitness success rate',lambda r:f"{r['success_rate']*100:.2f}%")]
 for k,label in [('mean','Mean time per successful solution (s)'),('median','Median (s)'),('sample_stddev','Sample standard deviation (s)'),('minimum','Minimum (s)'),('maximum','Maximum (s)'),('p90','P90 (s)'),('p95','P95 (s)')]:
  metrics.append((label,lambda r,key=k:fmt(r['successful_solution_seconds'][key])))
 metrics.extend([('Mean generations to solution',lambda r:fmt(r['successful_generations']['mean'])),
  ('Median generations to solution',lambda r:fmt(r['successful_generations']['median'])),
  ('Sum of rounded solution durations (s)',lambda r:fmt(r['sum_rounded_solution_seconds'],2)),
  ('Final logged cumulative solution duration (s)',lambda r:fmt(r['last_logged_cumulative_seconds'],2)),
  ('Final snapshot application Run duration (s)',lambda r:fmt(r['final_snapshot']['application_run_seconds'],6)),
  ('Raw files preserved',lambda r:str(r['raw_files'])),
  ('Median logged GenTime (s)',lambda r:fmt(r['logged_generation_average'].get('median'),2))])
 for label,fn in metrics:lines.append(f'| {label} | {fn(reports[0])} | {fn(reports[1])} |')
 lines.extend(['','Times use each successful summary row’s `Duration`. Standard deviation uses n−1, and P90/P95 use linear interpolation. Each run is a separate observation. CPU/GPU Duration is logged to 0.1 s; New to 0.01 s. More aggregate digits do not imply finer measurement resolution. Startup remains included. Application Run duration is the saved-state timer, not a separately measured process stopwatch; numeric OS exit codes were not collected.','',
  '## Generation distributions','',
  'The summary `Generation` field is an outer CPU evolution-batch count or a GPU/New evolution-state generation count. GPU/New evolution overlaps optimization. These counts do not represent identical work between modes. CPU also logs the winning candidate’s `Best Generations` and `Evolutions`; their per-test values and the candidate-generation distribution are in analysis.json and tests.csv.','',
  '| Summary generations | Run 1 tests | Run 2 tests |','| ---: | ---: | ---: |'])
 for g in sorted(set(reports[0]['generation_count_distribution'])|set(reports[1]['generation_count_distribution']),key=int):
  lines.append(f"| {g} | {reports[0]['generation_count_distribution'].get(g,0)} | {reports[1]['generation_count_distribution'].get(g,0)} |")
 lines.extend(['','## Completion errors and validation','',
  'Fitness is a maximum absolute error on 15 samples. The CPU-computed precision check is a maximum absolute error on 256 evenly spaced samples over the same Sin domain. These are different sample sets. The completion check uses a strict comparison against the floating target; the success marker and printed eight-decimal values are retained, including rounding ambiguity. A precision evaluation is not a direct comparison of CPU and GPU arithmetic on identical inputs.','',
  '| Logged completion fitness | Run 1 | Run 2 |','| --- | ---: | ---: |'])
 for k,label in [('minimum','Minimum'),('maximum','Maximum'),('mean','Mean'),('median','Median')]:
  lines.append(f"| {label} | {reports[0]['completion_fitness'][k]:.8f} | {reports[1]['completion_fitness'][k]:.8f} |")
 if target=='EvolveCPU':
  lines.extend(['','Both summary fitness fields match in each CPU test. The report uses Evolve Result for CPU completion. All 64 tests met the logged fitness criterion in both runs; this demonstrates solution search on 15 samples, not uniform 1e−6 accuracy over all inputs.','',
   '| Dense 256-sample error | Run 1 | Run 2 |','| --- | ---: | ---: |'])
  for k,label in [('mean','Mean'),('median','Median'),('minimum','Minimum'),('maximum','Maximum')]:lines.append(f"| {label} | {reports[0]['dense_precision_256_samples'][k]:.8f} | {reports[1]['dense_precision_256_samples'][k]:.8f} |")
  lines.extend(['| Tests above printed 1e−6 | 60 / 64 | 60 / 64 |','',
   'Tests at or below 1e−6 at the printed precision: Run 1 [26, 32, 47, 49]; Run 2 [26, 32, 47, 48]. Run 2 test 48 is printed exactly at the boundary; no unrounded dense-error value is available. Test 63’s final snapshot has precision 0.00001857 and fitness 0.00000083 in both runs. No result has been removed or relabeled to improve the success rate.'])
 else:
  snap=reports[0]['final_snapshot']
  lines.extend(['',f"Per-test dense precision is not logged for {target}; the analysis contains missing values, not presumed precision passes. The last saved-state snapshot identifies test {snap['test']} and logs precision {snap['precision_256_samples']:.8f} versus fitness {snap['fitness']:.8f} in both runs. That snapshot cannot establish a precision success rate for all 256 tests.",
   'GPU/New evolution-stage fitness and final optimization-stage fitness are separate fields. Every result is retained in tests.csv; distributions for both stages are in analysis.json.'])
 if target=='EvolveCPU':
  lines.extend(['','CPU solution-time variation is dominated by generations required to find a solution. Both runs have quarter mean generation counts of 3.25, 6.25, 4.5, and 6.0. Longer searches explain the higher later solution-time averages; these averages do not establish an execution slowdown. See investigation.md and generation-time-relationship.json for the descriptive regression and the smaller residual timing observations. These batches contain 64 tests; smoothing at 256 tests was not measured.'])
 lines.extend(['','## Timing progression and anomalies','',
  '| Run | Test indices | Mean solution duration (s) | Mean generations | Mean Duration/Generation (s) | Median Duration/Generation (s) |','| ---: | --- | ---: | ---: | ---: | ---: |'])
 for r in reports:
  for q in r['quartiles']:
   lines.append(f"| {r['run']} | {q['first_test']}–{q['last_test']} | {q['solution_time']['mean']:.5f} | {q['generations']['mean']:.5f} | {q['generation_average']['mean']:.5f} | {q['generation_average']['median']:.5f} |")
 lines.append('')
 for r in reports:
  lines.extend([f"Run {r['run']}: descriptive high-duration outliers (Q3 + 1.5 IQR) {r['high_duration_outlier_tests']}; generation-average high outliers (> median + 3 sample SD) {r['generation_average_three_sd_tests']}. Rounded completion boundary tests {r['rounded_threshold_ambiguity_tests']}. Integrity/completion anomalies {r['integrity_or_completion_anomalies']}.",''])
 lines.extend(['Every observation remains included. Outliers alone are not evidence of a failure; generation counts and target-specific work vary. Timing qualifications and outcome differences are analyzed in [investigation.md](investigation.md).','',
  f"Mean Run 2/Run 1 time ratio: {compare['mean_time_run2_over_run1']:.6f}. All summary generation counts match. Runtime headers and settings-source hashes match. Tests with a fitness/candidate/precision difference: {[d['test'] for d in compare['result_difference_tests']]}. Exact fields are in comparison.json. Neither run is labeled cold-cache; normal NVIDIA caches were left untouched.",'',
  'Six completed batches and complete test sequences show no logged failures or timeouts. No full diagnostic/debugger trace, continuous GPU/CPU telemetry, cache-hit trace, or independently captured exit code exists; do not infer those checks passed from absent output. Raw native files include summaries, every test’s status, settings-source snapshots, and final saved states.',''])
 (BASE/target/'analysis.md').write_text('\n'.join(lines),encoding='utf-8')
with (BASE/'summary.csv').open('w',newline='',encoding='utf-8') as file:
 writer=csv.DictWriter(file,fieldnames=list(summary[0]));writer.writeheader();writer.writerows(summary)

# Record the limits of simple Duration/Generation normalization for GPU timing drift.
investigations={}
for target in TARGETS:
 investigations[target]=[]
 for n,rows in enumerate(all_rows[target],1):
  strata=[]
  for g in sorted({int(r['generations']) for r in rows}):
   parts=[[float(r['duration_per_outer_generation_seconds']) for r in rows[lo:hi] if int(r['generations'])==g] for lo,hi in [(0,len(rows)//2),(len(rows)//2,len(rows))]]
   strata.append(dict(generations=g,early_half_tests=len(parts[0]),late_half_tests=len(parts[1]),
    early_half_mean=statistics.mean(parts[0]) if parts[0] else None,late_half_mean=statistics.mean(parts[1]) if parts[1] else None))
  investigations[target].append(dict(run=n,generation_strata=strata,
   logged_optimization_stage_quarters=[statistics.mean(float(r['median_logged_optimization_stage_seconds']) for r in rows[len(rows)*i//4:len(rows)*(i+1)//4]) for i in range(4)]))
save(BASE/'timing-investigation.json',investigations)
# Describe search effort separately from execution speed; fit includes every CPU test.
relationships=[]
for n,rows in enumerate(all_rows['EvolveCPU'],1):
 generations=[int(r['generations']) for r in rows]
 durations=[float(r['duration_seconds']) for r in rows]
 gm=statistics.mean(generations);tm=statistics.mean(durations)
 gg=sum((g-gm)**2 for g in generations)
 tt=sum((t-tm)**2 for t in durations)
 gt=sum((g-gm)*(t-tm) for g,t in zip(generations,durations))
 relationships.append(dict(run=n,tests=len(rows),pearson_r=gt/(gg*tt)**0.5,
  r_squared=gt**2/(gg*tt),slope_seconds_per_outer_generation=gt/gg,
  intercept_seconds=tm-(gt/gg)*gm,
  quarters=[dict(first_test=i*len(rows)//4,last_test=(i+1)*len(rows)//4-1,
   mean_generations=statistics.mean(generations[i*len(rows)//4:(i+1)*len(rows)//4]),
   mean_solution_seconds=statistics.mean(durations[i*len(rows)//4:(i+1)*len(rows)//4])) for i in range(4)]))
save(BASE/'EvolveCPU/generation-time-relationship.json',dict(
 method='Ordinary least squares with intercept: rounded solution Duration against outer Generation, all tests included. Descriptive association, not a causal model or an isolated per-generation timer.',
 runs=relationships,tests_256_observed=False))
for target in TARGETS:
 ar,br=all_rows[target]
 differences=[float(y['duration_seconds'])-float(x['duration_seconds']) for x,y in zip(ar,br)]
 c=load(BASE/target/'comparison.json')
 c['paired_duration_changes']=dict(faster_run2=sum(x<0 for x in differences),equal_at_logged_resolution=sum(x==0 for x in differences),slower_run2=sum(x>0 for x in differences),mean_delta_seconds=statistics.mean(differences),median_delta_seconds=statistics.median(differences))
 if target=='EvolveCPU':
  a=load(BASE/target/'Run1/terminal-status-rows.json');b=load(BASE/target/'Run2/terminal-status-rows.json')
  c['winning_register_array_difference_tests']=[x['test'] for x,y in zip(a,b) if x['last_register_line']!=y['last_register_line']]
 save(BASE/target/'comparison.json',c)
print('Per-target reports, summary CSV, comparisons, and timing investigation saved.')
