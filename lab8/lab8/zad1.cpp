#include <iostream>//����������� ����������
#include <cmath>//����������� �������������� �������
using namespace std;//����� �� ������ ������ ��� std
int main()//���������� �������
{
	setlocale(LC_ALL, "RUSSIAN");//���������� ���������
	float c, d = 0, a, b, sum;//��������� ����������
	int n = 6;
	for (int i = 1; i <=n; i++) {//���������� ���� for ��� ������� ���� �������
		//������ a � b
		cin >> a;
		cin >> b;
		//���������� ������� ��� c � d
		c = sqrt(a + b);
		sum = c / i;
		d += sum;
	}
	cout << d;//������� �����
}