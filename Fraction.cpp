#include "Fraction.h"
#include<iostream>
using namespace std;

/*void Fraction::AddFraction(double my_numerator, double my_denominator)
{
	cout << "Add:" << my_numerator + my_denominator << endl;
}

void Fraction::MinusFraction(double my_numerator, double my_denominator)
{
	cout << "Minus:" << my_numerator - my_denominator << endl;
}

void Fraction::MnoFraction(double my_numerator, double my_denominator)
{
	cout << "Mno:" << my_numerator * my_denominator << endl;
}

void Fraction::DilFraction(double my_numerator, double my_denominator)
{
	cout << "Dil:" << my_numerator / my_denominator << endl;
}*/


void Fraction::operator+(double my_numerator, double my_denominator)
{
	return this->my_numerator + this->my_denominator;
}

void Fraction::operator-(double my_numerator, double my_denominator)
{
	return this->my_numerator - this->my_denominator;
}

void Fraction::operator*(double my_numerator, double my_denominator)
{
	return this->my_numerator * this->my_denominator;
}

void Fraction::operator/(double my_numerator, double my_denominator)
{
	return this->my_numerator / this->my_denominator;
}

void Fraction::setnumerator(double my_numerator)
{
	numerator = my_numerator;
}

void Fraction::setdenominator(double my_denominator)
{
	denominator = my_denominator;
}

double Fraction::getnumerator()
{
	return numerator;
}

double Fraction::getdenominator()
{
	return denominator;
}

