// Factorial of 'n' using recursion
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}

int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is "<<fact(num)<<endl;

    return 0;
}