// swap two numbers - a & b (all methods)
#include<iostream>
using namespace std;

void swap(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void _swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void _Swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int & rSwap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    return num1;
}

int main()
{  
    int a, b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    
    // ===============================
    cout<<"\n====== call by value ======"<<endl<<endl;

    cout<<"before swapping : ";
    cout<<"a = "<<a<<" & b = "<<b<<endl;

    swap(a, b);

    cout<<"after swapping : ";
    cout<<"a = "<<a<<" & b = "<<b<<endl<<endl;
    
    // ===============================
    cout<<"====== call by address ======"<<endl<<endl;

    cout<<"before swapping : ";
    cout<<"a = "<<a<<" & b = "<<b<<endl;

    _swap(&a, &b);

    cout<<"after swapping : ";
    cout<<"a = "<<a<<" & b = "<<b<<endl<<endl;
    
    // ===============================
    cout<<"====== call by reference ======"<<endl<<endl;

    cout<<"before swapping : ";
    cout<<"a = "<<a<<" & b = "<<b<<endl;

    _Swap(a, b);

    cout<<"after swapping : ";
    cout<<"a = "<<a<<" & b = "<<b<<endl<<endl;

    // ===============================
    cout<<"====== return by reference ======"<<endl<<endl;

    cout<<"before swapping : ";
    cout<<"a = "<<a<<" & b = "<<b<<endl;

    rSwap(a, b) = 12;

    cout<<"after swapping : ";
    cout<<"a = "<<a<<" & b = "<<b<<endl<<endl;

    return 0;
}
