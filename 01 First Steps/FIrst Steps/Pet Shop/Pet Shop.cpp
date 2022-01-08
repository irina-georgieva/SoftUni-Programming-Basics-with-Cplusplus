#include <iostream>

using namespace std;


int main()
{
	double priceforDogs = 2.50;
	double priceforOther = 4.00;

	int dogs, otherAnimals;

	cin >> dogs >> otherAnimals;

	double totalPrice = dogs * priceforDogs 
		+ otherAnimals * priceforOther;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalPrice << " lv." << endl;

	return 0;
}