#include <bits/stdc++.h>
using namespace std;

// inheritance is a process of inheriting properties and behaviours of existing class into a new class

// existing class= old class= parent class=base class
// new class=  child class = derivied class

// syntax
//  class BaseClass{};
//  class deriviedClass:visibility_mode BaseClass{}; if visibility mode is not specified it consider to be private

// type of inheritance
// 1.single inheritance  class B:public A
// 2.multilevel inheritance class B:public A and class C:public B
// 3.multiple inheritance class C:public A,public B
// 4.hierarchical inheritance class B1:public A and class B2:public A
// 5.hybrid inheritance

// visibility modes [private,public,protected]

// type of users of dervied class
// 1. user will create object of derived class
// 2.user will derive class form the dervied class

// Availabilty(avialable in class) vs Accessibility[can be accessed by object)
// 1.private avaiable for user 1 and user 2 but can'nt be access by any
// 2.protected user 2 can access directly
// 3.public user 1 and user 2 can access

// visibility mode role ?
// it tells about how the emember of parent class will to consider in derived class
// class B:visibility_mode A
// for private: now class B will have its own private member as well as class A's public and protected member as private member they can'nt be accessed outside the class for user1 and 2 both, and class A's private member can'nt be accessed even within the class
// for protected:public and protected member of class A will become protected memeber of class B

int main()
{

    return 0;
}
