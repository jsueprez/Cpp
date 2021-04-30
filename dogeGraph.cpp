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
    auto M = A.size(); // numbers of connections / edges
    auto N = P.size(); // numbers of persons/vertex


    // Data structure to store a graph edge
    vector< vector<int> > edges;
    edges.resize(N);

    for(auto i = 0; i < M; i++){
        edges[B[i]].push_back(A[i]);
        edges[A[i]].push_back(B[i]);
    }

    /*
     * Breadth first search algorimth
    */
    //Create  and vector of visited vertices
    vector<unsigned char> visited(N, 0); //use unisgned char because bool is slow and is broken
    list<int> queue;

    for(auto i = 0; i < N; i++){

        if(!visited[i]){ // new connected component
            visited[i] = true; // mark as visited
            queue.push_back(i);

            int s = 0; // sum of values of all vertices in the connected components

            while (!queue.empty())
            {
                int v = queue.front();
                s += P[v] - T[v];
                queue.pop_front();

                for(auto j = edges[v].begin(); j != edges[v].end(); ++j)
                {
                    if(!visited[*j])
                    {
                        visited[*j] = true;
                        queue.push_back(*j);
                    }
                }
            }

            if(s != 0)
                return false;
        }
    }

    return true;

}

/*std::vector<int> P {2, 2, 2, 2, 1, 1, 1, 1};
std::vector<int> T {1, 1, 1, 1, 2, 2, 2, 2 };
std::vector<int> A { 0, 1, 2, 3, 4, 5, 6};
std::vector<int> B { 1, 2, 3, 4, 5, 6, 7};*/
