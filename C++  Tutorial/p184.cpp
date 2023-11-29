// program to check whether given two numbers are amicable pair numbers or not
// eg. 220 & 284 are amicable pair numbers
#include<iostream>
using namespace std;

int sum_of_divisors(int num)
{
    int sum = 0;
    for(int i = 1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    int n1, n2;
    cout<<"enter first number : ";
    cin>>n1;
    cout<<"enter second number : ";
    cin>>n2;

    if(n1 == sum_of_divisors(n2) && n2 == sum_of_divisors(n1))
    {
        cout<<"amicable pair numbers";
    }
    else{
        cout<<"not amicable pair numbers";        
    }

    return 0;
}