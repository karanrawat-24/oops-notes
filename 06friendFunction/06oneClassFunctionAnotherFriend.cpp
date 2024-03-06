#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void fun()
    {
        cout << "fun" << endl;
    }
};

class B
{
    friend void A::fun();
};

class C
{
    friend class A; // all function of A is now friend function of C
};

int main()
{
    B b;
    
    return 0;
}
