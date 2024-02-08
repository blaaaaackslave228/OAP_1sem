//подключение библиотек
#include <iostream>
#include <ctime>
using namespace std;//чтобы не писать каждый раз std
//используем функцию дл€ нахождени€ суммы нечетных элементов
int massiv(int* mas, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (mas[i] % 2 != 0) {
            sum += mas[i];//находим сумму
        }
    }
    return sum;//возвращаем сумму
}
int main()//объ€вл€ем главную функцию
{
    setlocale(LC_ALL, "RU");//подключаем кириллицу
    int size;//инициализируем переменную дл€ длины массива
    srand(time(0));//используем функцию дл€ рандомайзера
    cout << "¬ведите длину массива: ";
    cin >> size;//вводим длину массива
    int* mas = new int[size];//создание динамического массива
    for (int i = 0; i < size; i++)
    {
        mas[i] = rand() % 200 + 1;//с помощью рандомайзера заполн€ем массив
        cout << mas[i] << ' ';
    }
    cout << endl;
    cout << "—умма нечетных элементов равна: " << massiv(mas, size);//выводим сумму
    delete[] mas;//очищаем массив из пам€ти
}
