#include <iostream>
using namespace std;
//#define FOR_BASICS
void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	int n;//количество итерацй
	cout << "¬ведите количество итераций: "; cin >> n;
	for (int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;

#endif // FOR_BASICS
	int f = 1;//‘акториал числа введЄнного с клавиатуры
	int n;
	cout << "¬ведите число, дл€ вычеслени€ факториала: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
}