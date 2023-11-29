// Program to print reverse Table of 'n' using recursion
#include<iostream>
using namespace std;

int mult = 10;
int table(int n)
{
    if(mult == 0)
    {
        return 0;
    }
    cout<<n<<" x "<<mult<<" = "<<n*mult<<endl;
    mult--;
    table(n);
}

int main()
{
    int num;
    cout<<"enter a number : ";
    cin>>num;
   
    table(num);

    return 0;
}