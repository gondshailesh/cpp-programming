// program to find sum of alternate digits of given number
#include<iostream>
using namespace std;

int main()
{  
    int num, d, sum1, sum2, i = 1;
    sum1 = sum2 = 0;
    cout<<"enter a number : ";
    cin>>num;

    while(num > 0)
    {
        d = num % 10;
        if(i % 2 == 1)
        {
            sum1 = sum1 + d;
        }
        else{
            sum2 = sum2 + d;
        }
        num /= 10;
        i++;
    }
    cout<<"sum 1 : "<<sum1<<endl;
    cout<<"sum 2 : "<<sum2<<endl;

    return 0;
}