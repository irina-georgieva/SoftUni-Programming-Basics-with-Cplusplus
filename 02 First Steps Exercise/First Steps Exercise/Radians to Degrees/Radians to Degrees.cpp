#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double radian;

	cin >> radian;

	double degrees = radian * 180 / 3.14;

	double result = round(degrees);

	cout << result << endl;

}