#include "MoneyMakerStocks.h"
#include "CUDADefines.h"
#include <stdio.h>
#include <vector>

bool MoneyMakerStock::Load(const std::string& filePath, unsigned int history, bool normalize)
{
    FILE* file = NULL;
    errno_t err = fopen_s(&file, filePath.c_str(), "r");
    if (file) {
        std::vector<float>theData;

        char columns[256];
        fgets(columns, 255, file);
        for (;;) {
            char line[1024];
            if (!fgets(line, 1023, file))
                break;

            char symbol[11];
            char period[11];
            int year, month, day;
            int time;
            float open = 0.0f;
            float high = 0.0f;
            float low = 0.0f;
            float close = 0.0f;
            long long volume = 0;
            long long openinterest = 0;
            int num = sscanf_s(line, "%10[^,],%10[^,],%4d%2d%2d,%d,%f,%f,%f,%f,%lld,%lld", symbol, (unsigned)sizeof(symbol), period, (unsigned)sizeof(period), &year, &month, &day, &time, &open, &high, &low, &close, &volume, &openinterest);
            if (num != 12)
                break;

            theData.push_back(close);
        }
        fclose(file);
        
        // Load the training data from the most recent history of the stock.
        unsigned int numValues = (unsigned int)theData.size();
        if (numValues >= history) {
            unsigned int index = numValues - (history + 1);
            float lastData = theData[index++];
            minValue = lastData;
            maxValue = lastData;
            for (unsigned int i = 0; i < history; i++) {
                float curData = theData[index++];
                if (normalize)
                    s[i] = curData / lastData;
                else
                    s[i] = curData;
                lastData = curData;
                if (lastData < minValue)
                    minValue = lastData;
                if (lastData > maxValue)
                    maxValue = lastData;
            }
            return true;
        }
    }
    minValue = maxValue = 0.0f;
    return false;
} // Load