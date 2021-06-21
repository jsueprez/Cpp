#include <bits/stdc++.h>
using namespace std;


int lineUp(string commands) {
    int count = 0;
    int smart_student = 0;
    int dumb_student = 0;
    for(auto command : commands){
        if (command == 'L'){
            smart_student = (smart_student - 1) % 4;
            dumb_student = (dumb_student + 1) % 4;
        }
        else if( command == 'R'){
            smart_student = (smart_student + 1) % 4;
            dumb_student = (dumb_student - 1) % 4;
        }
        else if( command == 'A'){
            smart_student = (smart_student + 2) % 4;
            dumb_student = (dumb_student + 2) % 4;

        }
        if( smart_student == dumb_student)
            count += 1;
    }
    return count;
}

//missing 1 count

//lineUp("LLARL");
