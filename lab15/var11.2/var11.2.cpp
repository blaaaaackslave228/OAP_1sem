#include <iostream>//����������� ���������� �����/������ 
using namespace std;//����� �� ������ ������ ��� std
int main()//��������� ������� �������
{
    setlocale(LC_ALL, "RU");//����������� ���������
    const int n = 4;//�������� �������� �������
    int matrix[n][n];//������������� �������
    //���������� �������
    cout << "������� �������� �������:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    //� ������� ����� � ������ ������� ������ � ������� � ����������� ����������
    for (int k = 0; k < n; k++) {
        bool elements = true;
        for (int i = 0; i < n; i++) {
            if (matrix[k][i] != matrix[i][k]) {
                elements = false;
                break;
            }
        }
        if (elements) {
            cout << "������ " << k+1 << " ��������� �� �������� " << k+1 << endl;//����� ����������
        }
    }
    return 0;
}