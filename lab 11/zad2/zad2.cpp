#include <iostream>//����������� ����������
using namespace std;//����� �� ������ ������ ��� std
int main()//��������� �������
{
	setlocale(LC_ALL, "RU");//���������� ������� ����������
	char tmp[33];//������ ��� �������� ��������� ������������� �����
	int A, B;//��������� ���������� A, B
	int n, p, m, q;//��������� ����������
	cout << "������� ����� A=";
	cin >> A;//������ ����� �
	cout << "������� ����� B=";
	cin >> B;//������ ����� �
	cout << "������� ���������� ��� ��� ���������(n): ";//������ ���������� ��� ��� ���������
	cin >> n;
	cout << "������� ������� (p) � ������� ���������� ���� � ����� A: ";//������ ������� p � ������� ���������� ���� � ����� �
	cin >> p;
	cout << "������� ���������� ����� m, ������� ���������� ��������: ";//������� ���������� ����� m
	cin >> m;
	cout << "������� ������� (q), �� ����� ������� ����� �������� ������ � ����� B: ";//������� ������� q, �� ����� ������� ����� �������� ������
	cin >> q;
	_itoa_s(A, tmp, 2);//����������� ����� A � �������� ����� � ��������� � tmp
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);//����������� ����� B � �������� ����� � ��������� � tmp
	cout << "B=" << tmp << endl;
	//����������� ����� ��� A � �������� ����� � ��������� � tmp
	int maskA = (1 << n) - 1;
	maskA <<= p;
	_itoa_s(maskA, tmp, 2);
	cout << "����� ��� A: " << tmp << endl;
	//����������� ����� ��� � � �������� ����� � ��������� � tmp
	int maskB = (1 << m) - 1;
	maskB <<= q;
	_itoa_s(maskB, tmp, 2);//����������� ����� ��� � � �������� ����� � ��������� � tmp
	cout << "����� ��� B: " << tmp << endl;
	A |= maskA;//���������� ����� maskA � A � ������� �������� ���������� ���
	_itoa_s(A, tmp, 2);
	cout << "���������� ���� A: " << tmp << endl;
	B = (B & ~maskB) | ((A >> p) & maskB);//������ ����� � B ������ �� A
	_itoa_s(A, tmp, 2);//����������� ����� A � �������� ����� � ��������� � tmp
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);//����������� ����� � � �������� ����� � ��������� � tmp
	cout << "B=" << tmp << endl;//����� 
}