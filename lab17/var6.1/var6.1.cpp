#include <iostream>//����������� ����������
using namespace std;//����� �� ������ ������ ��� std
//�������� ������� ��� ���������� ����� ������������� � ������������ ��������� ����������� �������
int massiv(int* mas, int size) {
    int min = mas[0], max = mas[0], sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (mas[i] < min) {
            min = mas[i];//������� ����������� �������
        }
        if (mas[i] > max) {
            max = mas[i];//������� ������������ �������
        }
        if (max > mas[i] || min < mas[i]) {
            sum = max + min;//������� �����
        }
    }
    return sum;//���������� �����
}

int main()//��������� �������� �������
{
    setlocale(LC_ALL, "RU");//���������� ���������
    int size;//������ ����� �������
    cout << "������� ����� �������: ";
    cin >> size;
    int* mas = new int[size];//�������� ������������� �������
    cout << "������� �������� �������: ";
    for (int i = 0; i < size; i++)
    {
        cin >> mas[i];//������ �������� �������
    }
    cout << "����� ������������� � ������������ ��������� �����: " << massiv(mas, size);//������� �����
    delete[] mas;//������� ������ �� ������
}
