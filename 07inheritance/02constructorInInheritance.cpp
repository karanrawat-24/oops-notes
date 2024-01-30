#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a;

public: // constructor must be public
    A()
    {
        cout << "class A constructor" << endl;
    }
    A(int k)
    {
        a = k;
    }
};

class B : public A
{
public:
    int b;

public:
    B() // complier will convert this to B():A() which will call A's constructor first than B's constructor we have to implicility call to the parameterized of class A if we create our own constructor in class A
    {
        cout << "class B constructor" << endl;
    }

    B(int x, int y) : A(x)
    {
        b = y;
    }
};

int main()
{
    B a(3, 5);
    cout << a.a << ' ' << a.b << endl;
    // when object of class B is created it class B's constructor which will first call its parent's constructor after this it return control to B's constructor
    // order of constructor is from parent to child
    // order of constructor call is from child to parent

    return 0;
}
