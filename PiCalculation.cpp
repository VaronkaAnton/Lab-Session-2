#include <iostream>;
#include <math.h>
#include <cmath>
using namespace std;

double pi(double epsilon)
{
	int n = 1;
	double p = 1.;

	/*���������� ������� �� ��� ���, ���� ����������/������������ ����� ������ ��������� �������
	���������, ����������� �� �������� ���� - ������ �����, �� ������ - ������
	���� ������� ����� ���� ������ ���� ����� �������, �� �� ����� ������� � ����������,
	� ����������� �������� ����� � ��������� �������*/

	//�.�. �� ��������� ������� ��/4, �� �������� ������ ������ ���� ����� �������/4 *

	while (1. / (2.*n + 1) >  epsilon / 4.)
	{
		if (n % 2 == 0)
			p += 1. / (2. * n + 1.);
		else
			p -= 1. / (2. * n + 1.);
		n++;
	}
	return (4 * p);
}

void test(double eps)
{
	double p = acos(-1);
	if (abs(p - pi(eps)) <= eps)
		cout << "OK" << endl;
	else
		cout << "FAIL  " << eps << endl;
}


int main()
{
	test(1);
	test(2);
	test(0.12);
	test(0.01);
	test(0.1);
	test(0.001);
	test(0.00001);
	test(0.0000001);
	return(0);
}