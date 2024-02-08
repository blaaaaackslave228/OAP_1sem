#include <iostream>//подключаем библиотеку
#include <iomanip>//подключаем библиотеку iomanip для использования манипуляторов setw, setfill

void main()//оператор начала текста программы
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;//убирает необходимость писать std:: перед каждым оператором
	char c, space; space = ' ';//переменные для символов "пробел" и для заполнения фигуры
	cout << "Введите символ: "; cin >> c;//запрашивает у пользователя символ для заполнения фигуры
	cout << setw(6) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(5) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(4) << setfill(space) << space;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(3) << setfill(space) << space;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(4) << setfill(space) << space;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(5) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(6) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
}
