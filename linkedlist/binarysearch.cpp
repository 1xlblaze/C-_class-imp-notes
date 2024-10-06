// C++ code to implement binary search
// on Singly Linked List
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node(int x) : data (x) , next (nullptr) {
        cout<< "Constructor called "<<endl;
    } 
};



// function to find out middle element
Node *middle(Node *start, Node *last) {
    if (start == NULL) {
        return NULL;
    }

    if (start == last)
        return start;

    Node *slow = start;
    Node *fast = start->next;

    while (fast != last) {
        fast = fast->next;
        slow = slow->next;
        if (fast != last) {
            fast = fast->next;
        }
    }

    return slow;
}

// Function for implementing the Binary
// Search on linked list
bool binarySearch(Node *head, int value) {
    Node *start = head;
    Node *last = NULL;

    while (true) {

        // Find middle
        Node *mid = middle(start, last);

        // If middle is empty
        if (mid == NULL) {
            return false;
        }

        // If value is present at middle
        if (mid->data == value)
            return true;

        // If start and last node are overlapping
        else if (start == last)
            break;

        // If value is more than mid
        else if (mid->data < value) {
            start = mid->next;
        }

        // If the value is less than mid.
        else if (mid->data > value)
            last = mid;
    }

    // value not present
    return false;
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(7);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(12);
    head->next->next->next->next->next = new Node(14);

    int value = 7;
    if (binarySearch(head, value))
        cout << "Present";
    else
        cout << "Value not present\n";

    return 0;
}
// T(n) = T(n/2) + n/2 ----- n/2 + n/4 + n/8 + ----- ==== O(n)