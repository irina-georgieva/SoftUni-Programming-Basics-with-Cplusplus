#include <iostream>

using namespace std;

int main()
{
    double depositSum;
    int periodMonths;
    double yearPercentage;

    cin >> depositSum >> periodMonths >> yearPercentage;

    double result = depositSum + periodMonths * ((depositSum * (yearPercentage / 100)) / 12);

    cout << result;
}