#include <bits/stdc++.h>
#include <unordered_map>


using namespace std;

#include <algorithm>
#include <iostream>     // std::cout
#include <numeric>



bool solutionDoge(vector<int> &P, vector<int> &T, vector<int> &A, vector<int> &B){

    /*
     *  Modelling the undirected graph
    */

    // Data structure to store a graph edge
    struct Edge {
        int src, dest;
    };

    auto M = A.size(); // numbers of connections / edges
    auto N = P.size(); // numbers of persons/vertex

    vector<Edge> edges(M); // Vector for storage the edges
    vector<vector<int>> adj(N,vector<int>(0)); //Vector for storage the adjacent nodes

    for(auto i = 0; i <= M; i++){
        edges[i].src = A[i];
        edges[i].dest = B[i];
    }

    // add edges to the undirected graph
    for (auto &edge: edges)
    {
        // insert at the end
        adj[edge.src].push_back(edge.dest);

        // uncomment the following code for undirected graph
        adj[edge.dest].push_back(edge.src);
    }

    /*
     * Breadth first search algorimth
    */

    return 0;




}

int main()
{
    std::vector<int> P {2, 2, 1, 1, 1};
    std::vector<int> T {1, 1, 1, 2, 2 };
    std::vector<int> A { 0, 1, 2, 3};
    std::vector<int> B { 1, 2, 0, 4};

    std::cout << solutionDoge(P, T, A, B) << endl;

    return 0;
}
