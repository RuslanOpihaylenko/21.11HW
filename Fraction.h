#pragma once
class Fraction
{
private:
	double numerator;
	double denominator;
public:
	void AddFraction(double my_numerator, double my_denominator);
	void MinusFraction(double my_numerator, double my_denominator);
	void MnoFraction(double my_numerator, double my_denominator);
	void DilFraction(double my_numerator, double my_denominator);
	void setnumerator(double my_numerator);
	void setdenominator(double my_denominator);
	double getnumerator();
	double getdenominator();
	double  operator+(Fraction fr);

};

