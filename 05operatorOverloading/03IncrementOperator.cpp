#include <bits/stdc++.h>
using namespace std;

class Integer
{
private:
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    void showData()
    {
        cout << "x=" << x << endl;
    }
    Integer operator++()
    { // preIncrement
        Integer i;
        i.x = ++x;
        return i;
    }
    //postIncrement
    Integer operator++(int) // this int is just to this is postInc only
    {
        Integer i;
        i.x = x++;
        return i;
    }
};

int main()
{
    Integer i1, i2, i3;
    i1.setData(3);
    i1.showData();
    i2 = ++i1; // i2=i1.operator++();
    i1.showData();
    i2.showData();
    i3 = i1++;
    i1.showData();
    i3.showData();
    return 0;
}