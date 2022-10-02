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
	int n; //колв-во итераций
	int i = 0; //счётчик цикла
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << "Hello\n";
		i++; //шаг цикла
	}
#endif // WHILE_1
#ifdef WHILE_2 
	int n;
	cout << "Введите количество итераций "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2
#ifdef SHOOTER
	char key; //Эта переменная будет хранить код клавиши
	key = _getch(); 
	if (key == 119)
	{
		cout << "Движение вперёд";
	}
	else if (key == 115)
	{
		cout << "Движение назад";
	}
	else if (key == 97)
	{
		cout << "Поворот влево";
	}
	else if (key == 100)
	{
		cout << "Поворот вправо";
	}
	else if (key == 32)
	{
		cout << "Прыжок";
	}
	else if (key == 13)
	{
		cout << "Огонь";
	}

	else { cout << "Эта клавиша не активна"; }
#endif // SHOOTER
#ifdef TICKET
	int a, b, c, d, e, f;
	int Summ_1, Summ_2;
	cin >> a >> b >> c >> d >> e >> f;
	Summ_1 = a + b + c;
	Summ_2 = d + e + f;
	if (Summ_1 == Summ_2)
	{
		cout << "У Вас счастливый билет!" << endl;
	}
	else { cout << "Это не счастливый билет!"; }

#endif // TICKET
#ifdef SUM_OF_ODD_NUMBERS
	int a;
	int x_1, x_2;
	cout << "ВВедите целое число: - "; cin >> a;
	x_1 = (a + 1) / 2;
	x_2 = x_1 * x_1;
	cout << "Сумма всех нечётных чисел = " << x_2;
	cout << endl;

#endif // SUM_OF_ODD_NUMBERS

}
