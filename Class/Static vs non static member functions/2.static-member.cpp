#include <bits/stdc++.h>
using namespace std;
class X {
    public:
        int p ;
        static void display();
};
void X::display(){
    cout << "Hello, static member function" << endl;
} //declaration of member function if outside the class
int main () {
X::display();  // Called without an object
}

// Notes : Static member functions are different because they belong to the class, not to any specific object. 
// This is why they can be called without creating an instance of the class: 