// program to print armstrong numbers from 1 to 10000
#include<iostream>
#include<cmath>
using namespace std;

int main()
{  
    int i, temp, count, sum;

    cout<<"armstrong numbers from 1 to 10000 : ";

    for(i = 1; i<=10000; i++)
    {
        temp = i;
        //count digits
        count = 0;
        while(temp > 0)
        {
            temp = temp/10;
            count++;
        }
        temp = i;

        // sum of digits
        sum = pow((temp % 10), count)+
              pow(((temp % 100 - temp % 10)/10), count)+
              pow(((temp % 1000 - temp % 100)/100), count)+
              pow(((temp % 10000 - temp % 1000)/1000), count);

        // check 
        if(sum == i)      
        {
            cout<<i<<endl;
        }
    }

    return 0;
}