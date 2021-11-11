#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	char answer1;

	cout << "Shall we start work? \nEnter y (yes) or n (no): ";
	cin >> answer1;

	if(answer1== 'n')
	{
		return 0;
	}

	while (true)
	{
		Fraction a, b, result;
		char o, answer2;

		while (true)
		{
			try
			{
				cout << "Enter the first fraction: ";
				cin >> a;
				break;
			}
			catch (...)
			{
				cout << "The denominator cannot be equal to 0 " << endl;
				cout << "Try again" << endl;
			}
		}

		cout << "Select operation + - * /: ";
		cin >> o;

		while (true)
		{
			try
			{
				cout << "Enter the second fraction: ";
				cin >> b;
				break;
			}
			catch (...)
			{
				cout << "The denominator cannot be equal to 0 " << endl;
				cout << "Try again" << endl;
			}
		}

		switch (o)
		{
		case '+':
		{
			result = a + b;
			break;
		}
		case '-':
		{
			result = a - b;
			break;
		}
		case '*':
		{
			result = a * b;
			break;
		}
		case '/':
		{
			try
			{
				result = a / b;
				break;
			}
			catch (...)
			{
				cout << "Division by zero " << endl;
				break;
			}
		}
		default:
			cout << "Incorrect operation selected " << endl;
			break;
		}

		cout << "Your result is " << result << endl;

		cout << "Perform another operation? \nEnter y (yes) or n (no): ";
		cin >> answer2;
		if (answer2 == 'n')
			break;
	}

	return 0;
}
