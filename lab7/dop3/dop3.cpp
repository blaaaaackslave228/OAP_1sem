#include <iostream>//���������� ����������
using namespace std;//����� �� ������ ������ ��� std

int main()//��������� �������
{
	setlocale(LC_ALL, "russian");//���������� ���������
	int i = 1001;//���� ����������
	//���������� ���� ��� �������� ����, ������� ����� �� ������
	while ((i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000 % 10 != 30) || (i % 2 != 0) || (i % 7 != 0) || (i % 11 != 0))
	{
		i++;//����������� �� 1
	}
	cout << "����� ������: "<<i;//������� �����
}