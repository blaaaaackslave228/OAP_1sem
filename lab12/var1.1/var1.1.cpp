#include <iostream>//����������� ����������
using namespace std;//����� �� ������ ������ ��� std
int main()//��������� ������� �������
{
    setlocale(LC_ALL, "RU");//���������� ���������
    int N, m;//��������� ����������
    cout << "������� ����� N: ";
    cin >> N;//������ ����� N
    cout << "������� ����� k: ";
    cin >> m;//������ ����� k
    int mas[10] = { 0 };//���������� � ������������� ������� �� 10 ��������� ������
    int count = 0;//���������� � ������������� �������� �����
    //���� �����������, ���� N ������ ����
    while (N > 0) {
        int digit = N % 10;//��������� ��������� ����� ����� N
        //���� ����� ������� �� k ��� �������
        if (digit % m == 0) {
            mas[count] = digit;//���������� ����� � ������
            count++;//����������� �������
        }
        N /= 10;//������� ��������� ����� ����� N
    }
    //���������� ���� for ��� ������ ��������� � �������, ��� ���� ����� ����� N � ����� ������
    for (int i = 0; i < count / 2; i++) {
        int a = mas[i];
        mas[i] = mas[count - i - 1];
        mas[count - i - 1] = a;
    }
    //������� ����� ������
    cout << "�����, ������� " << m << ": ";
    for (int i = 0; i < count; i++) {
        cout << mas[i] << ' ';
    }
    return 0;
}