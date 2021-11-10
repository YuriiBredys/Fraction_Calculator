#include<iostream>
#include"Fraction.h"
using namespace std;

int main()
{
	char answer1;
	cout << "Shall we start work? \nEnter y (yes) or n (no): ";
	cin >> answer1;


	if (answer1 == 'y')
		while (true)
		{
			Fraction a, b;
			int n1, n2, d1, d2;
			char o, answer2;

			cout << "Enter the numerator of the first fraction: ";
			cin >> n1;
			a.setN(n1);
			cout << "Enter the denominator of the first fraction: ";
			cin >> d1;
			a.setD(d1);

			cout << "Select operation + - * /: ";
			cin >> o;

			switch (o)
			{
			case '+':
			{
				cout << "Enter the numerator of the second fraction: ";
				cin >> n2;
				b.setN(n2);
				cout << "Enter the denominator of the second fraction: ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a + b;

				cout << "Result is : " << c.getN() << "/" << c.getD() << endl;

				break;
			}
			case '-':
			{
				cout << "Enter the numerator of the second fraction: ";
				cin >> n2;
				b.setN(n2);
				cout << "Enter the denominator of the second fraction: ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a - b;

				cout << "Result is : " << c.getN() << "/" << c.getD() << endl;

				break;
			}
			case '*':
			{
				cout << "Enter the numerator of the second fraction: ";
				cin >> n2;
				b.setN(n2);
				cout << "Enter the denominator of the second fraction: ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a * b;

				cout << "Result is : " << c.getN() << "/" << c.getD() << endl;

				break;
			}
			case '/':
			{
				cout << "Enter the numerator of the second fraction: ";
				cin >> n2;
				if (n2 == 0)
				{
					cout << "Unable to perform action with numerator equal to 0 \nEnter a number other than 0: ";
					cin >> n2;
				};
				b.setN(n2);
				cout << "Enter the denominator of the second fraction: ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a / b;

				cout << "Result is : " << c.getN() << "/" << c.getD() << endl;

				break;
			}


			default:
				cout << "Incorrect operation selected " << endl;
				break;
			}

			cout << "Perform another operation? \nEnter y (yes) or n (no): ";
			cin >> answer2;
			if (answer2 == 'n')
				break;

		}

	return 0;

}