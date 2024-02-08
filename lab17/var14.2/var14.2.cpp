#include <iostream>//подключение библиотеки
using namespace std;//чтобы не писать каждый раз std
//создаем функцию дл€ поиска положительных элементов
void Positive(int** matrix, int n, int m) {
    for (int j = 0; j < m; j++) {
        bool positive = false;//поиск осуществл€ем с помощью флагов
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] > 0) {
                positive = true;
                break;
            }
        }
        if (positive && j > 0) {//если все элементы столбца положительные, то знаки элементов противоположного столбца мен€ем на противоположные
            for (int i = 0; i < n; i++) {
                matrix[i][j - 1] = -matrix[i][j - 1];
            }
        }
    }
}

int main()//объ€вл€ем главную функцию
{
    setlocale(LC_ALL, "RU");//подключение кириллицы
    int n, m;//вводим размерность массива
    cout << "¬ведите количество строк и столбцов: ";
    cin >> n >> m;
    int** matrix = new int* [n];//создание динамического массива
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];
    cout << "¬ведите элементы матрицы: " << endl;//вводим элементы матрицы
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    //выводим измененную функцию на экран
    Positive(matrix, n, m);
    cout << "»змененна€ матрица: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    //очищаем массив из пам€ти
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;
    return 0;//завершение программы
}
