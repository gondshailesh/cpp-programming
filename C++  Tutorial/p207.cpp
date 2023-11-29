// User-defined function to find square root of number 
//sqrt()
#include<iostream>
using namespace std;

int Sqrt(int *num)
{
    int count = 0, srt = 0;

    while(srt <= *num)
    {
        count++;
        srt = count*count;
    }
    return count-1;
}

int main()
{  
    int number;
    cout<<"\nenter a number : ";
    cin>>number;

    cout<<"square root of "<<number<<" is "<<Sqrt(&number)<<"\n\n";

    return 0;
}