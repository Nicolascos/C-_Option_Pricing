#include "Option.h"

Option::Option(double expiry)
{
	_expiry = expiry;
};

Option::~Option() {};


double Option::get_expiry() const 
{
	return _expiry;
}
