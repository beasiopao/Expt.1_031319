#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double mass, density;
	cout << fixed << setprecision(2);

	cout << "Enter the mass (in grams): ";
	cin >> mass;
	cout << "Enter the density (in grams/ cm^3): ";
	cin >> density;
	cout << "\nVolume (in cm^3): " << mass/density;

	_getch();
	return 0;
}