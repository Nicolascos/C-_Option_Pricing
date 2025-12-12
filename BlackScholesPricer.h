#pragma once
#include "EuropeanVanillaOption.h"

class BlackScholesPricer
{
	EuropeanVanillaOption* _option;
	double _asset_price;
	double _interest_rate;
	double _volatility;

public:
	BlackScholesPricer(EuropeanVanillaOption* option, double asset_price, double interest_rate, double volatility);
	friend class EuropeanVanillaOption;
	~BlackScholesPricer();
	double operator() () const;
	double delta() const;
};
