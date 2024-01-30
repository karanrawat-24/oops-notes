#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a;

public:
    A()
    {
        cout << "class A constructor" << endl;
    }
    ~A()
    {
        cout << "class B constructor" << endl;
    }
};

class B : public A
{
public:
    int b;

public:
    B()
    {
        cout << "class B constructor" << endl;
    }
    ~B()
    {
        cout << "class B destructor" << endl;
    }
};

int main()
{
    B a;
    // first B's constructor is called then it will call A's constructor ,A's constructor will run and return control to B's constructor at last B's destructor will run will which call A's destructor at last and than A's destructor will run

    return 0;
}
