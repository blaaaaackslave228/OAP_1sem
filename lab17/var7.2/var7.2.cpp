#include <iostream>//покдлючение библиотеки
using namespace std;//чтобы не писать каждый раз std
//используем функцию дл€ поиска отрицательных элементов
void Negative(int** matrix, int n, int m) {
    //с помощью флага находим отрицательный элемент
    for (int j = 0; j < m; j++) {
        bool negative = true;
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] >= 0) {
                negative = false;
                break;
            }
            sum += matrix[i][j];
            count++;
        }
        if (negative) {
            //если он отрицательный, то мы находим среднее арифметическое этих элементов и потом отнимаем это значение от всех других элементов матрицы
            float sum1 = (float)sum / count;
            cout << "—реднее арифметическое отрицательных элементов в столбце " << j + 1 << " равно: " << sum1 << endl;
            for (int i = 0; i < n; i++) {
                for (int k = 0; k < m; k++) {
                    matrix[i][k] -= sum1;
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
    //возвращаемс€ к функции и выводим на экран изменненную матрицу
    Negative(matrix, n, m);
    cout << "»змененна€ матрица: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)//очищаем массив из пам€ти
        delete[] matrix[i];
    delete[] matrix;
    return 0;//завершаем функцию
}
