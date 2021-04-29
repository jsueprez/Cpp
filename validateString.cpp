#include <bits/stdc++.h>

using namespace std;

#include <algorithm>


bool validate(std::string username)
{
    if(username.length() < 4) return false;
    if(!isalpha(username[0])) return false;
    if(username[username.length() -1] == '_') return false;

    int underscorecount = 0;

    for(int i = 0; i < username.length(); i++){
        if(!isalnum(username[i])){
            if(username[i] != '_') return false;

            underscorecount++;

            if(underscorecount > 1) return false;

        }
    }
    return true;

}
/*
std::vector<string> name{"sander", "amy", "ann", "michael"};
std::vector<string> number{"123456789", "234567890", "789123456", "123123123"};
std::vector<string> name1{"sander", "amy", "ann", "michael"};
std::vector<string> number1{"121212121", "111111111", "444555666"};
std::vector<int> counter{0,1, 0, 1, 1, 1, 0, 0, 0, 0, 1 };
std::vector<int> P{2,5,0};
std::vector<int> Q{4,5,6};
std::string search = "CAGCCTA";
std::string search1 = "112";
std::cout << validate("Mike_Standish_") << std::endl; // Valid username
std::cout << validate("Mike Standish"); // Invalid username
*/
