//����������� ���������
#include <iostream>
#include <ctime>
using namespace std;//����� �� ������ ������ ��� std
//���������� ������� ��� ���������� ����� �������� ���������
int massiv(int* mas, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (mas[i] % 2 != 0) {
            sum += mas[i];//������� �����
        }
    }
    return sum;//���������� �����
}
int main()//��������� ������� �������
{
    setlocale(LC_ALL, "RU");//���������� ���������
    int size;//�������������� ���������� ��� ����� �������
    srand(time(0));//���������� ������� ��� ������������
    cout << "������� ����� �������: ";
    cin >> size;//������ ����� �������
    int* mas = new int[size];//�������� ������������� �������
    for (int i = 0; i < size; i++)
    {
        mas[i] = rand() % 200 + 1;//� ������� ������������ ��������� ������
        cout << mas[i] << ' ';
    }
    cout << endl;
    cout << "����� �������� ��������� �����: " << massiv(mas, size);//������� �����
    delete[] mas;//������� ������ �� ������
}
