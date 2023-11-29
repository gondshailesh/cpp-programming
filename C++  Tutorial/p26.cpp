// global and local variables program
// scope resolution operator ::
#include<iostream>
using namespace std;

int glob = 10; // declared global

void display(void)
{
    int glob = 14; // declared local to func()
    cout<<glob<<endl;
    cout<<::glob<<endl;
}

int main()
{
    int glob = 3; // declared local to main()
    glob = 8;

    display();
    cout<<glob<<endl;
    cout<<::glob<<endl;
   
    return 0;
}
