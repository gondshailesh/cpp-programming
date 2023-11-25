//program to access the hidden value using the scope resolution (::) operator
#include<iostream>
using namespace std;
//declare the variable
int num=50;
int main()
{
    //declare local veriable
    int num=100;
    //print the value of the local variable 
    cout<<"the value of local variable num:"<<num;
}