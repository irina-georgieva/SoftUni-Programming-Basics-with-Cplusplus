#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    string name;
    int duration, breakTime;

    getline(cin, name);
    cin >> duration >> breakTime;

    double lunchTime = 1 / 8.0 * breakTime;
    double sleepTime = 1 / 4.0 * breakTime;

    double restTime = breakTime - (lunchTime + sleepTime);

    if (restTime >= duration)
    {
        cout << "You have enough time to watch " << name << " and left with " << ceil(restTime - duration) << " minutes free time.";
    }
    else
    {
        cout << "You don't have enough time to watch " << name << ", you need " << ceil(duration - restTime) << " more minutes.";
    }
}