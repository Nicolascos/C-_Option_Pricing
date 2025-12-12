#include "PutOption.h"
PutOption::PutOption(double expiry,double strike):EuropeanVanillaOption(expiry,strike){}
OptionType PutOption::GetOptionType() const { return OptionType::Put;}

double PutOption::payoff(double s) const
{
	if (s >= getStrike())
	{
		return getStrike()-s;
	}
	else
	{
		return 0;
	}
}

