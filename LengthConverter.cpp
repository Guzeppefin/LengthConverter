#include <iostream>
#include <cstdlib>


double in2m(double in) { return 0.0254 * in; }

double ft2m(double ft) { return 0.304 * ft; }

double m2in(double m) { return m / 0.0254; }

double m2ft(double m) { return m / 0.304; }

int main()
{
	using namespace std;
	cout << "Enter length: ";
	double len = 0.0;
	cin >> len;
	cout << "in to m = " << in2m(len) << endl;
	cout << "ft to m = " << ft2m(len) << endl;
	cout << "m to in = " << m2in(len) << endl;
	cout << "m to ft = " << m2ft(len) << endl;
	cout << "in to ft = " << m2ft(in2m(len)) << endl;
	cout << "ft to in = " << m2in(ft2m(len)) << endl;
	return EXIT_SUCCESS;
}