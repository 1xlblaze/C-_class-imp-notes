#include <bits/stdc++.h>
using namespace std;
class Node {
   public: 
    int data;
    Node* next;
    Node (int data) : data(data) , next(nullptr) {
    }
};

int main () {
 //Node *head = new Node(1);
 cout<< "Welcome to linked list programming" << endl;
 cout << "Do you want to create a linked list (1/0)?" << endl;
 int create;
 cin >> create;
 Node *head = nullptr;
 while (create) {
 cout << "where do you want to insert a node" << endl;
 cout << "press 1 to insert a node at the beginning" << endl;
 cout << "press 2 to insert a node at the end" << endl;
 cout << "press 3 to insert a node at a specific position" << endl;
 cout << "press 4 to see all nodes" << endl;
 cout << "press 0 to exit" << endl;
 int choice;
 cin >> choice;
 switch(choice) { 
    case 1: 
    {
        int value;
        cout << "Enter the value to insert: ";
        cin >> value;
        Node *newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            break;
        }
        newNode->next = head;
        head = newNode;
        break;
    }
    case 2: 
    {
        int value;
        cout << "Enter the value to insert: ";
        cin >> value;
        Node *newNode = new Node(value);
        Node *temp = head;
        while(temp->next!= nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        break;
    }
    case 3: 
    {
        int value, position;
        cout << "Enter the value to insert: ";
        cin >> value;
        cout << "Enter the position to insert: ";
        cin >> position;
        Node *newNode = new Node(value);
        Node *temp = head;
        Node *temp2 = nullptr;
        int count = 0;
        while (temp != nullptr && count <= (position-1 )) {
              if ((position - 1) == 0) {
                 newNode->next = temp;
                 head = newNode;
                 break;
              } else if (count == (position-1) ) {
                   newNode->next = temp;
                   temp2->next = newNode;
                   break;
              }
              count++;
              temp2=temp;
              temp = temp->next;
        }
    }
    case 4: 
    {Node *temp = head;
     cout << "All nodes are: ";
     while(temp != nullptr) {
         cout << temp->data << " -> ";
         temp = temp->next;
     }
     cout << "NULL" << endl;
    }
    break;
    case 0: 
        create = 0;
        break;
    default: 
         cout << "position is invalid :";
            break;

}
}
return 0;
}