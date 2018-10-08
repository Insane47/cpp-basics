#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int main()
{
	int i, n, ibeg = 0, imin;
	float min = 0, sum = 0, a, b;
	cout << ("vvedite razmernost n= "); cin >> n;
	cout << ("vvedite interval") << endl;
	cout << ("\n a= "); cin >> a;
	cout << (" b= "); cin >> b;
	cout << ("\n vvedite elementi massiva ") << endl << endl;
	float *p = new float[n];
	for (i = 0; i < n; i++)cin >> p[i];
	min = p[0];
	for (i = 0; i < n; i++)
		if (abs(p[i]) < abs(min))
		{
			min = p[i];
			imin = i;
		}
	cout << ("\n minimalniy po modulu element: ") << min << endl;
	cout << ("poziciya minimalnogo po modulu elementa : ") << imin + 1 << endl;
	for (i = 0; i < n; i++)
		if (p[i] < 0)
		{
			ibeg = i;
			break;
		}
	for (i = ibeg + 1; i < n; i++)
		sum += abs(p[i]);
	cout << ("summa moduley elementov posle otric. elementa: ") << sum << endl;
	cout << ("preobrazovanny massiv:") << endl << endl;
	for (i = 0; i < n; i++)
		if ((p[i] < a) || (p[i] > b))
		{
			cout << p[i] << ' ';
		}
	for (i = 0; i < n; i++)
		if ((p[i] >= a) && (p[i] <= b))
		{
			p[i] = 0;
			cout << p[i] << ' ';
		}

	return 0;
}