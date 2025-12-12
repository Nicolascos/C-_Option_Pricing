#include "CallOption.h"

CallOption::CallOption(double expiry,double strike):EuropeanVanillaOption(expiry,strike){}
OptionType CallOption::GetOptionType() const { return OptionType::Call; }

double CallOption:: payoff(double s) const 
{
	if (s >= getStrike()) 
	{
		return s - getStrike();
	}
	else 
	{
		return 0;
	}
}