#include <iostream>//���������� ����������
#include <iomanip>//���������� ���������� iomanip ��� ������������� ������������� setw, setfill

void main()//�������� ������ ������ ���������
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;//������� ������������� ������ std:: ����� ������ ����������
	char c, space; space = ' ';//���������� ��� �������� "������" � ��� ���������� ������
	cout << "������� ������: "; cin >> c;//����������� � ������������ ������ ��� ���������� ������
	cout << setw(42) << setfill(space) << space;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(40) << setfill(space) << space;
	cout << setw(20) << setfill(c) << c << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(24) << setfill(c) << c << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(28) << setfill(c) << c << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(24) << setfill(c) << c << endl;
	cout << setw(40) << setfill(space) << space;
	cout << setw(20) << setfill(c) << c << endl;
	cout << setw(42) << setfill(space) << space;
	cout << setw(16) << setfill(c) << c << endl;
}
	