#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

class Node
{
public:
    Node(int value, Node* left, Node* right)
    {
        this->value = value;
        this->left = left;
        this->right = right;
    }

    int getValue() const
    {
        return value;
    }

    Node* getLeft() const
    {
        return left;
    }

    Node* getRight() const
    {
        return right;
    }

private:
    int value;
    Node* left;
    Node* right;
};

class BinarySearchTree
{
public:
    static bool contains(const Node& root, int value)
    {
        if (root.getValue() == NULL) return false;

         if(root.getValue() == value) return true;

         if(value >= root.getValue()){
             if(root.getRight() != NULL)
                 return contains(*root.getRight(), value);
         }else{
             if(root.getLeft() != NULL)
                 return contains(*root.getLeft(), value);
         }

         return false;
    }

};

/*Node n1(1, NULL, NULL);
    Node n3(3, NULL, NULL);
    Node n2(2, &n1, &n3);

    bool result = BinarySearchTree::contains(n2, 3);

    result == true ?  std::cout << "true" << std::endl :  std::cout << "false" << std::endl;

    //std::cout << BinarySearchTree::contains(n2, 3);
    */
