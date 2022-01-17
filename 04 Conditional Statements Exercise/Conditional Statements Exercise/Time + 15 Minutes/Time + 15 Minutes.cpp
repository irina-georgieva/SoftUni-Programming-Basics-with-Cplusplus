#include <iostream>

using namespace std;

int main()
{
	int hour, minutes;

	cin >> hour >> minutes;

	int newMinutes = minutes + 15;

	if (newMinutes >= 60)
	{
		if (hour + 1 < 24)
		{
			hour += 1;
		}
		else
		{
			hour = 0;
		}
	}

	if (newMinutes < 60)
	{
		cout << hour << ":" << newMinutes;
	}
	else if (newMinutes - 60 < 10)
	{
		cout << hour << ":0" << newMinutes - 60;
	}
	else
	{
		cout << hour << ":" << newMinutes - 60;
	}
}