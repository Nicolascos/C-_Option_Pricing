#include "EuropeanVanillaOption.h"
#include <stdexcept> //Pour gérer les exceptions/erreurs

EuropeanVanillaOption::EuropeanVanillaOption(double expiry, double strike):Option(expiry)
{
	
	if (expiry < 0) 
	{
		throw std::invalid_argument("Expiry must be positive."); //On renvoie une erreur si on a des valeurs aberrantes
	}

	if (strike < 0) 
	{
		throw std::invalid_argument("Strike must be positive.");
	}

	else 
	{
		_strike = strike;
	}

}
