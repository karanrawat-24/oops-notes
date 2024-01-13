#include <bits/stdc++.h>
using namespace std;

class Complex // class is a description of an object
{
private:
    int a, b; // instance member variable
public:
    // 3 instance member function
    void setValue(int, int);
    void printNumber()
    {
        cout << a << "+" << b << "i" << endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

void Complex::setValue(int a, int b)
{
    this->a = a;
    this->b = b;
}

int main()
{
    Complex c1, c2, c3; // object is an instance of class
    // object state(set of value of an object) must be change by only instance member functions
    c1.setValue(2, 3);
    c1.printNumber();
    c2.setValue(3, 4);
    c2.printNumber();
    c3 = c1.add(c2);
    c3.printNumber();

    return 0;
}