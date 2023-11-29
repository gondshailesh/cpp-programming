// whether given number is armstrong or not

// Armstrong number is a number which is equal to sum of it`s digits raised to power of count of its digit  
#include<iostream>
#include<cmath>
using namespace std;

int main()
{  
    int num, temp, sum = 0, count = 0;
    cout<<"Enter a number : ";
    cin>>num;

    temp = num;

    // count digits
    while(num > 0)
    {
        num = num/10;
        count++;
    }

    num = temp;

    //sum of digits raised to power of count
    sum = pow((num % 10), count)+
          pow(((num % 100 - num % 10)/10), count)+
          pow(((num % 1000 - num % 100)/100), count)+
          pow(((num % 10000 - num % 1000)/1000), count);

    //check
    if(sum == temp)
    {
        cout<<"armstrong\n";
    }
    else{
        cout<<"not armstrong\n";
    }

    return 0;
}
