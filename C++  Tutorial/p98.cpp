//whether seller has made profit or loss and how much
#include<iostream>
using namespace std;

int main()
{   
    float cp, sp, p, l;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Enter selling price : ";
    cin>>sp;

    p = sp - cp;
    l = cp - sp;

    if(p>0)
    {
        cout<<"Made profit of Rs "<<p<<endl;
    }
    if(l>0)
    {
        cout<<"Made loss of Rs "<<l<<endl;
    }
    if(p == 0)
    {
        cout<<"Neither profit nor loss";
    }

    return 0;
}

