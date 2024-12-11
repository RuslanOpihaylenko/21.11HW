#pragma once
class Fraction
{
private:
	double numerator;
	double denominator;
public:
	void  operator+(double, double);
	void  operator-(double, double);
	void  operator*(double, double);
	void  operator/(double, double);
	void setnumerator(double my_numerator);
	void setdenominator(double my_denominator);
	double getnumerator();
	double getdenominator();

};

