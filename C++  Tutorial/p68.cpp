// function to print 'n' th term of fibonacci sequence (Recursion)
// 0, 1, 1, 2, 3, 5, 8, 13, 21 ....
#include<iostream>
using namespace std;

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return 1;
    }

    int FibNm1 = fib(n-1);
    int FibNm2 = fib(n-2);
    int FibN = FibNm2 + FibNm1;
    return FibN;
}

int main()
{
    int n;
    cout<<"Enter term : ";
    cin>>n;  

    cout<<n<<" term of fibonacci seq is "<<fib(n)<<endl;

    return 0;
}