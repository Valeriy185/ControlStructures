#include<iostream>
#include<conio.h>
using namespace std;
//#define WHILE_1
//#define WHILE_2
//#define SHOOTER
//#define TICKET
//#define SUM_OF_ODD_NUMBERS
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int n; //����-�� ��������
	int i = 0; //������� �����
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << i << "Hello\n";
		i++; //��� �����
	}
#endif // WHILE_1
#ifdef WHILE_2 
	int n;
	cout << "������� ���������� �������� "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2
#ifdef SHOOTER
	char key; //��� ���������� ����� ������� ��� �������
	key = _getch(); 
	if (key == 119)
	{
		cout << "�������� �����";
	}
	else if (key == 115)
	{
		cout << "�������� �����";
	}
	else if (key == 97)
	{
		cout << "������� �����";
	}
	else if (key == 100)
	{
		cout << "������� ������";
	}
	else if (key == 32)
	{
		cout << "������";
	}
	else if (key == 13)
	{
		cout << "�����";
	}

	else { cout << "��� ������� �� �������"; }
#endif // SHOOTER
#ifdef TICKET
	int a, b, c, d, e, f;
	int Summ_1, Summ_2;
	cin >> a >> b >> c >> d >> e >> f;
	Summ_1 = a + b + c;
	Summ_2 = d + e + f;
	if (Summ_1 == Summ_2)
	{
		cout << "� ��� ���������� �����!" << endl;
	}
	else { cout << "��� �� ���������� �����!"; }

#endif // TICKET
#ifdef SUM_OF_ODD_NUMBERS
	int a;
	int x_1, x_2;
	cout << "������� ����� �����: - "; cin >> a;
	x_1 = (a + 1) / 2;
	x_2 = x_1 * x_1;
	cout << "����� ���� �������� ����� = " << x_2;
	cout << endl;

#endif // SUM_OF_ODD_NUMBERS

}
