#include <iostream>//����������� ����������
using namespace std;//����� �� ������ ������ ��� std
int main()//��������� ������� �������
{
	setlocale(LC_ALL, "RU");//���������� ���������
	int A, B;//��������� ����������
	cout << "������� ������ ������� A: ";
	cin >> A;//���� ������� ������� �
	int* masA = new int[A];//�������� ������������� ������� A
	//���� ��������� �������
	cout << "������� �������� ������� A: ";
	for (int i = 0; i < A; i++) {
		cin >> *(masA + i);
	}
	cout << "������� ������ ������� B: ";
	cin >> B;//������ ������ ������� �
	int* masB = new int[B];//�������� ������������� ������� �
	//���� ��������� �������
	cout << "������� �������� ������� B: ";
	for (int i = 0; i < B; i++) {
		cin >> *(masB + i);
	}
	int S = (A > B) ? A : B;//������ ������� S ����� ������� �������� ������� �� A � B
	int* masS = new int[S];//�������� ������������� ������� S
	for (int i = 0; i < S; i++) {
		*(masS + i) = ((i < A) ? *(masA + i) : 0) + ((i < B) ? *(masB + i) : 0);//��������� �������� �������� A � B
	}
	//����� ������� S
	cout << "����� ������� S: ";
	for (int i = 0; i < S; i++) {
		cout << *(masS + i) << ' ';
	}
	delete[] masA; // ����������� ������
	delete[] masB; // ����������� ������
	delete[] masS; // ����������� ������
	return 0;
}