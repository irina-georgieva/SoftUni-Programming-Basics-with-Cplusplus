#include <iostream>

using namespace std;

int main()
{
    double budget;
    int videoCards, cpu, ram;

    cin >> budget >> videoCards >> cpu >> ram;

    double costVideoCard = videoCards * 250;
    double costCpu = cpu * costVideoCard * 0.35;
    double costRam = ram * costVideoCard * 0.1;

    double costs = costVideoCard + costCpu + costRam;

    if (videoCards > cpu)
    {
        costs -= costs * 0.15;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (costs <= budget)
    {
        cout << "You have " << budget - costs << " leva left!";
    }
    else
    {
        cout << "Not enough money! You need " << costs - budget << " leva more!";
    }
}