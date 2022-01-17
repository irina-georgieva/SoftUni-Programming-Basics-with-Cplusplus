#include <iostream>

using namespace std;

int main()
{
    int coverage;
    int litersPaint;
    int thinner;
    int hoursWork;

    cin >> coverage >> litersPaint >> thinner >> hoursWork;

    double costsCoverage = (2 + coverage) * 1.50;
    double costsPaint = (litersPaint + litersPaint * 0.10 )* 14.5;
    double costsThinner = thinner * 5;

    double costsMaterials = 0.40 + costsCoverage + costsPaint + costsThinner;
    
    double costsWork = (costsMaterials * 0.30) * hoursWork;

    double moneyNeeded = costsMaterials + costsWork;

    cout << moneyNeeded;
}