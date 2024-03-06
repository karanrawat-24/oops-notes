#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void f1() {}
    void f2() {}
};

class B : public A
{
public:
    void f1() {}      // Method overridding ( when name is same but when coding is diff )
    void f2(int x) {} // Method Hidding ( when arguments are diff)
    // this is not function overloading for that all version of function should be in same class.
};

int main()
{
    B obj;
    obj.f1(); /// early binding B version f1;

    // obj.f2(); // "ERROR" beacuse compiler found f2 in B eventhough argument are'nt matching it won't check parent class

    obj.f2(4); // B version f2;
    return 0;
}
