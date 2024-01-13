#include <bits/stdc++.h>
using namespace std;

class test1
{
private:
    int a;
    int b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void printData()
    {
        cout << a << " " << b << endl;
    }
};

class test2
{
private:
    int a;
    int b;

public:
    void setData(int, int);
    void printData()
    {
        cout << a << " " << b << endl;
    }
};

// only difference in these two ways is, inside class function are by default inline functions (if the function definition doesn’t contain looping statements or complex multiple line operations).
void test2::setData(int a, int b)
{
    this->a = a;
    this->b = b;
}

int main()
{
    test2 t2;
    t2.setData(3, 4);
    t2.printData();
    return 0;
}