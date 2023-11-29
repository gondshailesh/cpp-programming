// returning multiple values from function using pointer ( Call by value & Call by address )
// Note - A function can return only one value at a time
#include<iostream>
using namespace std;

void doWork(int n1, int n2, int *sum, int *prod, int *avg)
{
    *sum = n1 + n2;
    *prod = n1 * n2;
    *avg = (n1 + n2)/2;
}

int main()
{  
    int num1, num2, sum, prod, avg;

    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;

    doWork(num1, num2, &sum, &prod, &avg);

    cout<<"sum = "<<sum<<endl<<"product = "<<prod<<endl<<"average = "<<avg;

    return 0;
}
