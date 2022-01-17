#include <iostream>

using namespace std;

int main()
{
	double priceExcursion;
	int puzzles, dolls, bears, minions, trucks;

	cin >> priceExcursion >> puzzles >> dolls >> bears >> minions >> trucks;

	double countToys = puzzles + dolls + bears + minions + trucks;

	double priceToys = puzzles * 2.6
		+ dolls * 3 + bears * 4.1
		+ minions * 8.2 + trucks * 2;

	if (countToys >= 50)
	{
		priceToys -= priceToys * 0.25;
	}

	double rent = priceToys * 0.1;

	double moneyLeft = priceToys - rent;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (moneyLeft >= priceExcursion)
	{
		cout << "Yes! " << moneyLeft - priceExcursion << " lv left.";
	}
	else
	{
		cout << "Not enough money! " << priceExcursion - moneyLeft << " lv needed.";
	}
}