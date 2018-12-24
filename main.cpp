#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, z1, z2;
	cout << "vvedite a= ";
	cin >> a;
	z1 = (1 - 2 * pow(sin(a), 2)) / (1 + sin(2 * a));
	z2 = (1 - tan(a)) / (1 + tan(a));
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2 << endl;
	return 0;
}