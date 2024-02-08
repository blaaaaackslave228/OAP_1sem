#include <iostream>//подключение библиотеки
#include <cmath>//подключение математических функций
using namespace std;//чтобы не писать каждый раз std
int main()//объ€вление функции
{
	setlocale(LC_ALL, "RUSSIAN");//подключаем кириллицу
	float c, d = 0, a, b, sum;//объ€вл€ем переменные
	int n = 6;
	for (int i = 1; i <=n; i++) {//используем цикл for дл€ решени€ двух условий
		//вводим a и b
		cin >> a;
		cin >> b;
		//используем формулы дл€ c и d
		c = sqrt(a + b);
		sum = c / i;
		d += sum;
	}
	cout << d;//вывести сумму
}