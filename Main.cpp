#include<iostream>
#include"Fraction.h"
#include"Fraction.cpp"
using namespace std;

int main()
{
	Fraction fr;
	fr.setnumerator(5);
	fr.setdenominator(2);
	fr.getnumerator();
	fr.getdenominator();
	fr.AddFraction(numerator, denominator);
	fr.MinusFraction(numerator, denominator);
	fr.MnoFraction(numerator, denominator);
	fr.DilFraction(numerator, denominator);
}