//����������� ���������
#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;//����� �� ������ ������ ��� std
//����������� ���� ������� ��� ������� � ������ ��������������
int matrix(int** A, int N, int M, int k) {
	return 0;
}
int massiv(const char* str) {
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
			int** A, N, M, k;
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
			//������ �����, � ������� ����� ��������
			cout << "������� �����, ������� ����� �����: ";
			cin >> k;
			found = matrix(A, N, M, k);//����������� ���������
			//� ������� ����� ������� ����� ������� ��� �������� 
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (A[i][j] == k) {
						cout << "������� ����� ��������� � " << j + 1 << " �������" << endl;//����� ���������
						found = true;
						break;
					}
				}
			}
			if (!found) {
				cout << "������� ����� �� �������" << endl;//����� ���������
			}
			break;
		}
			  //������ �� �������
		case 2: {
			//������ ������, ��� �� ������ 100 ��������
			char str[100];
			//������ ������
			cout << "������� ������: ";
			cin.ignore();//������� ������ � ������� ������
			cin.getline(str, 100);//������ ������� ������
			//�������������� ���������� ��� ���������� ������ �� ����� � ��� ������ �� ������� � �������
			stringstream ss(str);
			string words[100];
			int count = 0;
			//������� ���������� ���� � ������
			while (ss >> words[count]) {
				count++;
			}
			//���� ����� ���� ������, �� ����������� ����� ������ �������
			if (count % 2 == 0) {
				swap(words[count / 2 - 1], words[count / 2]);
			}
			for (int i = 0; i < count; i++) {
				cout << words[i] << ' ';//������� ���������
			}
			cout << endl;
			break;
		}
		case 3:
			break;//����� �� ���������
		}
	} while (choice != 3);//�������� � ��������, ���� �� ������� 3 ������� 
	return 0;//���������� ���������
}