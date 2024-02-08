//подключение библиотек
#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;//чтобы не писать каждый раз std
//подключение двух функций для матрицы и строки соответственно
int matrix(int** A, int N, int M) {
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
			int** A, N, M, foundpositive = 0, foundnegative=0,  foundzero = 0;
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
			//с помощью цикла находим поиск нужных нам элементов
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (A[i][j] == 0) {
						foundzero++;
					}
					if (A[i][j] < 0) {
						foundnegative++;
					}
					if (A[i][j] > 0) {
						foundpositive++;
					}
				}
			}
			cout << "Количество положительных элементов: " << foundpositive<<endl;//вывод результата
			cout << "Количество отрицательных элементов: " << foundnegative << endl;//вывод результата
			cout << "Количество нулевых элементов: " << foundzero << endl;//вывод результата
			break;
		}
			  //работа со строкой
		case 2: {
			char str[100];//инициализация переменной, которая будет хранить 100 символов
			//ввод строки
			cout << "Введите строку: ";
			cin.ignore();//очищаем с помощью буфера строку
			cin.getline(str, 100);//читаем входную строку
			massiv(str);//подключаем прототип
			//инициализация переменных для разделения строки на слова и для работы со словами и переменная счетчика слов
			stringstream ss(str);
			string word;
			int wordcount=0;
			//с помощью цикла находим сумму слов в строке
			while (ss >> word) {
				wordcount++;
			}
				cout << "Количество слов в строке: "<<wordcount<<endl;//выводим результат
			break;
		}
		case 3:
			break;//выход из программы
		}
	} while (choice != 3);//работаем с диалогом, пока не выберем 3 вариант 
	return 0;//завершение программы
}