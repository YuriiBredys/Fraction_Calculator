#include <iostream>
#include <cmath>
#include "Fraction.h"
using namespace std;

Fraction::Fraction(int _n, int _d) :n(_n), d(_d)
{
	if (d == 0)
	{

		throw "Division by zero ";

	}

	simplify();
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
		throw "exeption";
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
	if(other.n == 0)
	{
		throw "Exeption";
	}

	Fraction temp;

	temp.n = this->n * other.d;
	temp.d = this->d * other.n;
	temp.simplify();

	return temp;
}

istream& operator >>(istream& in, Fraction& fraction)
{
	in >> fraction.n;
	in >> fraction.d;

	if(fraction.d == 0)
	{
		throw "exeption";
	}

	return in;
}

ostream& operator<< (ostream& out, const Fraction& fraction)
{
	out << fraction.n << '/' << fraction.d << endl;

	return out;
}

void Fraction::simplify()
{
	int end;
	end = min(n, d);

	if (n == 0)
	{
		d = 0;
	}

	for (int i = 2; i <= end;)
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
