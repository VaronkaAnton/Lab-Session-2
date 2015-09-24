#include <iostream>
using namespace std;

int nulls(int n)
{
	int num = 0, deg = 0, s = 1, a[100], odd = 0;
	/*достаточно посчитать степень вхождения 5 в n!
	она равна степени вхождения 10 в n!, т.к. 2 и 5 простые, а 2 < 5
	s - наибольшая степень пятёрки, меньшая n, deg - ее показатель*/
	while (s <= n)
	{
		deg++;
		s *= 5;
	}
	//заведем массив, в котором i-ому элементу соответствует кол-во чисел меньших n и кратных i-ой степени пятёрки
	for (int i = deg; i > 0; i--)
	{
		a[i] = n / s;
		s /= 5;
	}
	//перемножим показатели степеней пятерки с кол-вом чисел до n, кратных соответствующей из них 
	//odd - "лишние" степени, т.к. среди кратных 5 есть кратные 25 и т.д.
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