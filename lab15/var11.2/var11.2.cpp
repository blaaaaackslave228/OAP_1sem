#include <iostream>//подключение библиотеки ввода/вывода 
using namespace std;//чтобы не писать каждый раз std
int main()//объявляем главную функцию
{
    setlocale(LC_ALL, "RU");//подключение кириллицы
    const int n = 4;//создание размеров матрицы
    int matrix[n][n];//инициализация матрицы
    //заполнение матрицы
    cout << "Введите элементы матрицы:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    //с помощью цикла и флагов находим строки и столбцы с одинаковыми элементами
    for (int k = 0; k < n; k++) {
        bool elements = true;
        for (int i = 0; i < n; i++) {
            if (matrix[k][i] != matrix[i][k]) {
                elements = false;
                break;
            }
        }
        if (elements) {
            cout << "Строка " << k+1 << " совпадает со столбцом " << k+1 << endl;//вывод результата
        }
    }
    return 0;
}