// destructor is an instance member function of a class
// the name of the destructor is same as the name of a class but preceded by tilde (~) symbol
// destructor can never be static
// destructor has no return type
// destructor takes no argument (no overloading is possible)

// why destructor
// is should be defined to release resourse allocated to an object

#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex()
    {
        cout << "constructor called" << endl;
    }
    void print()
    {
        cout << "inside class fuction" << endl;
    }
    // default destructor ~Complex(){}
    // it is invoked implicitly when object is going to destroy
    // destructor does'nt destroy object it is the last function that run before object destroy automatically
    ~Complex()
    {
        cout << "destructor called" << endl;
    }
};

void foo()
{
    Complex c1;
    c1.print();
}
int main()
{
    cout << "in main" << endl;
    foo();
    cout << "func end" << endl;
    return 0;
}