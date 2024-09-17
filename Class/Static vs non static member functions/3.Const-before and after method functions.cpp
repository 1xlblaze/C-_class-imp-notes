#include <bits/stdc++.h>
using namespace std;
class X {
public:
    int value;

    // Non-const member function: can modify the object's state
    void setValue(int v) {
        value = v;  // Allowed
    }

    // Const member function: guarantees no modification of the object's state
    void printValue() const {
        // value = 10;  // Not allowed! This would cause a compiler error
        cout << value << endl;
    }

    // Const return type: returns a const int, which cannot be modified by the caller
    const int getValue() {
        return value;
    }
};

int main () {
    X obj;
    obj.setValue(5);
    obj.printValue();

    // This will cause a compiler error because getValue() returns a const int
    // int val = obj.getValue();
    return 0;
}

//Notes
/*
const after the function signature applies to the this pointer and restricts the function from modifying the object's state. 
It makes sense to place it after the function signature because it refers to how the function interacts with the object.
const before the function signature would modify the return type, meaning the function returns a constant value.
*/
 