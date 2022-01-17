#include <iostream>

using namespace std;

int main()
{
    int length, width, height;
    double percenth;

    cin >> length >> width >> height >> percenth;

    double v = length * width * height;
    double liters = v / 1000.0;

    double neededLiters = liters - (liters * percenth / 100.0);

    cout << neededLiters;
}