#include <bits/stdc++.h>
#include <numeric>      // std::adjacent_difference
using namespace std;


//Singly-linked lists are already defined with this interface:
template<typename T>
struct ListNode {
    ListNode(const T &v) : value(v), next(nullptr) {}
    T value;
    ListNode *next;
};

int findMiddleElement(ListNode<int> * l) {
    int count = 0;
    ListNode<int> *mid = l;
    while ( l != NULL)
    {
        // Update mid, when 'count'
        // is odd number
        if (count & 1)
            mid = mid->next;

        ++count;
        l = l->next;
    }

    return mid->value;
}
