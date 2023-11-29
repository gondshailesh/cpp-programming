// else - if ladder
#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;

    if(marks<0 || marks>100)
    {
        cout<<"Invalid marks\n";
    }
    else if(marks>=90)
    {
        cout<<"Grade is A+\n";
    }
    else if(marks>=80 && marks<90)
    {
        cout<<"Grade is A\n";
    }
    else if(marks>=70 && marks<80)
    {
        cout<<"Grade is B\n";
    }
    else if(marks>=50 && marks<70)
    {
        cout<<"Grade is C\n";
    }
    else if(marks>=35 && marks<50)
    {
        cout<<"Grade is D\n";
    }
    else{
        cout<<"you are failed\n";
    }

    return 0;
}