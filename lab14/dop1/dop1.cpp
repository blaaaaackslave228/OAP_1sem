#include <iostream>//���������� ���������� �����/������
using namespace std;//����� �� ������ ������ ��� std
int main()//��������� ������� �������
{
    srand(time(NULL));//���������� �����������
    setlocale(LC_ALL, "RU");//���������� ���������
    //�������������� ����������
    const int n = 2;
    const int mas = 2 * n;
    int A[mas][mas];
    cout << "�������������� �����������:" << endl;
    // ���������� ������� ���������� ������� �� -10 �� 10
    for (int i = 0; i < mas; ++i) {
        for (int j = 0; j < mas; ++j) {
            A[i][j] = rand() % 21 - 10;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    // ������������ ������ � �������������� ��������� ����������
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int temp = A[i][j];
            A[i][j] = A[i + n][j + n];
            A[i + n][j + n] = temp;
            temp = A[i + n][j];
            A[i + n][j] = A[i][j + n];
            A[i][j + n] = temp;
        }
    }
    //����� ����� �������
    cout << "����� ������������ ������:" << endl;
    for (int i = 0; i < mas; ++i) {
        for (int j = 0; j < mas; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;//���������� ���������
}

