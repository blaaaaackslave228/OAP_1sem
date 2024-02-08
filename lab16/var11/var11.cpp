//подключение библиотек
#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;//чтобы не писать каждый раз std
//подключение двух функций для матрицы и строки соответственно
int matrix(int** A, int N, int M, int k) {
	return 0;
}
int massiv(char str1, char str) {
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
			int** A, N, M;
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
			int maxElement = A[0][0];//иницмализация максимального элемента 
			int positions[100][2];//предполагаем, что максимальных элементов не больше 100
			int posCount = 0;//счетчик позиции максимального элемента
			int sum = 0;//ининициализируем переменную, которая будет суммировать элементы, которые ниже главное диагонали
			//с помощью цикла находим один или несколько максимальных элементов и их позиции
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (A[i][j] > maxElement) {
						maxElement = A[i][j];
						posCount = 0;
						positions[posCount][0] = i;
						positions[posCount][1] = j;
						posCount++;
					}
					else if (A[i][j] == maxElement) {
						positions[posCount][0] = i;
						positions[posCount][1] = j;
						posCount++;
					}
					//находим сумму элементов, которые ниже главной диагонали
					if (i > j) {
						sum += A[i][j];
					}
				}
			}
			cout << "Максимальный элемент: " << maxElement << endl;//вывод результата
			cout << "Позиции максимального элемента: " << endl;
			for (int i = 0; i < posCount; i++) {
				cout << "(" << positions[i][0] + 1 << ", " << positions[i][1] + 1 << ")" << endl;//вывод результата
			}
			cout << "Сумма элементов ниже главной диагонали: " << sum << endl;//вывод результата
			break;
		}
			  //работа со строкой
		case 2: {
			setlocale(LC_ALL, "RU");//подключаем кириллицу
			char str1[50], str[] = "*";//объявление двух массивов
			int n;//объявление переменной, которая показывает содержание символов в строке
			//вводим строку
			cout << "Введите строку: ";
			cin >> str1;
			n = strlen(str1);//находим длину строки
			//создаем цикл for, который проходит по символам строки и ищет "а"
			for (int i = 0; str1[i] != '\0'; i++) {
				if (str1[i] == 'c')
				{
					//если в строке есть символ "а", то после его необходимо вставить "!"
					for (int j = n + 1; j != i; j--)
					{
						str1[j + 1] = str1[j];
					}
					str1[i + 1] = '*';
				}
			}
			cout << "Вывод строки: " << str1 << endl;//вывод новой строки
			break;
		}
		case 3:
			break;//выход из программы
		}
	} while (choice != 3);//работаем с диалогом, пока не выберем 3 вариант 
	return 0;//завершение программы
}