#include <bits/stdc++.h>
using namespace std;

// it does'nt matter to define friend function in public,private as it is not a member function

class B; // forward delclaration is must as in class A fun it does'nt understand what B is if we don't define it
class A
{
private:
    int a;

public:
    void setData(int x) { a = x; }

    friend void fun(A, B);
};

class B
{
private:
    int b;

public:
    void setData(int x) { b = x; }
    friend void fun(A, B);
};

void fun(A o1, B o2)
{
    cout << "sum is: " << o1.a + o2.b<<endl;
}

int main()
{
    A obj1;
    B obj2;
    obj1.setData(6);
    obj2.setData(8);
    fun(obj1, obj2);

    return 0;
}