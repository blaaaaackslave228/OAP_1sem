#include <iostream>//подключение библиотеки
using namespace std;//чтобы не писать каждый раз std
//создание функции дл€ нахождени€ сумму максимального и минимального элементов одномерного массива
int massiv(int* mas, int size) {
    int min = mas[0], max = mas[0], sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (mas[i] < min) {
            min = mas[i];//находим минимальный элемент
        }
        if (mas[i] > max) {
            max = mas[i];//находим максимальный элемент
        }
        if (max > mas[i] || min < mas[i]) {
            sum = max + min;//находим сумму
        }
    }
    return sum;//возвращаем сумму
}

int main()//объ€вл€ем главнуюб функцию
{
    setlocale(LC_ALL, "RU");//подключаем кириллицу
    int size;//вводим длину массива
    cout << "¬ведите длину массива: ";
    cin >> size;
    int* mas = new int[size];//создание динамического массива
    cout << "¬ведите элементы массива: ";
    for (int i = 0; i < size; i++)
    {
        cin >> mas[i];//вводим элементы массива
    }
    cout << "—умма максимального и минимального элементов равна: " << massiv(mas, size);//выводим сумму
    delete[] mas;//очищаем массив из пам€ти
}
