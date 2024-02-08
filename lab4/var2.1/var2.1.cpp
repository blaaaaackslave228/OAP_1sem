#include <iostream>//подключаем библиотеку
#include <iomanip>//подключаем библиотеку iomanip для использования манипуляторов setw, setfill

void main()//оператор начала текста программы
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;//убирает необходимость писать std:: перед каждым оператором
	char c, space; space = ' ';//переменные для символов "пробел" и для заполнения фигуры
	cout << "Введите символ: "; cin >> c;//запрашивает у пользователя символ для заполнения фигуры
	cout << setw(42) << setfill(space) << space;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(40) << setfill(space) << space;
	cout << setw(20) << setfill(c) << c << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(24) << setfill(c) << c << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(24) << setfill(c) << c << endl;
	cout << setw(40) << setfill(space) << space;
	cout << setw(20) << setfill(c) << c << endl;
	cout << setw(42) << setfill(space) << space;
	cout << setw(16) << setfill(c) << c << endl;
}
	