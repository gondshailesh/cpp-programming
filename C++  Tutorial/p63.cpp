// program to print "hello" using recursion
#include<iostream>
using namespace std;

int printHello(int n)
{
    if(n == 0)
    {
        return 0;
    }
    cout<<"Hello World"<<endl;
    printHello(n-1);
}

int main()
{
    int n;
    cout<<"Enter no. times : ";
    cin>>n;

    printHello(n);

    return 0;
}
