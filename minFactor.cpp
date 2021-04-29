#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
vector<int> solutionminFactor62(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> s1;
    vector<int> result;
    for(auto i : S){
        if(i == 'A'){
            s1.push_back(1);
        } else if (i == 'C'){
            s1.push_back(2);
        }else if (i == 'G'){
            s1.push_back(3);
        }else{
            s1.push_back(4);
        }
    }

    for(unsigned int i =0; i < Q.size(); i++){
        result.push_back(*min_element(s1.begin()+ P[i], s1.begin()+ Q[i] + 1));
    }

    return result;

}

vector<int> solutionminFactor100(string &S, vector<int> &P, vector<int> &Q) {
    int n=S.size();
    int m=P.size();
    vector<vector<int> > prefix_sum(n+1,vector<int>(4,0));
    int nuc;

    //prefix occurrence sum
    for (int s=0;s<n; s++) {
        nuc = S.at(s) == 'A' ? 1 : (S.at(s) == 'C' ? 2 : (S.at(s) == 'G' ? 3 : 4) );
        for (int genom = 0; genom < 4;genom++) {
            if(nuc != genom+1){
                prefix_sum[s+1][genom] = prefix_sum[s][genom];
            }else{
                prefix_sum[s+1][genom] = prefix_sum[s][genom] + 1;
            }
        }
    }

    //find minimal impact factor in each interval K
    int lower_impact_factor;

    for (int k=0;k<m;k++) {

        lower_impact_factor=4;
        for (int u=2;u>=0;u--) {
            if (prefix_sum[Q[k]+1][u] - prefix_sum[P[k]][u] != 0)
                lower_impact_factor = u+1;
        }
        P[k]=lower_impact_factor;
    }

    return P;
}
