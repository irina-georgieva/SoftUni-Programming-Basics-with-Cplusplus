#include <iostream>

using namespace std;

int main()
{
	int numChicken, numFish, numVegie;

	cin >> numChicken >> numFish >> numVegie;

	double costMenu = numChicken * 10.35 + numFish * 12.40 + numVegie * 8.15;
	double moneyNeeded = costMenu + costMenu * 0.2 + 2.50;

	cout << moneyNeeded;
}