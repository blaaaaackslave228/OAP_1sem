#include <iostream>//���������� ����������
#include <iomanip>//���������� ���������� iomanip ��� ������������� ������������� setw, setfill

void main()//�������� ������ ������ ���������
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;//������� ������������� ������ std:: ����� ������ ����������
	char c, space; space = ' ';//���������� ��� �������� "������" � ��� ���������� ������
	cout << "������� ������: "; cin >> c;//����������� � ������������ ������ ��� ���������� ������
	cout << setw(6) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(5) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(4) << setfill(space) << space;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(3) << setfill(space) << space;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(4) << setfill(space) << space;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(5) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(6) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
}
