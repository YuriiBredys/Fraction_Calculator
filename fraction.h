#pragma once
using namespace std;

class Fraction
{
public:
	Fraction(int, int);

	Fraction();

	~Fraction();

	const Fraction operator *(const Fraction& other);

	const Fraction operator -(const Fraction& other);

	const Fraction operator +(const Fraction& other);

	const Fraction operator /(const Fraction& other);

	int getN() const;

	int getD() const;

	void setN(int);

	void setD(int);

	friend istream& operator>>(istream& in, Fraction& fraction);

	friend ostream& operator<< (ostream& out, const Fraction& fraction);

private:
	int n;
	int d;

	void simplify();
};
