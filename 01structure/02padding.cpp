// process doesn't read 1byte at a time from memory.
// it reads 1 word at a time.

// if we have 32 bit processor then it means it can accesss 4 bytes at a time which  mean word size is 4 bytes.

// if we have a 64 bit processor then it means it can access 8 bytes at a time which means word size is 8 bytes.

// https: // chat.openai.com/share/d0eaf2c1-c1f7-4ac3-87ea-111e52a8641c

// struct abc{
//     char a;
//     char b;
//     int c;
// } var;

//[a][b][c][c] | [c][c][][]  to access c we need 2 cpu cylcle

//[a][b][padding][P] | [c][c][c][c]  to access c now we need 1 cpu cylcle

#include <bits/stdc++.h>
using namespace std;

void sizeOfDataType()
{
    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of float: " << sizeof(float) << endl;
    cout << "size of double: " << sizeof(double) << endl;
    cout << "size of long: " << sizeof(long) << endl;
    cout << "size of short: " << sizeof(short) << endl;
    cout << "size of char: " << sizeof(char) << endl;

    cout << "size of int pointer: " << sizeof(int *) << endl;
    cout << "size of float pointer: " << sizeof(float *) << endl;
    cout << "size of double pointer: " << sizeof(double *) << endl;
    cout << "size of pointer to pointer: " << sizeof(int **) << endl;
}

struct test1
{
    char a;
    char b;
    int c;
};

struct test2
{
    char a;
    int c;
    char b;
};

struct test3
{
    char a;
    char b;
    int *c;
};

struct test4
{
    char a;
    int *c;
    char b;
};

struct test5
{
    char a[7];
    char b;
};

int main()
{
    sizeOfDataType();
    cout << endl;

    test1 t1;
    test2 t2;
    test3 t3;
    test4 t4;
    test5 t5;

    cout << "size of test1 variable: " << sizeof(t1) << endl;
    cout << "size of test2 variable: " << sizeof(t2) << endl;
    cout << "size of test3 variable: " << sizeof(t3) << endl;
    cout << "size of test4 variable: " << sizeof(t4) << endl;
    cout << "size of test5 variable: " << sizeof(t5) << endl;
    return 0;
}