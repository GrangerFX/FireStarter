#pragma once
#include "FireStarterSettings.h"
#ifndef __CUDACC__
#include <string>
#endif

typedef struct MoneyMakerStock
{
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
        return sizeof(float) * history;
    } // StockSize

    static inline size_t StockSize(const FireStarterSettings& settings)
    {
        return sizeof(float) * settings.m_history;
    } // StockSize

    inline void Copy(const MoneyMakerStock& stock, unsigned int history = MONEYMAKER_HISTORY)
    {
        for (unsigned int i = 0; i < history; i++)
            s[i] = stock[i];
    } // Copy

    inline void Copy(const MoneyMakerStock* stock, unsigned int history = MONEYMAKER_HISTORY)
    {
        for (unsigned int i = 0; i < history; i++)
            s[i] = (*stock)[i];
    } // Copy

    inline void operator=(const MoneyMakerStock& data)
    {
        Copy(data);
    } // operator=

    inline void operator=(const MoneyMakerStock* data)
    {
        Copy(data);
    } // operator=

    inline void Clear(unsigned int history = MONEYMAKER_HISTORY)
    {
        for (unsigned int i = 0; i < history; i++)
            s[i] = 0.0f; // Clear all the history days
    } // Clear

#ifndef __CUDACC__
    bool Load(const FireStarterSettings& settings, const std::string& filePath);
#endif

    inline MoneyMakerStock(const struct MoneyMakerStock& data)
    {
        Copy(data);
    } // MoneyMakerStock

    inline MoneyMakerStock(const struct MoneyMakerStock* data)
    {
        Copy(data);
    } // MoneyMakerStock

    inline MoneyMakerStock(void)
    {
        Clear();
    } // MoneyMakerStock
} MoneyMakerStock;

typedef struct MoneyMakerStocks
{
    float s[MONEYMAKER_HISTORY * MONEYMAKER_STOCKS];

    static inline size_t StocksSize(unsigned int history = MONEYMAKER_HISTORY, unsigned int stocks = MONEYMAKER_STOCKS)
    {
        return sizeof(float) * history * stocks;
    } // StocksSize

    static inline size_t StocksSize(const FireStarterSettings& settings)
    {
        return sizeof(float) * settings.m_stocks * settings.m_history;
    } // StocksSize

    inline MoneyMakerStock& StockData(unsigned int stock = 0, unsigned int history = MONEYMAKER_HISTORY)
    {
        return *(MoneyMakerStock*)(&s[stock * history]);
    } // StockData

    inline const MoneyMakerStock& StockData(unsigned int stock = 0, unsigned int history = MONEYMAKER_HISTORY) const
    {
        return *(MoneyMakerStock*)(&s[stock * history]);
    } // StockData

    inline void Stock(MoneyMakerStock& stockData, unsigned int stock = 0, unsigned int history = MONEYMAKER_HISTORY)
    {
        stockData = *(MoneyMakerStock*)(&s[stock * history]);
    } // Stock

    inline void Stock(MoneyMakerStock* stockData, unsigned int stock = 0, unsigned int history = MONEYMAKER_HISTORY)
    {
        stockData = (MoneyMakerStock*)(&s[stock * history]);
    } // Stock

    inline void Copy(MoneyMakerStock& stockData, unsigned int stock = 0, unsigned int history = MONEYMAKER_HISTORY)
    {
        StockData(stock, history).Copy(stockData, history);
    } // Copy

    inline void Copy(MoneyMakerStock* stockData, unsigned int stock = 0, unsigned int history = MONEYMAKER_HISTORY)
    {
        StockData(stock, history).Copy(stockData, history);
    } // Copy

#ifndef __CUDACC__
    inline bool Load(const FireStarterSettings& settings, const std::string& path, unsigned int stock = 0)
    {
        return StockData(stock, settings.m_history).Load(settings, path);
    } // Load
#endif
} MoneyMakerStocks;