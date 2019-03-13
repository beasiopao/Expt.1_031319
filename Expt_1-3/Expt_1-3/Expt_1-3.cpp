#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double netBalance, payment, d1, d2, interest, averageDailyBalance;
	cout << fixed << setprecision(2);

	cout << "Enter netBalance: ";
	cin >> netBalance;
	cout << "Enter payment made: ";
	cin >> payment;
	cout << "Enter number of days in the billing cycle: ";
	cin >> d1;
	cout << "Enter the number of days payment is made before billing cycle: ";
	cin >> d2;

	//calculation
	averageDailyBalance = (netBalance * d1 – payment * d2) / d1;

	//output
	cout << "\nInterest: " << averageDailyBalance * 0.0152;

	_getch();
	return 0;
}