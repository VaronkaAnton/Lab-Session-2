#include <iostream>;
using namespace std;

signed long long fact(int n)
{
	signed long long sd = 1;
	for (int i = 1; i <= n; i++)
		sd = sd*i;
	return(sd);
}

double sinus(int x, double eps)
{
	double ss = 0, ss1, ss2;
	for (int i = 0; 0 == 0; i++)
	{
		ss1 = pow(x, 2 * i + 1);
		ss2 = (fact(2 * i + 1));
		ss1 = ss1 / ss2;
		if (i % 2 == 0)
			ss = ss + ss1;
		else 
			ss = ss - ss1;
		
		if (ss1 <= eps)
			break;
	}
	return(ss);
}

int main()
{
	return(0);
}