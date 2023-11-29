// keep taking input from user until user enters
// number which is multiple of 7
#include<iostream>
using namespace std;

int main()
{
    int num;
    do
    {
        cout<<"Enter number : ";
        cin>>num;

        if(num % 7 == 0)
        {
            break;
        }
        
    }while(true);  

    return 0;
}