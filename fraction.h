#pragma once

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


	void simplify();

private:
	int n;
	int d;
};
