#include <iostream>//подключаем библиотеку ввода/вывода
using namespace std;//чтобы не писать каждый раз std
int main()//объявляем главную функцию
{
    srand(time(NULL));//подключаем рандомайзер
    setlocale(LC_ALL, "RU");//подключаем кириллицу
    //инициализируем переменные
    const int n = 2;
    const int mas = 2 * n;
    int A[mas][mas];
    cout << "Первоначальная расстановка:" << endl;
    // Заполнение матрицы случайными числами от -10 до 10
    for (int i = 0; i < mas; ++i) {
        for (int j = 0; j < mas; ++j) {
            A[i][j] = rand() % 21 - 10;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    // Перестановка блоков с использованием временной переменной
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int temp = A[i][j];
            A[i][j] = A[i + n][j + n];
            A[i + n][j + n] = temp;
            temp = A[i + n][j];
            A[i + n][j] = A[i][j + n];
            A[i][j + n] = temp;
        }
    }
    //вывод новой матрицы
    cout << "После перестановки блоков:" << endl;
    for (int i = 0; i < mas; ++i) {
        for (int j = 0; j < mas; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;//завершение программы
}

