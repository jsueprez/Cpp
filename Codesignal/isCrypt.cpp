#include <bits/stdc++.h>
using namespace std;

bool isCryptSolution(vector<string> crypt, vector<vector<char>> solution) {
    std::unordered_map<char, int> mapped_values;
    char charEqualZero;

    for(auto values : solution){
        mapped_values.insert(make_pair(values[0], values[1] - '0'));

        if(values[1] == '0')
            charEqualZero = values[0];
    }

    vector<unsigned long long int> equation;

    for(auto i = 0; i < 3 ; i++){
        if(crypt[i][0] == charEqualZero && crypt[i].size() > 1 && i < 3) return false;

        stringstream ss;
        unsigned long long int tempNum;

        for(auto letter : crypt[i]){
            ss << mapped_values[letter];
        }

        ss >> tempNum;

        equation.push_back(tempNum);
    }



    return equation[0] + equation[1] == equation[2] ? true : false;

}

/*
     vector<string> crypt = {"TEN", "TWO", "ONE"};
    //vector<string> crypt = {"SEND", "MORE", "MONEY"};
    vector<string> crypt =  {{"AAAAAAAAAAAAAA",
                              "BBBBBBBBBBBBBB",
                              "CCCCCCCCCCCCCC"}};
    vector<vector<char>> solution = {{'O', '0'},
                                     {'M', '1'},
                                     {'Y', '2'},
                                     {'E', '5'},
                                     {'N', '6'},
                                     {'D', '7'},
                                     {'R', '8'},
                                     {'S', '9'}};

    vector<vector<char>> solution = {{'A', '1'},
                                     {'B', '2'},
                                     {'C', '3'}};






    cout << isCryptSolution(crypt, solution) <<endl;
*/
