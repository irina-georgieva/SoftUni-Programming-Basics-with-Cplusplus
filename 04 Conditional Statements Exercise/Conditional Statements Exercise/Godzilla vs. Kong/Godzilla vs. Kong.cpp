#include <iostream>

using namespace std;

int main()
{
    double budget;
    int countComparse;
    double priceCloth;

    cin >> budget >> countComparse >> priceCloth;

    if (countComparse >= 150)
    {
        priceCloth -= priceCloth * 0.1;
    }

    double priceDecor = budget * 0.1;
    double priceClothes = countComparse * priceCloth;

    double costs = priceDecor + priceClothes;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (costs > budget)
    {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << costs - budget << " leva more.";
    }
    else
    {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budget - costs << " leva left.";
    }
}