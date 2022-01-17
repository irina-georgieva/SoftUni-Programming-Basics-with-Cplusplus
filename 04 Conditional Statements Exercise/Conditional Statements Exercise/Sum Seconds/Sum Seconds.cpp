#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	int sumSeconds = num1 + num2 + num3;

	int minutes = sumSeconds / 60;
	int seconds = sumSeconds % 60;

	if (seconds >= 10)
	{
		cout << minutes << ":" << seconds;
	}
	else if (seconds < 10)
	{
		cout << minutes << ":0" << seconds;
	}
}