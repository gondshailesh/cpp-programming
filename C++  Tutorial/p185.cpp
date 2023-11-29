// program to find amicable pair numbers from 1 to 10000
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
    int num1, num2, i, j;

    cout<<"Amicable pair numbers bet 1 to 10000 : \n";

    for(i = 1; i<=10000; i++)
    {
        num1 = i;
        for(j = 1; j<=10000; j++)
        {
            num2 = j;
            if(num1 == sum_of_divisors(num2) && num2 == sum_of_divisors(num1) && num1 != num2)
            {
                cout<<num1<<" "<<num2<<endl;
            }
        }
    }

    return 0;
}