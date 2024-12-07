#include<iostream>
#include"Fraction.h"
using namespace std;


int main()
{
	double numerator = 5;
	double denominator = 2;
	Fraction fr;
	fr.setnumerator(numerator);
	fr.setdenominator(denominator);
	fr.getnumerator();
	fr.getdenominator();
	fr.AddFraction(numerator, denominator);
	fr.MinusFraction(numerator, denominator);
	fr.MnoFraction(numerator, denominator);
	fr.DilFraction(numerator, denominator);
}