#include <iostream>

using namespace std;

int main()
{
	int countPages, pagesPerHour, daysToRead;

	cin >> countPages >> pagesPerHour >> daysToRead;

	int hoursBook = countPages / pagesPerHour * 1.0;
	int hoursPerDay = hoursBook / daysToRead * 1.0;

	cout << hoursPerDay;
}