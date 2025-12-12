#pragma once
#include "EuropeanVanillaOption.h" // to inherit from EuropeanVanillaOption

class PutOption: public EuropeanVanillaOption // Heritage from EuropeanVanillaOption
{
public:
	PutOption(double strike, double expiry);
	OptionType GetOptionType() const override;
	double payoff(double s) const override;

};

