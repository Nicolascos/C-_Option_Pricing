#pragma once
#include "EuropeanVanillaOption.h" // to inherit from EuropeanVanillaOption

class CallOption: public EuropeanVanillaOption // Heritage from EuropeanVanillaOption
{
public:
	CallOption(double expiry,double strike);
	OptionType GetOptionType() const override;
	double payoff(double s) const override;

};
