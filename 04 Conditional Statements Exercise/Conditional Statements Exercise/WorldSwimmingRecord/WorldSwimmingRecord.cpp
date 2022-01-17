#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double record, distance, time;

	cin >> record >> distance >> time;

	double timeIvan = distance * time;

	int slowing = distance / 15;
	if (slowing > 0)
	{
		timeIvan += slowing * 12.5;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (timeIvan < record)
	{
		cout << "Yes, he succeeded! The new world record is " << timeIvan << " seconds.";
	}
	else
	{
		cout << "No, he failed! He was " << timeIvan - record << " seconds slower.";
	}
}