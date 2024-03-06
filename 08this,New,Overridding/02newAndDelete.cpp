#include <bits/stdc++.h>
using namespace std;

// SMA vs DMA
// static memroy allocation: eg: int x; Complec c1; how much memory is need by variable and life of variable is decided at compile time but memory will be allocate at run time. (also know as compile time memory allocation but memory is allocated at run time only).

// dynamic memory allocation: memory allocate at run time using "new" keyword eg: int *p = new int; Complex *ptr  = new Complex; here p or ptr are sma variable but there is one more variable which address is stored in p or ptr which is dma.
// int n; cin>>n;
// int *p = new int[n];

// delete:
// use to delete the dma variable as their life time is through out the program. eg delete p; or delete []p;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    // In C++, compilers might support variable - length arrays(VLAs) as an extension, but they are not standard in the language.The code you provided, int arr[n], is creating an array with a size determined at runtime, based on the value of n.This feature, known as variable - length arrays, is supported by some compilers like GCC as an extension, but it's not part of the C++ standard.

    // Using variable length arrays can lead to unpredictable behavior and might not work on all compilers.It's generally recommended to use dynamic memory allocation with new or to use std::vector for resizable arrays in C++ for better compatibility and reliability.
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (auto it : arr)
    {
        cout << it << endl;
    }
    return 0;
}
