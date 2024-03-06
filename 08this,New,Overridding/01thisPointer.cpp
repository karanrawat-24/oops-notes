#include <bits/stdc++.h>
using namespace std;

// object pointer : a pointer contains address of an object is call object pointer.

//this Pointer:
//this is a keyword
// tthis is a local object pointer in every instance member fucntion(not class member function) containing address of the caller object.
// this pointer can not be modify
// it is used to refer caller object in member function.

class Box
{
private:
    int l, b, h;

public:
    void setDimension(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void showDimension()
    {
        cout << l << " " << b << " " << h << endl;
    }
};

int main()
{
    Box b1;
    Box *p = &b1; // p is object pointer
    b1.setDimension(2, 4, 5);
    p->setDimension(3,5,6);
    p->showDimension();
    return 0;
}
