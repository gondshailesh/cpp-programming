// logical program of pointer
#include<iostream>
using namespace std;

int main()
{  
    int x, *ptr;
    ptr = &x;

    *ptr = 0;

    cout<<x<<endl;
    cout<<*ptr<<endl;

    *ptr += 5;

    cout<<x<<endl;
    cout<<*ptr<<endl;

    (*ptr)++;

    cout<<x<<endl;
    cout<<*ptr<<endl;

    cout<<(int) &ptr<<endl;
    cout<<(int) &x<<endl;
    cout<<(int) ptr<<endl;
    cout<<(int) ptr++<<endl;
    cout<<(int) ptr<<endl;

    return 0.0;
}