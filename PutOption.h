#pragma once
#include "EuropeanVanillaOption.h"
class PutOption: public EuropeanVanillaOption
{
public:
	PutOption(double strike, double expiry);
	OptionType GetOptionType() const override;
	double payoff(double s) const override;

};

