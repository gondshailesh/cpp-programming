// static variables & functions
#include<iostream>
using namespace std;

int var; // global var - can be accessed by other source files also
static int code; // static global var - valid for this source file only
                // initialized to zero

int func()
{
    static int count; // static local var // no other initialization is permitted
    count++;
    return count;
}

int total(int n)
{
    static int sum = 0;
    if(sum == 5)
    {
        return 0;
    }
    sum = sum + n;
    total(n);
    return sum;
}

int main()
{  
    code++;
    cout<<code;
    cout<<endl<<--code;
    cout<<endl<<func();
    cout<<endl<<func();
    cout<<endl<<total(1);

    return 0;
}