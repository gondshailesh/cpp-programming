// sum of first 'n' natural numbers using recursion
#include<iostream>
using namespace std;

int calcSum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int sumNm1 = calcSum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;  

    cout<<"sum of first "<<n<<" natural numbers is "<<calcSum(n);

    return 0;
}