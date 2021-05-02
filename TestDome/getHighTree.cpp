#include <bits/stdc++.h>

using namespace std;

#include <algorithm>

class Node
{
public:
    Node(Node* leftChild, Node* rightChild)
    {
        this->leftChild = leftChild;
        this->rightChild = rightChild;
    }

    Node* getLeftChild() const
    {
        return this->leftChild;
    }

    Node* getRightChild() const
    {
        return this->rightChild;
    }

    int height()
    {
        return height1(this);
    }

    int height1(Node* root)
    {
        if (root == NULL)
            return 0;
        else {
            int lHeight = height1(root->getLeftChild());
            int rHeight = height1(root->getRightChild());
            if (lHeight > rHeight)
                return(lHeight + 1);
            else return(rHeight + 1);
        }
    }
private:
    Node* leftChild;
    Node* rightChild;
};

/*Node* leaf1 = new Node(NULL, NULL);
        Node* leaf2 = new Node(NULL, NULL);
        Node* node = new Node(leaf1, NULL);
        Node* root = new Node(node, leaf2);

        std::cout << root->height();*/
