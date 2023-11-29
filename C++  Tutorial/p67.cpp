// function to calculate percentage scored
#include<iostream>
using namespace std;

int calcPctq(int sans, int math, int eng)
{
    int tot = sans + math + eng;
    return tot/3;
}

int main()
{
    int m1, m2, m3;
    cout<<"Enter marks of sanskrit : ";
    cin>>m1;  
    cout<<"Enter marks of math : ";
    cin>>m2;  
    cout<<"Enter marks of English : ";
    cin>>m3;  

    cout<<"percentage : "<<calcPctq(m1, m2, m3)<<"%";

    return 0;
}