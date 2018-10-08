#include <iostream>
#include <cmath>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
	const int maxiter = 500;
	int n;
	double x, eps = DBL_EPSILON;
	cout << ("vvedite zna4eniza x,gde x izmenzaetsya |x|>1: ") << endl;
	cout << ("vvedite argument x= "); cin >> x;
	long double arth = 1, y = arth;
	for (n = 0; abs(arth) > eps; n++)
	{
		arth = arth * ((2 * n + 1) / ((2 * n + 3)*x*x));
		y += arth;
		if (n < maxiter)
		{
			cout << ("\n Zna4enie funkcii y= ") << y; cout << (" dlya x= ") << x;
			cout << (" vi4sleno posle ") << n + 1; cout << (" iteraciy") << endl;
		}
		else
		{
			cout << ("\n Ryad rashoditsya");
			break;
		}
	}
	return 0;
}