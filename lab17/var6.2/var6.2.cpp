#include <iostream>//подключение библиотеки
using namespace std;//чтобы не писать каждый раз std
//создание функции дл€ поиска нулевых элементов
void Zero(int** matrix, int n, int m) {
    bool zero = true;//осуществл€ем поиск с помощью флагов
    for (int i = 0; i < n; i++) {
        bool zero1 = false;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                zero1 = true;
                break;
            }
        }
        if (!zero1) {
            zero = false;
            break;
        }
    }
    if (!zero) {//если элемент не равен 0, то мен€ем все отрицательные значени€ на нулевые
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] < 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}

int main()//объ€вл€ем главную функцию
{
    setlocale(LC_ALL, "RU");//подключаем кириллицу
    int n, m;//вводим размерность матрицы
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
    //выводим измененную матрицу на экран
    Zero(matrix, n, m);
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
