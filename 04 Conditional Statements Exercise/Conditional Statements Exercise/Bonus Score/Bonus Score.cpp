#include <iostream>

using namespace std;

int main()
{
	int num;
	double bonus = 0;

	cin >> num;

	if (num <= 100)
	{
		bonus = 5;
	}
	else if (num > 100 && num <= 1000)
	{
		bonus = num * 0.2;
	}
	else if (num > 100)
	{
		bonus = num * 0.1;
	}

	if (num % 2 == 0)
	{
		bonus += 1;
	}

	if (num % 10 == 5)
	{
		bonus += 2;
	}

	cout << bonus << endl << bonus + num;
}
