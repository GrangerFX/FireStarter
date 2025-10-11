#pragma once
#include "FireStarterSettings.h"
#ifndef __CUDACC__
#include <string>
#endif

typedef struct MoneyMakerStock
{
    unsigned int symbol;
    unsigned int numValues;
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
        if ((other.symbol != symbol) || (other.minValue != minValue) || (other.maxValue != maxValue) || (other.numValues != numValues))
            return false;
        for (int i = 0; i < MONEYMAKER_HISTORY; i++)
            if (s[i] != other[i])
                return false;
        return true;
    } // operator==

    inline bool operator!=(const MoneyMakerStock& other) const
    {
        return !(*this == other);
    } // operator!=

    static inline size_t StockSize(unsigned int history = MONEYMAKER_HISTORY)
    {
        return sizeof(MoneyMakerStock) + sizeof(float) * (history - MONEYMAKER_HISTORY);
    } // StockSize

    static inline size_t StockSize(const FireStarterSettings& settings)
    {
        return StockSize(settings.m_history);
    } // StockSize

    inline void Copy(const MoneyMakerStock* stock)
    {
        symbol = stock->symbol;
        numValues = stock->numValues;
        minValue = stock->minValue;
        maxValue = stock->maxValue;
        for (unsigned int i = 0; i < numValues; i++)
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

    inline void Clear(void)
    {
        for (unsigned int i = 0; i < numValues; i++)
            s[i] = 0.0f; // Clear all the history days
    } // Clear

#ifndef __CUDACC__
    bool Load(const std::string& filePath, unsigned int stockSymbol, unsigned int history = MONEYMAKER_HISTORY, bool normalize = false);
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
    MoneyMakerStock s[MONEYMAKER_STOCKS];

    static inline size_t StocksSize(unsigned int stocks, unsigned int history)
    {
        return (sizeof(MoneyMakerStocks) - MONEYMAKER_STOCKS * sizeof(MoneyMakerStock)) + MoneyMakerStock::StockSize(history) * stocks;
    } // StocksSize

    static inline size_t StocksSize(const FireStarterSettings& settings)
    {
        return StocksSize(settings.m_stocks, settings.m_history);
    } // StocksSize

    inline size_t StocksSize(void) const
    {
        return StocksSize(numStocks, numValues);
    } // StocksSize

    inline MoneyMakerStock* StockData(unsigned int stock = 0)
    {
        return (MoneyMakerStock*)((char*)s + stock * MoneyMakerStock::StockSize(numValues));
    } // StockData

    inline const MoneyMakerStock* StockData(unsigned int stock = 0) const
    {
        return (const MoneyMakerStock*)((char*)s + stock * MoneyMakerStock::StockSize(numValues));
    } // StockData

    inline MoneyMakerStock& Stock(unsigned int stock = 0)
    {
        return *StockData(stock);
    } // Stock

    inline const MoneyMakerStock& Stock(unsigned int stock = 0) const
    {
        return *StockData(stock);
    } // Stock

    inline MoneyMakerStock& operator[](unsigned int stock)
    {
        return Stock(stock);
    } // operator[]

    const inline MoneyMakerStock& operator[](unsigned int stock) const
    {
        return Stock(stock);
    } // operator[]

    inline void Copy(MoneyMakerStock* stockData, unsigned int stock = 0)
    {
        StockData(stock)->Copy(stockData);
    } // Copy

#ifndef __CUDACC__
    inline bool Load(const std::string& path, unsigned int symbol, unsigned int stock = 0, bool normalize = false)
    {
        if (stock >= numStocks)
            return false;
        return StockData(stock)->Load(path, symbol, numValues, normalize);
    } // Load
#endif

    inline void Init(unsigned int stocks = MONEYMAKER_STOCKS, unsigned int history = MONEYMAKER_HISTORY)
    {
        numStocks = stocks;
        numValues = history;
        for (unsigned int i = 0; i < stocks; i++) {
            MoneyMakerStock& stock = Stock(i);
            stock.symbol = 0;
            stock.numValues = numValues;
            stock.minValue = 0.0f;
            stock.maxValue = 0.0f;
        }
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned int stocks = 0)
    {
        Init(stocks > settings.m_stocks ? stocks : settings.m_stocks, settings.m_history);
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