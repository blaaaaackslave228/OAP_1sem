#include <iostream>//���������� ���������� �����/������
using namespace std;//����� �� ������ ������ ��� std
int main()//��������� ������� �������
{
    setlocale(LC_ALL, "RU");//���������� ���������
    const int n = 3, m = 3;//��������� ���������� ��������� � ������ � �������
    int A[n][m];//��������� �������
    int* mas = &A[0][0];// ��������� �� ������ ������� �������
    cout << "������� �������� �������:\n";
    //������ �������� �������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    //������� ������ � �������� ����������
    for (int j = 0; j < m; j++) {
        if (*(mas + j) != 0) {
            mas = nullptr;
            break;
        }
    }
    //���� ����� ������ � �������� ����������, ��������� �������� � ��������������� ������� �����
    if (mas != nullptr) {
        for (int i = 0; i < n; i++) {
            *(mas + i * m) /= 2;
        }
    }
    //������� ���������� �������
    cout << "������������ �������:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;//��������� ����������
}