#pragma once
class Option
{
	double _expiry;


public:
	Option(double _expiry);

	virtual ~Option();
	double get_expiry() const;
	virtual double payoff(double S) const = 0;

};
