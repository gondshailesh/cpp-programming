//call by value , call by address & call by reference
#include<iostream>
using namespace std;

int square(int n)
{
    n = n * n;
    return n;
}

int _square(int *n)
{
    *n = (*n) * (*n);
    return *n;
}

int _Square(int &n)
{
    n = n * n;
    return n;
}

int main()
{   
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int temp = n;

    // call by value
    cout<<square(n)<<endl;
    cout<<"n = "<<n<<endl<<endl;

    // call by address
    cout<<_square(&n)<<endl;
    cout<<"n = "<<n<<endl<<endl;

    // call by reference
    cout<<_Square(temp)<<endl;
    cout<<"n = "<<temp<<endl;

    return 0;
}

