#include <bits/stdc++.h>
using namespace std;

void func()
{
    // static local variable
    static int x; // default value is zero not garbage and life time is through out the proccess
    int y;        // y will get memory when func is called whereas x get memory when program starts, y will be delete when func function finishes its work whill x stay until program ends
    cout << x << " " << y << endl;
}

// static member variable or class member variable: static variable that is define inside a class

class Account
{
private:
    int balance; // instance member variable
public:
    static float roi; // static member variable /class variable
    void setBalance(int);
    void showBalance()
    {
        cout << balance << endl;
    }
};

void Account::setBalance(int b)
{
    balance = b;
}

// mandatory to define static member variable outside the class
// if static member function ie roi is public
// float Account::roi; default value to 0
float Account::roi = 3.5;

// private static member variable then how to set and get its value
class Account2
{
private:
    int balance;      // instance member variable
    static float roi; // static member variable /class variable
public:
    void setBalance(int);
    void showBalance()
    {
        cout << balance << endl;
    }
    // these function can be call with objects only but static variable are  prop of class and must be set and get without object

    // void setRoi(float r){
    //     roi=r;
    // }
    // void getRoi(){
    //     cout<<roi<<endl;
    // }
    static void setRoi(float r) // static member function or class member function
    {
        roi = r;
    }
    static void getRoi()
    {
        cout << roi << endl;
    }
};

void Account2::setBalance(int b)
{
    balance = b;
}
float Account2::roi;

int main()
{
    func();
    Account a1;
    a1.setBalance(100);
    a1.showBalance();
    cout << Account::roi << endl;
    Account::roi = 3.6; // if roi is public can be access directly
    cout << Account::roi << endl;

    // if roi is private we need static member function to access them without objects
    Account2::getRoi();
    Account2::setRoi(1.8);
    Account2::getRoi();

    return 0;
}