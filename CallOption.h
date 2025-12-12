#pragma once
#include "EuropeanVanillaOption.h"

class CallOption: public EuropeanVanillaOption
{
public:
	CallOption(double expiry,double strike);
	OptionType GetOptionType() const override;
	double payoff(double s) const override;

};
