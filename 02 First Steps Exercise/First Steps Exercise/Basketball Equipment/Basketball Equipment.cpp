#include <iostream>

using namespace std;

int main()
{
	int yearTax;

	cin >> yearTax;

	double shoes = yearTax - yearTax * 0.4;
	double clothes = shoes - shoes * 0.2;
	double ball = 1 / 4.0 * clothes;
	double accessoires = 1 / 5.0 * ball;

	double moneyNeeded = yearTax + shoes + clothes + ball + accessoires;

	cout << moneyNeeded;
}