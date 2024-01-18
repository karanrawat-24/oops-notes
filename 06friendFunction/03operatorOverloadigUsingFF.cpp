#include <bits/stdc++.h>
using namespace std;

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
        cout << a << " " << b << endl;
    }
    // Complex operator+(Complex c)
    // {
    //     Complex temp;
    //     temp.a = a + c.a;
    //     temp.b = b + c.b;
    //     return temp;
    // }
    friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex x, Complex y)
{
    Complex temp;
    temp.a = x.a + y.a;
    temp.b = x.b + y.b;
    return temp;
}

int main()
{
    Complex c1, c2, c3;
    c1.setData(4, 5);
    c2.setData(2, 3);
    // c3 = c1 + c2; // c1.operator+(c2); not using friend function
    c3 = c1 + c2; // operator+(c1.c2); when using friend function
    c3.showData();

    // for binary operator we have to pass 1 argument when we overload it using member function and 2 argument when using friend function
    // for uniary operator we don't have to pass any argument for member function and 1 argument for friend function
    return 0;
}
