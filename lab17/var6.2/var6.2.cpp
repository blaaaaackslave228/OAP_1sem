#include <iostream>//����������� ����������
using namespace std;//����� �� ������ ������ ��� std
//�������� ������� ��� ������ ������� ���������
void Zero(int** matrix, int n, int m) {
    bool zero = true;//������������ ����� � ������� ������
    for (int i = 0; i < n; i++) {
        bool zero1 = false;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                zero1 = true;
                break;
            }
        }
        if (!zero1) {
            zero = false;
            break;
        }
    }
    if (!zero) {//���� ������� �� ����� 0, �� ������ ��� ������������� �������� �� �������
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] < 0) {
                    matrix[i][j] = 0;
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
    //������� ���������� ������� �� �����
    Zero(matrix, n, m);
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
