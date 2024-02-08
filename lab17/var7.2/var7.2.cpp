#include <iostream>//����������� ����������
using namespace std;//����� �� ������ ������ ��� std
//���������� ������� ��� ������ ������������� ���������
void Negative(int** matrix, int n, int m) {
    //� ������� ����� ������� ������������� �������
    for (int j = 0; j < m; j++) {
        bool negative = true;
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] >= 0) {
                negative = false;
                break;
            }
            sum += matrix[i][j];
            count++;
        }
        if (negative) {
            //���� �� �������������, �� �� ������� ������� �������������� ���� ��������� � ����� �������� ��� �������� �� ���� ������ ��������� �������
            float sum1 = (float)sum / count;
            cout << "������� �������������� ������������� ��������� � ������� " << j + 1 << " �����: " << sum1 << endl;
            for (int i = 0; i < n; i++) {
                for (int k = 0; k < m; k++) {
                    matrix[i][k] -= sum1;
                }
            }
        }
    }
}

int main()//��������� ������� �������
{
    setlocale(LC_ALL, "RU");//���������� ���������
    int n, m;//������ ����������� �������
    cout << "������� ���������� ����� � ��������: ";
    cin >> n >> m;
    int** matrix = new int* [n];//�������� ������������� �������
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];
    cout << "������� �������� �������: " << endl;//������ �������� �������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    //������������ � ������� � ������� �� ����� ����������� �������
    Negative(matrix, n, m);
    cout << "���������� �������: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)//������� ������ �� ������
        delete[] matrix[i];
    delete[] matrix;
    return 0;//��������� �������
}
