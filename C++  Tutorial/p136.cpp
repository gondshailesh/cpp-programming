// Program to print Table of 'n' using recursion
#include<iostream>
using namespace std;

int mult = 0;
int table(int n)
{
    if(mult == 10)
    {
        return 0;
    }
    mult = mult + 1;
    cout<<n<<" x "<<mult<<" = "<<n*mult<<endl;
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