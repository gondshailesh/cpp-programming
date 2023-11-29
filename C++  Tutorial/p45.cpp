// keep taking input from user until user enters odd no.
#include<iostream>
using namespace std;

int main()
{
    int num;
    do
    {
        cout<<"Enter number : ";
        cin>>num;

        if(num % 2 != 0)
        {
            break;
        }
        
    }while(true);  

    return 0;
}
