#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

struct Battery
{
    float charge = 0.0f;
};

void charge(Battery* battery, float charge)
{
    battery->charge += charge;
}

int stoiExcept(const std::string str)
{
    try {
        std::stoi(str);      // vector::at throws an out-of-range
    }
    catch (const std::out_of_range& oor) {
        return 0;
    }
}




/*Battery battery;
        charge(&battery, 1.0f);
        std::cout << battery.charge << std::endl;

        std::cout << stoiExcept("100000000000000");*/
