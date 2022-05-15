#pragma once

class FireStarterOrder {
public:
    unsigned int order[PROGRAM_VARIATIONS];

    inline FireStarterOrder(FireStarterResult *result = nullptr)
    {
        // Sort the variations largest first. This increases the chance that the generation can fail early.
        for (int v = 0; v < PROGRAM_VARIATIONS; v++)
            order[v] = v;
        if (result) {
            for (int v = 0; v < PROGRAM_VARIATIONS - 1; v++) {
                int maxIndex = v;
                float max = *result->MinResult(order[v]);
                for (int i = v + 1; i < PROGRAM_VARIATIONS; i++) {
                    float curResult = *result->MinResult(order[i]);
                    if (curResult > max) {
                        max = curResult;
                        maxIndex = i;
                    }
                }
                if (maxIndex != v) {
                    int swapOrder = order[maxIndex];
                    order[maxIndex] = order[v];
                    order[v] = swapOrder;
                }
            }
        }
    } // FireStarterOrder
}; // class FireStarterOrder
