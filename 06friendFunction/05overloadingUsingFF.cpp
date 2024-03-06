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
        y = b;
    }
    void showData()
    {
        cout << a << " " << b << endl;
    }

    // return should be of same type of operator type,because there could be cascading (i.e cout<<c1<<c2,here cout<<c1 should return istream so c2 can also print on screen)
    friend istream &operator>>(istream &, Complex &);
    friend ostream &operator<<(ostream &, Complex);
};

istream &operator>>(istream &din, Complex &C)
{
    // cin >> C.a >> C.b;
    din >> C.a >> C.b;
    return din;
}

ostream &operator<<(ostream &dout, Complex C)
{
    // cout << C.a << " " << C.b << endl;
    dout << C.a << " " << C.b << endl;
    // both works
    return dout;
}

int main()
{
    Complex c1;
    cout << "enter a complex number: ";
    cin >> c1;  // cin.operator>>(c1);
    cout << c1; // operator<<(cout,c1);
    return 0;
}