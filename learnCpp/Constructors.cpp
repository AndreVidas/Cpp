#include <iostream>
#include <cassert>

using namespace std;

class Fraction{
private:
	int m_numerator;
	int m_denominator;

public:
	/*
	// default constructor
	Fraction(){
		m_numerator = 0;
		m_denominator = 1;
	}
	*/

	// constructor with two paramters, one parameter having a default value
	Fraction(int numerator=0, int denominator=1){
		assert(denominator != 0);
		m_numerator = numerator;
		m_denominator = denominator;
	}


	int getNumerator() {return m_numerator; }
	int getDenominator() {return m_denominator; }
	double getValue() {return static_cast<double>(m_numerator) / m_denominator; }
};

int main(){
	int x(5);
	Fraction fiveThirds;
	cout << fiveThirds.getNumerator() << endl;
	cout << fiveThirds.getDenominator() << endl;
	cout << fiveThirds.getValue() << endl;
}