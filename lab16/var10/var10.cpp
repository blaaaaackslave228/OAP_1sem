//подключение библиотек
#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;//чтобы не писать каждый раз std
//подключение двух функций для матрицы и строки соответственно
int matrix(int** A, int N, int M, int k) {
	return 0;
}
int massiv(const char* str) {
	return 0;
}

int main()//объявление главной функции
{
	//подключение локалей для работы с русскими символами 
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//диалоговая программа с решением наших задач
	int choice;
	do
	{
		cout << "Выберите вариант работы" << endl;
		cout << "1 - с матрицей" << endl;
		cout << "2 - со строкой" << endl;
		cout << "3 - выход" << endl;
		cin >> choice;
		switch (choice)
		{
			//работа с матрицей
		case 1: {
			//инициализация переменных и флага
			int** A, N, M, k;
			bool found = false;
			//ввод матрицы
			cout << "Введите число строк: ";
			cin >> N;
			cout << "Введите число столбцов: ";
			cin >> M;
			//инициализация динамического массива
			A = new int* [N];
			for (int i = 0; i < N; i++) {
				A[i] = new int[M];
			}
			cout << "Введите матрицу: " << endl;//вводим элементы матрицы
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					cout << "A(" << i + 1 << ", " << j + 1 << "): ";
					cin >> A[i][j];
				}
			}
			cout << "Исходная матрица: " << endl;//выводим исходную матрицу на экран
			for (int i = 0; i < N; i++)
			{
				cout << "[";
				for (int j = 0; j < M; j++)
				{
					cout << " " << A[i][j] << " ";
				}
				cout << "]" << endl;
			}
			//вводим число, с которым хотим работать
			cout << "Введите число, которое нужно найти: ";
			cin >> k;
			found = matrix(A, N, M, k);//подключение прототипа
			//с помощью цикла находим поиск нужного нам элемента 
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (A[i][j] == k) {
						cout << "Искомое число находится в " << j + 1 << " столбце" << endl;//вывод сообщения
						found = true;
						break;
					}
				}
			}
			if (!found) {
				cout << "Искомое число не найдено" << endl;//вывод сообщения
			}
			break;
		}
			  //работа со строкой
		case 2: {
			//храним строку, где не больше 100 символов
			char str[100];
			//вводим строку
			cout << "Введите строку: ";
			cin.ignore();//очищаем строку с помощью буфера
			cin.getline(str, 100);//читаем входную строку
			//инициализируем переменные для разделения строки на слова и для работы со словами и счетчик
			stringstream ss(str);
			string words[100];
			int count = 0;
			//находим количество слов в строке
			while (ss >> words[count]) {
				count++;
			}
			//если число слов четное, то центральные слова меняем местами
			if (count % 2 == 0) {
				swap(words[count / 2 - 1], words[count / 2]);
			}
			for (int i = 0; i < count; i++) {
				cout << words[i] << ' ';//выводим результат
			}
			cout << endl;
			break;
		}
		case 3:
			break;//выход из программы
		}
	} while (choice != 3);//работаем с диалогом, пока не выберем 3 вариант 
	return 0;//завершение программы
}