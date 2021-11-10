#include<iostream>
#include<Windows.h>
#include"Fraction.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char answer1;
	cout << "Почнемо роботу ? \nВедіть т(так) або н(ні) : ";
	cin >> answer1;


	if (answer1 == 'т')
		while (true)
		{
			Fraction a, b;
			int n1, n2, d1, d2;
			char o, answer2;

			cout << "Ведіть чисельник першого дроба : ";
			cin >> n1;
			a.setN(n1);
			cout << "Ведіть знаменик першого дроба : ";
			cin >> d1;
			a.setD(d1);

			cout << "Виберіть операцію + - * / : ";
			cin >> o;

			switch (o)
			{
			case '+':
			{
				cout << "Ведіть чисельник другого дроба : ";
				cin >> n2;
				b.setN(n2);
				cout << "Ведіть знаменик другого дроба : ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a + b;

				cout << "Ваш результат : " << c.getN() << "/" << c.getD() << endl;

				break;
			}
			case '-':
			{
				cout << "Ведіть чисельник другого дроба : ";
				cin >> n2;
				b.setN(n2);
				cout << "Ведіть знаменик другого дроба : ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a - b;

				cout << "Ваш результат : " << c.getN() << "/" << c.getD() << endl;

				break;
			}
			case '*':
			{
				cout << "Ведіть чисельник другого дроба : ";
				cin >> n2;
				b.setN(n2);
				cout << "Ведіть знаменик другого дроба : ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a * b;

				cout << "Ваш результат : " << c.getN() << "/" << c.getD() << endl;

				break;
			}
			case '/':
			{
				cout << "Ведіть чисельник другого дроба : ";
				cin >> n2;
				if (n2 == 0)
				{
					cout << "Не можливо виконати дію при чисельнику рівному 0 \nВедіть число відміне від 0 :";
					cin >> n2;
				};
				b.setN(n2);
				cout << "Ведіть знаменик другого дроба : ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a / b;

				cout << "Ваш результат : " << c.getN() << "/" << c.getD() << endl;

				break;
			}


			default:
				cout << "Вибрана не правильна операція" << endl;
				break;
			}

			cout << "Виконати ще одну операцію? \nВедіть т(так) або н(ні) : ";
			cin >> answer2;
			if (answer2 == 'н')
				break;

		}

	return 0;

}