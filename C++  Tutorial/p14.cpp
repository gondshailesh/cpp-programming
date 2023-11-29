// Even - true / Odd - false
// Ternary operator
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    bool is_true = true;
    bool is_false = false;

    cout<<(n % 2 == 0) ? is_true : is_false ;

    // cout<<(n % 2 == 0)<<endl;

    return 0;
}