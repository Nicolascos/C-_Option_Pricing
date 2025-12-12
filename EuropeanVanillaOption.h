#pragma once
#include "Option.h"

enum class OptionType
{
	Call,
	Put

};

class EuropeanVanillaOption:public Option
{
	double _strike;
	OptionType _type;
	

public:
    EuropeanVanillaOption(double expiry, double strike);
	double getStrike() const;
	virtual OptionType GetOptionType() const = 0;


};

