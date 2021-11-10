#include<iostream>
#include<cmath>
#include"Fraction.h"
using namespace std;

Fraction::Fraction(int _n, int _d) :n(_n), d(_d)
{
	if (n == 0)
	{

		cout << "When the numerator is 0 it is impossible to perform /  " << endl;

	}

	if (d == 0)
	{

		throw "Division by zero ";

	}
}

Fraction::Fraction() {}

Fraction::~Fraction() {}

int Fraction::getN() const
{
	return n;
}

int Fraction::getD() const
{
	return d;
}

void Fraction::setN(int n)
{
	this->n = n;
}

void Fraction::setD(int d)
{
	if (d == 0)
	{

		cout << "The denominator cannot be equal to 0 " << endl;
		cout << "Enter a number other than 0:  ";
	  cin >> d;
	}

	this->d = d;
}


const Fraction Fraction::operator+(const Fraction& other)
{
	Fraction temp;
	temp.n = (this->n * other.d) + (other.n * this->d);
	temp.d = this->d * other.d;
	temp.simplify();
	return temp;
}

const Fraction Fraction::operator-(const Fraction& other)
{
	Fraction temp;
	temp.n = (this->n * other.d) - (other.n * this->d);
	temp.d = this->d * other.d;
	temp.simplify();
	return temp;

}

const Fraction Fraction::operator*(const Fraction& other)
{
	Fraction temp;
	temp.n = this->n * other.n;
	temp.d = this->d * other.d;
	temp.simplify();
	return temp;
}

const Fraction Fraction::operator/(const Fraction& other)
{
	Fraction temp;
	temp.n = this->n * other.d;
	temp.d = this->d * other.n;
	temp.simplify();
	return temp;
}

void Fraction::simplify()
{
	int d2;
	d2 = min(n, d);

	if (n == 0)
	{
		d = 0;
	}

	for (int i = 2; i <= d2;)
	{
		if ((n % i == 0) && (d % i == 0))
		{
			n = n / i;
			d = d / i;
		}
		else
		{
			i++;
		}
	}
}
