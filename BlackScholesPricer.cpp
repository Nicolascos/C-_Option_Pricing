#include "BlackScholesPricer.h"
#include <cmath>
#include<stdexcept>

BlackScholesPricer::BlackScholesPricer(EuropeanVanillaOption* option, double asset_price, double interest_rate, double volatility)
{
	_option = option;
	_asset_price = asset_price;
	_interest_rate = interest_rate;
	_volatility = volatility;

	if (option == nullptr) 
	{
		throw std::invalid_argument("Option must be initialized (it's a pointer)");
	}
}

double BlackScholesPricer::operator() ()const
	{
		double S = _asset_price;
		double K = _strike;
		double r = _interest_rate;
		double T = _expiry; //En années (à vérifier!!!)
		double sigma = _volatility;

		double d1 = (log(S / K) + T * (r + sigma * sigma / 2)) / (sigma * sqrt(T));
		double d2 = d1 - sigma * sqrt(T);

		if (GetOptionType(_option) == Call) 
		{
			return S * (0.5 * std::erfc(-d1 / sqrt(2))) - K * exp(-r * T) * (0.5 * std::erfc(-d2 / sqrt(2))); //erfc: N(x)=1/2 erfc(-x/sqrt(2))
		}

		else 
		{
			return K * exp(-r * T) * (0.5 * std::erfc(d2 / sqrt(2))) - S * (0.5 * std::erfc(d1 / sqrt(2)));
		}


	}