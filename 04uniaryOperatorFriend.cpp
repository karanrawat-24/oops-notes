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
    friend Complex operator-(Complex);
};

Complex operator-(Complex c1)
{
    Complex temp;
    temp.a = -c1.a;
    temp.b = -c1.b;
    return temp;
}

int main()
{
    Complex c1, c2;
    c1.setData(3, 4);
    c2 = -c1;
    c2.showData();
    // for member function we read it as c2= c1.operator-()
    // for friend function we read it as c2= operator-(c1);
    return 0;
}
