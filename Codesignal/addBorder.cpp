#include <bits/stdc++.h>
using namespace std;


vector<string> addBorder(vector<string> picture) {
    //techo
    string top_bottom;
    top_bottom.resize(picture[0].size() + 2);
    fill(top_bottom.begin(), top_bottom.end(), '*');



    for(auto &pic : picture){
        pic.insert(pic.begin(), '*');
        pic.insert(pic.end(), '*');
    }

    picture.insert(picture.begin(), top_bottom);
    picture.push_back(top_bottom);
    return picture;
}
