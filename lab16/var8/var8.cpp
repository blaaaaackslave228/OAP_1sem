//����������� ���������
#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;//����� �� ������ ������ ��� std
//����������� ���� ������� ��� ������� � ������ ��������������
int matrix(int** A, int N, int M) {
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
			int** A, N, M, foundpositive = 0, foundnegative=0,  foundzero = 0;
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
			//� ������� ����� ������� ����� ������ ��� ���������
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (A[i][j] == 0) {
						foundzero++;
					}
					if (A[i][j] < 0) {
						foundnegative++;
					}
					if (A[i][j] > 0) {
						foundpositive++;
					}
				}
			}
			cout << "���������� ������������� ���������: " << foundpositive<<endl;//����� ����������
			cout << "���������� ������������� ���������: " << foundnegative << endl;//����� ����������
			cout << "���������� ������� ���������: " << foundzero << endl;//����� ����������
			break;
		}
			  //������ �� �������
		case 2: {
			char str[100];//������������� ����������, ������� ����� ������� 100 ��������
			//���� ������
			cout << "������� ������: ";
			cin.ignore();//������� � ������� ������ ������
			cin.getline(str, 100);//������ ������� ������
			massiv(str);//���������� ��������
			//������������� ���������� ��� ���������� ������ �� ����� � ��� ������ �� ������� � ���������� �������� ����
			stringstream ss(str);
			string word;
			int wordcount=0;
			//� ������� ����� ������� ����� ���� � ������
			while (ss >> word) {
				wordcount++;
			}
				cout << "���������� ���� � ������: "<<wordcount<<endl;//������� ���������
			break;
		}
		case 3:
			break;//����� �� ���������
		}
	} while (choice != 3);//�������� � ��������, ���� �� ������� 3 ������� 
	return 0;//���������� ���������
}