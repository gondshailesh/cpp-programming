// goto statement (jumping statement)
// used to repeat some part of program for particular condition
// can also be used to break from multiple loops at same time
// decreases code readibility & compleceted
#include<iostream>
using namespace std;

void main()
{
    int i = 1;

    loop: // goto label
    if(i % 2 == 0)
    {
        cout<<i<<endl;
    }
    i++;
    if(i <= 50)
    {
        goto loop; // goto statement
    }

}