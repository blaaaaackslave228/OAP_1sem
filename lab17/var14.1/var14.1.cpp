#include <iostream>//подключаем библиотеку
using namespace std;//чтобы не писать каждый раз std
//создаем функцию, которая будет находить разность между максимальным и минимальным элементами
int massiv(int* mas, int size) {
    int min = mas[0], max = mas[0], diff = 0;
    for (int i = 0; i < size; i++)
    {
        if (mas[i] < min) {
            min = mas[i];//находим минимальный элемент
        }
        if (mas[i] > max) {
            max = mas[i];//находим максимальный элемент
        }
        if (max > mas[i] || min < mas[i]) {
            diff = max - min;//находим разность элементов
        }
    }
    return diff;//вызвращаем разность
}

int main()//объявляем главную функцию
{
    setlocale(LC_ALL, "RU");//подключаем кириллицу
    int size;//вводим длину массива
    cout << "Введите длину массива: ";
    cin >> size;
    int* mas = new int[size];//создание динамического массива 
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++)
    {
        cin >> mas[i];//вводим элементы массива
    }
    cout << "Разность максимального и минимального элементов равна: " << massiv(mas, size);//выводим разность
    delete[] mas;//очищаем массив из памяти
}
