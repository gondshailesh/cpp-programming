// array program
#include<iostream>
using namespace std;

int main()
{  
    int marks[3];
    
    // input
    cout<<"Enter marks of english : ";
    cin>>marks[0];

    cout<<"Enter marks of science : ";
    cin>>marks[1];

    cout<<"Enter marks of math : ";
    cin>>marks[2];

    // print
    cout<<"\nmarks of english = "<<marks[0]<<"\n";
    cout<<"marks of science = "<<marks[1]<<"\n";
    cout<<"marks of math = "<<marks[2]<<"\n";

    return 0;
}