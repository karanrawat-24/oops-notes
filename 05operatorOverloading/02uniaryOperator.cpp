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

    Complex operator-()
    {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};

int main()
{

    Complex c1, c2;
    c1.setData(3, 4);
    // c2 = c1.operator-(); //can also write it as below
    c2 = -c1; // here (uniary operator) right side object is caller object ie c1 is called '-' operator
    c2.showData();
    return 0;
}