#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

class TextInput
{
public:
    virtual void add(char c) {
        s1.push_back(c);
    }

    std::string getValue() { return s1; }

    std::string s1 = "";
};

class NumericInput : public TextInput {
    public:
        void add(char c) override {
            if(!isdigit(c)) return;
            s1.push_back(c);
        }


};


/*
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
*/
