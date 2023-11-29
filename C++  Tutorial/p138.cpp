// program to print all perfect squares between 1 to 1000 
// like 4, 9, 25, 36 ...
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int srt;
    for(int i = 1; i<=1000; i++)
    {
        srt = sqrt(i);
        if(srt * srt == i)
        {
            cout<<i<<"\n";
        }
    }

    return 0;
}