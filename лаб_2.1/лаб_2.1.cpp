#include <iostream>;
#include <cmath>;

using namespace std;

int main()
{
	double z1;
	double z2;
	double x;

	cout << "x = "; cin >> x;

	z1 = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) + 1 - 2 * pow(sin(2 * x), 2));
	z2 = (2 * sin(x));
	cout << endl;     
	cout << "z1 = " << z1 << endl;     
	cout << "z2 = " << z2 << endl;

	cin.get();     
	return 0;
}