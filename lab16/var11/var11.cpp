//����������� ���������
#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;//����� �� ������ ������ ��� std
//����������� ���� ������� ��� ������� � ������ ��������������
int matrix(int** A, int N, int M, int k) {
	return 0;
}
int massiv(char str1, char str) {
	return 0;
}

int main()//���������� ������� �������
{
	//����������� ������� ��� ������ � �������� ��������� 
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//���������� ��������� � �������� ����� �����
	int choice;
	do
	{
		cout << "�������� ������� ������" << endl;
		cout << "1 - � ��������" << endl;
		cout << "2 - �� �������" << endl;
		cout << "3 - �����" << endl;
		cin >> choice;
		switch (choice)
		{
			//������ � ��������
		case 1: {
			//������������� ���������� � �����
			int** A, N, M;
			bool found = false;
			//���� �������
			cout << "������� ����� �����: ";
			cin >> N;
			cout << "������� ����� ��������: ";
			cin >> M;
			//������������� ������������� �������
			A = new int* [N];
			for (int i = 0; i < N; i++) {
				A[i] = new int[M];
			}
			cout << "������� �������: " << endl;//������ �������� �������
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					cout << "A(" << i + 1 << ", " << j + 1 << "): ";
					cin >> A[i][j];
				}
			}
			cout << "�������� �������: " << endl;//������� �������� ������� �� �����
			for (int i = 0; i < N; i++)
			{
				cout << "[";
				for (int j = 0; j < M; j++)
				{
					cout << " " << A[i][j] << " ";
				}
				cout << "]" << endl;
			}
			int maxElement = A[0][0];//������������� ������������� �������� 
			int positions[100][2];//������������, ��� ������������ ��������� �� ������ 100
			int posCount = 0;//������� ������� ������������� ��������
			int sum = 0;//���������������� ����������, ������� ����� ����������� ��������, ������� ���� ������� ���������
			//� ������� ����� ������� ���� ��� ��������� ������������ ��������� � �� �������
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (A[i][j] > maxElement) {
						maxElement = A[i][j];
						posCount = 0;
						positions[posCount][0] = i;
						positions[posCount][1] = j;
						posCount++;
					}
					else if (A[i][j] == maxElement) {
						positions[posCount][0] = i;
						positions[posCount][1] = j;
						posCount++;
					}
					//������� ����� ���������, ������� ���� ������� ���������
					if (i > j) {
						sum += A[i][j];
					}
				}
			}
			cout << "������������ �������: " << maxElement << endl;//����� ����������
			cout << "������� ������������� ��������: " << endl;
			for (int i = 0; i < posCount; i++) {
				cout << "(" << positions[i][0] + 1 << ", " << positions[i][1] + 1 << ")" << endl;//����� ����������
			}
			cout << "����� ��������� ���� ������� ���������: " << sum << endl;//����� ����������
			break;
		}
			  //������ �� �������
		case 2: {
			setlocale(LC_ALL, "RU");//���������� ���������
			char str1[50], str[] = "*";//���������� ���� ��������
			int n;//���������� ����������, ������� ���������� ���������� �������� � ������
			//������ ������
			cout << "������� ������: ";
			cin >> str1;
			n = strlen(str1);//������� ����� ������
			//������� ���� for, ������� �������� �� �������� ������ � ���� "�"
			for (int i = 0; str1[i] != '\0'; i++) {
				if (str1[i] == 'c')
				{
					//���� � ������ ���� ������ "�", �� ����� ��� ���������� �������� "!"
					for (int j = n + 1; j != i; j--)
					{
						str1[j + 1] = str1[j];
					}
					str1[i + 1] = '*';
				}
			}
			cout << "����� ������: " << str1 << endl;//����� ����� ������
			break;
		}
		case 3:
			break;//����� �� ���������
		}
	} while (choice != 3);//�������� � ��������, ���� �� ������� 3 ������� 
	return 0;//���������� ���������
}