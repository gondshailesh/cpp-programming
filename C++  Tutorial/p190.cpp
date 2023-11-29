// logical
#include<iostream>
using namespace std;

int main()
{
    int n1, n2, sum = 0;
    cout<<"enter first number : ";
    cin>>n1;
    cout<<"enter second number : ";
    cin>>n2;

    for(int i = n1; i<=n2; i++)
    {
        sum = ((i % 10000 - i % 1000)/1000) + ((i % 1000 - i % 100)/100) + ((i % 100 - i % 10)/10) + (i % 10);
        cout<<((i % 10000 - i % 1000)/1000)<<" + "<<((i % 1000 - i % 100)/100)<<" + "<<((i % 100 - i % 10)/10)<<" + "<<(i % 10)<<" = "<<sum<<endl;
    }

    return 0;
}