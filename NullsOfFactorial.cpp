#include <iostream>
using namespace std;

int nulls(int n)
{
	int num = 0, deg = 0, s = 1, a[100], odd = 0;
	/*���������� ��������� ������� ��������� 5 � n!
	��� ����� ������� ��������� 10 � n!, �.�. 2 � 5 �������, � 2 < 5
	s - ���������� ������� ������, ������� n, deg - �� ����������*/
	while (s <= n)
	{
		deg++;
		s *= 5;
	}
	//������� ������, � ������� i-��� �������� ������������� ���-�� ����� ������� n � ������� i-�� ������� ������
	for (int i = deg; i > 0; i--)
	{
		a[i] = n / s;
		s /= 5;
	}
	//���������� ���������� �������� ������� � ���-��� ����� �� n, ������� ��������������� �� ��� 
	//odd - "������" �������, �.�. ����� ������� 5 ���� ������� 25 � �.�.
	for (int i = deg; i > 0; i--)
	{
		num += (a[i] - odd) * i;
		odd = a[i];
	}
	return num;
}

void test(int ans, int number)
{
	if (nulls(number) == ans)
		cout << "OK" << endl;
	else
		cout << "Wrong Answer  " << number << endl;
}


int main()
{
	test(1, 5);
	test(3, 17);
	test(0, 1);
	test(1, 6);
	test(4, 20);
	test(12, 50);
	test(7, 33);
	test(24, 100);
	return(0);
}