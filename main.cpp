#include<iostream>
#include<Windows.h>
#include"Fraction.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char answer1;
	cout << "������� ������ ? \n����� �(���) ��� �(�) : ";
	cin >> answer1;


	if (answer1 == '�')
		while (true)
		{
			Fraction a, b;
			int n1, n2, d1, d2;
			char o, answer2;

			cout << "����� ��������� ������� ����� : ";
			cin >> n1;
			a.setN(n1);
			cout << "����� �������� ������� ����� : ";
			cin >> d1;
			a.setD(d1);

			cout << "������� �������� + - * / : ";
			cin >> o;

			switch (o)
			{
			case '+':
			{
				cout << "����� ��������� ������� ����� : ";
				cin >> n2;
				b.setN(n2);
				cout << "����� �������� ������� ����� : ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a + b;

				cout << "��� ��������� : " << c.getN() << "/" << c.getD() << endl;

				break;
			}
			case '-':
			{
				cout << "����� ��������� ������� ����� : ";
				cin >> n2;
				b.setN(n2);
				cout << "����� �������� ������� ����� : ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a - b;

				cout << "��� ��������� : " << c.getN() << "/" << c.getD() << endl;

				break;
			}
			case '*':
			{
				cout << "����� ��������� ������� ����� : ";
				cin >> n2;
				b.setN(n2);
				cout << "����� �������� ������� ����� : ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a * b;

				cout << "��� ��������� : " << c.getN() << "/" << c.getD() << endl;

				break;
			}
			case '/':
			{
				cout << "����� ��������� ������� ����� : ";
				cin >> n2;
				if (n2 == 0)
				{
					cout << "�� ������� �������� �� ��� ���������� ������ 0 \n����� ����� ����� �� 0 :";
					cin >> n2;
				};
				b.setN(n2);
				cout << "����� �������� ������� ����� : ";
				cin >> d2;
				b.setD(d2);

				Fraction c = a / b;

				cout << "��� ��������� : " << c.getN() << "/" << c.getD() << endl;

				break;
			}


			default:
				cout << "������� �� ��������� ��������" << endl;
				break;
			}

			cout << "�������� �� ���� ��������? \n����� �(���) ��� �(�) : ";
			cin >> answer2;
			if (answer2 == '�')
				break;

		}

	return 0;

}