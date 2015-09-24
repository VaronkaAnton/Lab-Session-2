#include <iostream>;
using namespace std;

signed long long fact(int n)
{
	signed long long sd = 1;
	for (int i = 1; i <= n; i++)
		sd = sd*i;
	return(sd);
}

double sinus(double x, double eps)
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
		
		if (abs(ss1) <= eps)
			break;
	}
	return(ss);
}


void assert (double test, double x, double eps)
{
double result = sinus (x, eps);
	if (abs(result-test)<=eps)
		cout<<"OK"<<endl;
	else
		cout<<"FAIL! Check "<< "x = "<<x<<" eps = "<<eps<<endl;
}

int main()
{
double PI = acos (-1.);
assert (sin(PI), PI, 0.0001);
assert (sin(PI/2.), PI/2., 0.0001);
assert (sin (0.), 0, 0.001);
assert (sin (PI/4.),PI/4., 0.00001);
assert (sin (7.*PI/8.), 7.*PI/8., 0.0001);
assert (sin (-5.*PI/8.), -5.*PI/8., 0.0001);
assert (sin (12.*PI/19.), 12.*PI/19., 0.0001);

}