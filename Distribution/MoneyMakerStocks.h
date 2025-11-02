#pragma once
#include "FireStarterSettings.h"
#ifndef __CUDACC__
#include <string>
#endif

typedef struct MoneyMakerStock
{
    unsigned int symbol;
    unsigned int numDays;
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
        if ((other.symbol != symbol) || (other.minValue != minValue) || (other.maxValue != maxValue) || (other.numDays != numDays))
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

    static inline size_t StockSize(unsigned int history)
    {
        return sizeof(MoneyMakerStock) + sizeof(float) * (history - MONEYMAKER_HISTORY);
    } // StockSize

    static inline size_t StockSize(const FireStarterSettings& settings)
    {
        return StockSize(settings.m_history);
    } // StockSize

    inline size_t StockSize(void) const
    {
        return sizeof(MoneyMakerStock) + sizeof(float) * (numDays - MONEYMAKER_HISTORY);
    } // StockSize

    inline void Copy(const MoneyMakerStock* stock)
    {
        symbol = stock->symbol;
        numDays = stock->numDays;
        minValue = stock->minValue;
        maxValue = stock->maxValue;
        for (unsigned int i = 0; i < numDays; i++)
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
        minValue = 0.0f;
        maxValue = 0.0f;
        for (unsigned int i = 0; i < numDays; i++)
            s[i] = 0.0f; // Clear all the history days
    } // Clear

    inline void Init(unsigned int history = MONEYMAKER_HISTORY, unsigned int stockSymbol = 0)
    {
        symbol = stockSymbol;
        numDays = history;
        Clear();
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned int stocks = 0)
    {
        Init(stocks > settings.m_stocks ? stocks : settings.m_stocks, settings.m_history);
    } // MoneyMakerStocks

#ifndef __CUDACC__
    static inline MoneyMakerStock* New(unsigned int history, unsigned int stockSymbol = 0)
    {
        size_t stockSize = MoneyMakerStock::StockSize(history);
        MoneyMakerStock* newStock = (MoneyMakerStock*)malloc(stockSize);
        newStock->Init(history, stockSymbol);
        return newStock;
    } // New

    static inline MoneyMakerStock* New(const MoneyMakerStock* stock)
    {
        size_t stockSize = stock->StockSize();
        MoneyMakerStock* newStock = (MoneyMakerStock*)malloc(stockSize);
        memcpy(newStock, stock, stockSize);
    } // New

    static inline MoneyMakerStock* New(const MoneyMakerStock& stock)
    {
        size_t stockSize = stock.StockSize();
        MoneyMakerStock* newStock = (MoneyMakerStock*)malloc(stockSize);
        memcpy(newStock, &stock, stockSize);
        return newStock;
    } // New

    static inline void Delete(MoneyMakerStock*& stocks)
    {
        if (stocks) {
            free(stocks);
            stocks = nullptr;
        }
    } // Delete

    inline void Delete(void)
    {
        if (this)
            free(this);
    } // Delete

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
    unsigned int numDays = MONEYMAKER_HISTORY;
    MoneyMakerStock s[MONEYMAKER_STOCKS];

    static inline size_t StocksSize(unsigned int stocks, unsigned int history)
    {
        return (sizeof(MoneyMakerStocks) - MONEYMAKER_STOCKS * sizeof(MoneyMakerStock)) + MoneyMakerStock::StockSize(history) * stocks;
    } // StocksSize

    static inline size_t StocksSize(const FireStarterSettings& settings)
    {
        return StocksSize(settings.m_stocks, settings.m_history);
    } // StocksSize

    static inline size_t StocksSize(const MoneyMakerStocks& stocks)
    {
        return StocksSize(stocks.numStocks, stocks.numDays);
    } // StocksSize

    static inline size_t StocksSize(const MoneyMakerStocks* stocks)
    {
        return StocksSize(stocks->numStocks, stocks->numDays);
    } // StocksSize

    inline size_t StocksSize(void) const
    {
        return StocksSize(numStocks, numDays);
    } // StocksSize

    inline MoneyMakerStock* StockData(unsigned int stock = 0)
    {
        return (MoneyMakerStock*)((char*)s + stock * MoneyMakerStock::StockSize(numDays));
    } // StockData

    inline const MoneyMakerStock* StockData(unsigned int stock = 0) const
    {
        return (const MoneyMakerStock*)((char*)s + stock * MoneyMakerStock::StockSize(numDays));
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

    inline void Copy(const MoneyMakerStock* stockData, unsigned int stock = 0)
    {
        StockData(stock)->Copy(stockData);
    } // Copy

    inline void Copy(const MoneyMakerStocks* inputStocks)
    {
        numStocks = inputStocks->numStocks;
        numDays = inputStocks->numDays;
        for (unsigned int stock = 0; stock < numStocks; stock++)
            Copy(inputStocks->StockData(stock), stock);
    } // Copy

    inline void Init(unsigned int stocks = MONEYMAKER_STOCKS, unsigned int history = MONEYMAKER_HISTORY)
    {
        numStocks = stocks;
        numDays = history;
        for (unsigned int i = 0; i < stocks; i++) {
            MoneyMakerStock& stock = Stock(i);
            stock.Init(history);
        }
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned int stocks = 0)
    {
        Init(stocks > settings.m_stocks ? stocks : settings.m_stocks, settings.m_history);
    } // MoneyMakerStocks

#ifndef __CUDACC__
    static inline MoneyMakerStocks* New(unsigned int stocks, unsigned int history)
    {
        size_t stocksSize = MoneyMakerStocks::StocksSize(stocks, history);
        MoneyMakerStocks* newStocks = (MoneyMakerStocks*)malloc(stocksSize);
        newStocks->Init(stocks, history);
    } // New

    static inline MoneyMakerStocks* New(const MoneyMakerStocks* stocks)
    {
        size_t stocksSize = stocks->StocksSize();
        MoneyMakerStocks* newStocks = (MoneyMakerStocks*)malloc(stocksSize);
        memcpy(newStocks, stocks, stocksSize);
    } // New

    static inline MoneyMakerStocks* New(const MoneyMakerStocks& stocks)
    {
        size_t stocksSize = stocks.StocksSize();
        MoneyMakerStocks* newStocks = (MoneyMakerStocks*)malloc(stocksSize);
        memcpy(newStocks, &stocks, stocksSize);
    } // New

    static inline void Delete(MoneyMakerStocks*& stocks)
    {
        if (stocks) {
            free(stocks);
            stocks = nullptr;
        }
    } // Delete

    inline void Delete(void)
    { 
        if (this)
            free(this);
    } // Delete

    inline bool Load(const std::string& path, unsigned int symbol, unsigned int stock = 0, bool normalize = false)
    {
        if (stock >= numStocks)
            return false;
        return StockData(stock)->Load(path, symbol, numDays, normalize);
    } // Load
#endif

    inline MoneyMakerStocks(unsigned int stocks = MONEYMAKER_STOCKS, unsigned int history = MONEYMAKER_HISTORY)
    {
        Init(stocks, history);
    } // MoneyMakerStocks

    inline MoneyMakerStocks(const FireStarterSettings& settings)
    {
        Init(settings);
    } // MoneyMakerStocks
} MoneyMakerStocks;