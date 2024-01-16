#include <bits/stdc++.h>
using namespace std;

// when an operator is overloaded with multiple jobs,it is know as operator overloading (already defination to add permitive type)

//  it is a way to implement compile time polymorphism

// we can not overload sizeof and ?:(ternary) operator
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

    Complex add(Complex &c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
    Complex operator+(Complex &c) // to make function name as an operator we have to write operator before it and that operator must be a reserve operator in c++
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main()
{

    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    // c3 = c1 + c2; gives error because no '+' operand is available
    // c3 = c1.add(c2);
    // c3 = c1 + c2; // in binary operator left side operante is caller object i.e c1 is + operator caller
    c3 = c1.operator+(c2); // another way to call operator overloaded function
    c3.showData();
    return 0;
}