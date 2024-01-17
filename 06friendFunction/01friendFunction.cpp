#include <bits/stdc++.h>
using namespace std;

// friend function is not a member function of a class which it is a friend
// it must be defined outside the class to which it is friend
// friend function can access any member of the class to which it is friend
// friend function cannot access members of the class directly
//  it has no called object
//  it should not be defined with membership label

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << " " <<b << endl;
    }
    friend void fun();
    friend void fun2(Complex &);
};
void fun()
{
    cout << "this is friend fuction" << endl;

    // cout<<"sum is: "<<a+b; this is wrong we can't access member directly as friend function has no caller object
}
void fun2(Complex &c)
{
    cout << "sum is " << c.a + c.b << endl;
}
int main()
{
    Complex c1;
    c1.setData(3,4);
    fun();
    fun2(c1);

    return 0;
}