#include <bits/stdc++.h>
using namespace std;

struct temp
{
    int c;
    int a;
    char b[18];

};

struct temp1
{
    int a;
    int b;
}t2;

struct temp2
{
    private:
        int a;
        int b;
    public:
    void setValue(int a,int b){
        this->a = a;
        this->b= b;
    }
    void printValue(){
        cout<<a<<" "<<b<<endl;
    }
} ;

int main()
{
    temp t;
    cout << sizeof(t) <<endl<<sizeof(t2)<< endl;

    temp2 t3;
    t3.setValue(6,7);
    t3.printValue();
    return 0;
}