/*passing objects as function arguments

this can be done two ways :

1. by copying entire object into func args (call by value)
 
2. by passing address of objects (call by reference)

*/


#include<iostream>
using namespace std;

class time{
    int hours;
    int minutes;

public:
    void setTime(int h1, int m1)    
    {
        hours = h1;
        minutes = m1;
    }
    void display(void)
    {
        cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
    }
    void sum(time &, time &);
};

void time::sum(time &t1, time &t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60; 
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}

int main()
{
    time t1, t2, t3;
    t1.setTime(2, 60);
    t2.setTime(3, 15);

    t1.display();
    t2.display();

    t3.sum(t1, t2);
    t3.display();
    
    return 0;
}