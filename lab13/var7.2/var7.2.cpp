#include <iostream>//���������� ���������� �����/������
using namespace std;//����� �� ������ ������� ��� std

int main()//��������� ������� �������
{
	setlocale(LC_ALL, "RU");//���������� ���������
	char str1[50];//��������� ���������� ��� �������� �������� � ������ � ���� ������
	//������ ������
	cout << "������� ������: ";
	cin>>str1;
	int count = 0;//��������� ������� ����
	//������� ���� ��� ������ ���� � ������
	for(char* str = &str1[0]; *str!='\0';str++) {
		//����� ������� ��� ������ ����
		if (*str>='0'&&*str<='9') {
			count++;//���� ����� ����, ����������� ������� �� 1
		}
	}
	cout << "���������� ����: " << count;//������� ���������� ����
}