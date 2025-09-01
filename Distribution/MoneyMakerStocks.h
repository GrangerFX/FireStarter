#pragma once
#include "FireStarterSettings.h"
#ifndef __CUDACC__
#include <string>
#endif

typedef struct MoneyMakerStock
{
    float minValue, maxValue;
    float s[MONEYMAKER_HISTORY];    // The stock price changes (current day price / previous day price).

    inline float& operator[](unsigned int i)
    {
        return s[i];
    } // operator[]

    inline float operator[](unsigned int i) const
    {
        return s[i];
    } // operator[]

    inline bool operator==(const MoneyMakerStock& other) const
    {
        for (int i = 0; i < MONEYMAKER_HISTORY; i++)
            if (s[i] != other[i])
                return false;
        return true;
    } // operator==

    inline bool operator!=(const MoneyMakerStock& other) const
    {
        for (int i = 0; i < MONEYMAKER_HISTORY; i++)
            if (s[i] != other[i])
                return true;
        return false;
    } // operator!=

    static inline size_t StockSize(unsigned int history = MONEYMAKER_HISTORY)
    {
        return (sizeof(MoneyMakerStock) - sizeof(float) * MONEYMAKER_HISTORY) + sizeof(float) * history;
    } // StockSize

    static inline size_t StockSize(const FireStarterSettings& settings)
    {
        return StockSize(settings.m_history);
    } // StockSize

    inline void Copy(const MoneyMakerStock* stock, unsigned int history = MONEYMAKER_HISTORY)
    {
        minValue = stock->minValue;
        maxValue = stock->maxValue;
        for (unsigned int i = 0; i < history; i++)
            s[i] = (*stock)[i];
    } // Copy

    inline void operator=(const MoneyMakerStock& stock)
    {
        Copy(&stock);
    } // operator=

    inline void operator=(const MoneyMakerStock* stock)
    {
        Copy(stock);
    } // operator=

    inline void Clear(unsigned int history = MONEYMAKER_HISTORY)
    {
        for (unsigned int i = 0; i < history; i++)
            s[i] = 0.0f; // Clear all the history days
    } // Clear

#ifndef __CUDACC__
    bool Load(const std::string& filePath, unsigned int history = MONEYMAKER_HISTORY, bool normalize = false);
#endif

    inline MoneyMakerStock(const struct MoneyMakerStock& stock)
    {
        Copy(&stock);
    } // MoneyMakerStock

    inline MoneyMakerStock(const struct MoneyMakerStock* stock)
    {
        Copy(stock);
    } // MoneyMakerStock

    inline MoneyMakerStock(void)
    {
        Clear();
    } // MoneyMakerStock
} MoneyMakerStock;

typedef struct MoneyMakerStocks
{
    unsigned int numStocks = MONEYMAKER_STOCKS;
    unsigned int numValues = MONEYMAKER_HISTORY;
    float s[MONEYMAKER_STOCKS * MONEYMAKER_HISTORY];

    static inline size_t StocksSize(unsigned int stocks = MONEYMAKER_STOCKS, unsigned int history = MONEYMAKER_HISTORY)
    {
        return (sizeof(MoneyMakerStocks) - MoneyMakerStock::StockSize(MONEYMAKER_HISTORY) * MONEYMAKER_STOCKS) + sizeof(float) * MoneyMakerStock::StockSize(history) * stocks;
    } // StocksSize

    static inline size_t StocksSize(const FireStarterSettings& settings)
    {
        return StocksSize(settings.m_stocks, settings.m_history);
    } // StocksSize

    inline MoneyMakerStock& Stock(unsigned int stock = 0)
    {
        return *(MoneyMakerStock*)(&s[stock * numValues]);
    } // Stock

    inline const MoneyMakerStock& Stock(unsigned int stock = 0) const
    {
        return *(MoneyMakerStock*)(&s[stock * numValues]);
    } // Stock

    inline MoneyMakerStock* StockData(unsigned int stock = 0)
    {
        return (MoneyMakerStock*)(&s[stock * numValues]);
    } // StockData

    inline const MoneyMakerStock* StockData(unsigned int stock = 0) const
    {
        return (MoneyMakerStock*)(&s[stock * numValues]);
    } // StockData

    inline void Copy(MoneyMakerStock* stockData, unsigned int stock = 0)
    {
        StockData(stock)->Copy(stockData, numValues);
    } // Copy

#ifndef __CUDACC__
    inline bool Load(const std::string& path, unsigned int stock = 0, bool normalize = false)
    {
        if (stock >= numStocks)
            return false;
        return StockData(stock)->Load(path, numValues, normalize);
    } // Load
#endif

    inline void Init(unsigned int stocks = MONEYMAKER_STOCKS, unsigned int history = MONEYMAKER_HISTORY)
    {
        numStocks = stocks;
        numValues = history;
    } // Init

    inline void Init(const FireStarterSettings& settings)
    {
        Init(settings.m_stocks, settings.m_history);
    } // MoneyMakerStocks

    inline MoneyMakerStocks(unsigned int stocks = MONEYMAKER_STOCKS, unsigned int history = MONEYMAKER_HISTORY)
    {
        Init(stocks, history);
    } // MoneyMakerStocks

    inline MoneyMakerStocks(const FireStarterSettings& settings)
    {
        Init(settings);
    } // MoneyMakerStocks
} MoneyMakerStocks;