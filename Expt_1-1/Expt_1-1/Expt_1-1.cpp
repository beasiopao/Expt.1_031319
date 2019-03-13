
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double BoxP, SidelineP, PremiumP, GaP, box, sideline, premium, Ga, TotalBox, TotalSideline, TotalPremium,
		TotalGeneralAdmission;
	cout << fixed << setprecision(2);

	//Prices and Tickets
	cout << "Enter Box ticket price: ";
	cin >> BoxP;
	cout << "Enter Sideline ticket price: ";
	cin >> SidelineP;
	cout << "Enter Premium ticket price: ";
	cin >> PremiumP;
	cout << "Enter General Admission Price: ";
	cin >> GaP;
	cout << "\nEnter Number of Box ticket/s sold: ";
	cin >> box;
	cout << "Enter Number of Sideline ticket/s sold: ";
	cin >> sideline;
	cout << "Enter Number of Premium ticket/s sold: ";
	cin >> premium;
	cout << "Enter Number of General Admission ticket/s sold: ";
	cin >> Ga;

	//Calculation
	TotalBox = BoxP * box;
	TotalSideline = SidelineP * sideline;
	TotalPremium = PremiumP * premium;
	TotalGeneralAdmission = Ga * GaP;

	//Display
	cout << "\nNumber of Box Tickets Sold:" << box << endl;
	cout << "Total Box Ticket Sale:" << TotalBox << endl;
	cout << "\nNumber of Sideline Tickets Sold:" << sideline << endl;
	cout << "Total Sideline Ticket Sale:" << TotalSideline << endl;
	cout << "\nNumber of Premium Tickets Sold:" << premium << endl;
	cout << "Total Premium Ticket Sale:" << TotalPremium << endl;
	cout << "\nNumber of General Admission Tickets Sold:" << Ga << endl;
	cout << "Total General Admission Ticket Sale:" << TotalGeneralAdmission << endl;
	cout<< "\nTotal Amount of Sales: " << TotalBox + TotalSideline + TotalPremium + TotalGeneralAdmission << endl;

	_getch();
	return 0;
}