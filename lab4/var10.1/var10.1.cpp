#include <iostream>//подключаем библиотеку
#include <iomanip>//подключаем библиотеку iomanip для использования манипуляторов setw, setfill

void main()//оператор начала текста программы
{
	setlocale(LC_CTYPE, "Russian");//оператор, который используется для вывода русского текста
	using namespace std;//убирает необходимость писать std:: перед каждым оператором
	char c, space; space = ' ';//переменные для символов "пробел" и для заполнения фигуры
	cout << "Введите символ: "; cin >> c;//запрашивает у пользователя символ для заполнения фигуры
	cout << setw(5) << setfill(space) << space;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(3) << setfill(space) << space;
	cout << setw(19) << setfill(c) << c << endl;
	cout << setw(1) << setfill(space) << space;
	cout << setw(23) << setfill(c) << c << endl;
	cout << setw(1) << setfill(space) << space;
	cout << setw(23) << setfill(c) << c << endl;
	cout << setw(3) << setfill(space) << space;
	cout << setw(19) << setfill(c) << c << endl;
	cout << setw(5) << setfill(space) << space;
	cout << setw(15) << setfill(c) << c << endl;
}

