#include <iostream>//подключение библиотеки
using namespace std;//чтобы не писать каждый раз std
//создание функции для поиска положительного элемента и его номера
void Positive(int** matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        bool positive = false;//осуществляем поиск с помощью флагов
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] > 0) {
                positive = true;
                break;
            }
        }
        if (positive) {
            cout << "Номер строки: " << i + 1 << endl;//выводим номер строки
            if (i > 0) {
                for (int k = 0; k < m; k++) {
                    matrix[i - 1][k] = -matrix[i - 1][k];//меняем знаки на противоположные
                }
            }
            break;
        }
    }
}

int main()//объявляем главную функцию
{
    setlocale(LC_ALL, "RU");//подключаем кириллицу
    int n, m;//вводим размерность матрицы
    cout << "Введите количество строк и столбцов: ";
    cin >> n >> m;
    int** matrix = new int* [n];//создание динамического массива
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];
    cout << "Введите элементы матрицы: " << endl;//вводим элементы массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    //выводим измененную матрицу на экран
    Positive(matrix, n, m);
    cout << "Измененная матрица: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    //очищаем массив из памяти
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;
    return 0;//завершение программы
}
