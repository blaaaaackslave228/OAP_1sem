#include <iostream>//���������� ����������
#include <iomanip>//���������� ���������� iomanip ��� ������������� ������������� setw, setfill

void main()//�������� ������ ������ ���������
{
	setlocale(LC_CTYPE, "Russian");//��������, ������� ������������ ��� ������ �������� ������
	using namespace std;//������� ������������� ������ std:: ����� ������ ����������
	char c, space; space = ' ';//���������� ��� �������� "������" � ��� ���������� ������
	cout << "������� ������: "; cin >> c;//����������� � ������������ ������ ��� ���������� ������
	cout << setw(5) << setfill(space) << space;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(3) << setfill(space) << space;
	cout << setw(19) << setfill(c) << c << endl;
	cout << setw(1) << setfill(space) << space;
	cout << setw(23) << setfill(c) << c << endl;
	cout << setw(1) << setfill(space) << space;
	cout << setw(23) << setfill(c) << c << endl;
	cout << setw(3) << setfill(space) << space;
	cout << setw(19) << setfill(c) << c << endl;
	cout << setw(5) << setfill(space) << space;
	cout << setw(15) << setfill(c) << c << endl;
}

