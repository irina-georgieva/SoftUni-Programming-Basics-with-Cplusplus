#include <iostream>

using namespace std;

int main()
{
	int pens, markers, litersCleaner, percentDiscount;

	cin >> pens >> markers >> litersCleaner >> percentDiscount;

	double costsMaterials = pens * 5.80 + markers * 7.20 + litersCleaner * 1.20;
	double discount = costsMaterials * (percentDiscount / 100.0);
	double moneyNeeded = costsMaterials - discount;

	cout << moneyNeeded;

}