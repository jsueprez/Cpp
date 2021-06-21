#include <bits/stdc++.h>
using namespace std;

bool sudoku2(vector<vector<char>> grid) {
    //Check row has any duplicate
    for(auto row : grid){
        set<int> numbersInRow;
        for(auto numbers : row){
            if(isdigit(numbers))
                if(!numbersInRow.insert(numbers).second) return false;

        }
    }

    //Check Column has any duplicate
    for(unsigned int i = 0; i < 9; i++){
        set<int> numbersInRow;
        for(auto row : grid){
            if(isdigit(row[i]))
                if(!numbersInRow.insert(row[i]).second) return false;

        }
    }

    for(unsigned int box = 0; box < 9; box=box+3){
        set<char> numbersInSubGrid;
        cout << "change grid" << endl;
        for(unsigned int row = 0 ; row < 9; row++){
            for(unsigned int col = box; col < 3 + box; col++){
                cout << row << " : " << col << endl;
                if(isdigit(grid[row][col]))
                    if(!numbersInSubGrid.insert(grid[row][col]).second) return false;

            }

            if((row + 1) % 3 == 0){
                numbersInSubGrid.clear();
            }

        }
    }

    return true;

}

/*std:vector<std::vector<char>> grid = {{'.', '.', '.', '.', '2', '.', '.', '9', '.'},
                                  {'.', '.', '.', '.', '6', '.', '.', '.', '.'},
                                  {'7', '1', '.', '.', '7', '5', '.', '.', '.'},
                                  {'.', '7', '.', '.', '.', '.', '.', '.', '.'},
                                  {'.', '.', '.', '.', '8', '3', '.', '.', '.'},
                                  {'.', '.', '8', '.', '.', '7', '.', '6', '.'},
                                  {'.', '.', '.', '.', '.', '2', '.', '.', '.'},
                                  {'.', '1', '.', '2', '.', '.', '.', '.', '.'},
                                  {'.', '2', '.', '.', '3', '.', '.', '.', '.'}};

vector<vector<char>> grid = {{'.','.','.','.','.','.','5','.','.'},
                             {'.','.','.','.','.','.','.','.','.'},
                             {'.','.','.','.','.','.','.','.','.'},
                             {'9','3','.','.','2','.','4','.','.'},
                             {'.','.','7','.','.','.','3','.','.'},
                             {'.','.','.','.','.','.','.','.','.'},
                             {'.','.','.','3','4','.','.','.','.'},
                             {'.','.','.','.','.','3','.','.','.'},
                             {'.','.','.','.','.','5','2','.','.'}};*/
