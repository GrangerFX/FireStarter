#include "MoneyMakerStocks.h"
#include "CUDADefines.h"
#include <stdio.h>
#include <vector>

bool MoneyMakerStock::Load(const std::string& filePath, unsigned int stockSymbol, unsigned int history, bool normalize)
{
    bool result = false;
    FILE* file = NULL;

    symbol = stockSymbol;
    numDays = history;
    minValue = maxValue = 0.0f;
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
            if ((num != 12) && (num != 11)) // Intel and Microsoft for some reason return 11 as the number of parameters read.
                break;

            theData.push_back(close);
        }
        fclose(file);
        
        // Load the training data from the most recent history of the stock.
        unsigned int dataSize = (unsigned int)theData.size();
        if (dataSize >= history) {
            unsigned int index = dataSize - (history + 1);
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
            result = true;
        }
    }
    return result;
} // Load