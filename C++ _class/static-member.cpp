#include <bits/stdc++.h>
using namespace std;
class X {
    public :
    int p ;
    static void display();
};
void static X:display() {
    cout << "Hello, static member function" << endl;
}
int main () {
X::display();  // Called without an object
}