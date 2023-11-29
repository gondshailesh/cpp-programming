// reference variable -  program
// one of the major use of reference variables is 
// in passing arguments to function when modification of formal args. need to be reflected to actual args 

#include<iostream>
using namespace std;

int calcSum(int &n1, int &n2)
{
    n1 = 50;
    n2 = 50;
    return (n1+n2);
}

int main()
{
    // float tot = 100.00;
    
    // data_type &reference_var = var;
    // float &sum = tot; 

    // cout<<"total : "<<sum<<endl;
    // tot = 90.00;
    // cout<<"total : "<<sum<<endl;
    // sum = 50.00;
    // cout<<"total : "<<tot<<endl;

    int num1, num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    
    // call by reference
    cout<<"sum = "<<calcSum(num1, num2)<<endl;
    cout<<"sum = "<<num1 + num2<<endl;
    cout<<"num1 = "<<num1<<" & num2 = "<<num2<<endl;

    return 0;
}