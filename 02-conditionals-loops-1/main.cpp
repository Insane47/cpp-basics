#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
	int ac, bc, cc, i = 0, k;
	double a, b, c, x, xn, xk, dx, F;
	cout << "vvedite a= ";
	cin >> a;
	cout << "vvedite b= ";
	cin >> b;
	cout << "vvedite c= ";
	cin >> c;
	cout << "vvedite xn= ";
	cin >> xn;
	cout << "vvedite xk= ";
	cin >> xk;
	cout << "vvedite dx= ";
	cin >> dx;
	ac = a, bc = b, cc = c;
	if ((ac&bc) == cc)k = 0;
	else k = 1;
	cout << "\n\nn X" << ' ' << " F " << endl << endl;
	for (x = xn; x <= xk; x += dx)
	{
		if ((x < 1) && (c != 0))F = a * x*x - b / c;
		if ((x > 15) && (c == 0))F = (x - a) / (pow(x - c, 2));
		else F = (x*x) / (c*c);
		if (k != 0)
		{
			cout << ++i << " | " << x << " | " << F << endl;
		}
		else cout << ++i << " | " << x << " | " << int(F) << endl;
	}
	return 0;
}