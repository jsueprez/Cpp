#include <bits/stdc++.h>
#include <algorithm>
using namespace std;



bool isConsistent(vector<string> &phoneList){

    for(auto &contact : phoneList){
        //erase the contact name in the string
        contact.erase(contact.begin(), contact.begin() + contact.find(' '));
        //erase spaces in the string
        contact.erase(remove_if(contact.begin(), contact.end(), [](unsigned char x){ return std::isspace(x);}), contact.end());
    }

    //Now we can sort the vector to compare numbers in ascending order
     sort(phoneList.begin(), phoneList.end());

     //Check every string against other.
     for(unsigned int i = 1; i < phoneList.size(); i++){
         if(phoneList[i].find(phoneList[i-1]) == 0) return false;
     }

     return true;

}


int main()
{
    std::vector<string> phoneList {"Bob 91125426", "Alice 97625992", "Emergency 911"};

    auto result = isConsistent(phoneList);
    cout << result << endl;

    return 0;
}
