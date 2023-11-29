// Average of three numbers
#include<iostream>
using namespace std;

int main()
{
    float n1, n2, n3;
    
    cout<<endl<<"Enter first number : ";
    cin>>n1;

    cout<<"Enter second number : ";
    cin>>n2;
    
    cout<<"Enter third number : ";
    cin>>n3;

    float avg = (n1+n2+n3)/3;

    cout<<"Average : "<<avg;
   
    return 0;
}