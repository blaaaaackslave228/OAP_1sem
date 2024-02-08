#include <iostream>//����������� ����������
using namespace std;//����� �� ������ ������ ��� std
//������� ������� ��� ������ ������������� ���������
void Positive(int** matrix, int n, int m) {
    for (int j = 0; j < m; j++) {
        bool positive = false;//����� ������������ � ������� ������
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] > 0) {
                positive = true;
                break;
            }
        }
        if (positive && j > 0) {//���� ��� �������� ������� �������������, �� ����� ��������� ���������������� ������� ������ �� ���������������
            for (int i = 0; i < n; i++) {
                matrix[i][j - 1] = -matrix[i][j - 1];
            }
        }
    }
}

int main()//��������� ������� �������
{
    setlocale(LC_ALL, "RU");//����������� ���������
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
    //������� ���������� ������� �� �����
    Positive(matrix, n, m);
    cout << "���������� �������: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    //������� ������ �� ������
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;
    return 0;//���������� ���������
}
