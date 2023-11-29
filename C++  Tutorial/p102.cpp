// real world program
// calculating overtime pay of 10 employees
#include<iostream>
using namespace std;

int main()
{  
    int hours, otpay, temp;

    for(int i = 1; i<=10; i++)
    {
        cout<<"\n\nEnter no. hours worked : ";
        cin>>hours;
        temp = hours;
        if(hours > 40)
        {
            hours = hours - 40;
            otpay = hours * 12;
            cout<<"No. hours worked above 40 : "<<hours<<endl;
            cout<<"hence, overtime pay = "<<otpay;
        }
        else{
            cout<<"No. hours worked : "<<temp<<" is less than 40 hours"<<endl;
            cout<<"hence, no overtime pay"<<endl;
        }
    }

    return 0;
}