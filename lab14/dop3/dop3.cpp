#include <iostream>//���������� ���������� �����/������
using namespace std;//����� �� ������ ������ ��� std
int main()//��������� ������� �������
{
	setlocale(LC_ALL, "RU");//���������� ���������
	srand(time(NULL));//���������� �����������
	//�������������� ���������� ��� ������� �������, �������, ������������ �������� � ���� ������������ � �������
	const int n = 3, m = 3;
	int A[n][m];
	int max1 = 0, max2=0, max3=0, row1=0, row2=0, row3=0, column1=0, column2=0, column3=0;
	//���������� ���� ��� ������������� ��������� � ������ ����� ��� 3 ������������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			A[i][j] = rand() % 100;
			if (A[i][j] > max1) {
				max3 = max2; row3 = row2; column3 = column2;
				max2 = max1; row2 = row1; column2 = column1;
				max1 = A[i][j]; row1 = i; column1 = j;
			}
			else if (A[i][j] > max2) {
				max3 = max2; row3 = row2; column3 = column2;
				max2 = A[i][j]; row2 = i; column2 = j;
			}
			else if (A[i][j] > max3) {
				max3 = A[i][j]; row3 = i; column3 = j;
			}
		}
	}
	//������������ ��������� � ������� ��������� ����������
	int temp = A[0][0];
	A[0][0] = max1;
	A[row1][column1] = temp;
	temp = A[n / 2][m / 2];
	A[n / 2][m / 2] = max2;
	A[row2][column2] = temp;
	temp = A[n - 1][m - 1];
	A[n - 1][m - 1] = max3;
	A[row3][column3] = temp;
	//������� ����� �������
	cout << "������������ �������:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	return 0;//��������� ���������
}