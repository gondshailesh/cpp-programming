// program to print all perfect squares between 1000 and 9999 in such way that first two digits 
// and last two digits are also perfect squares eg.  1600, 1681 ... , 2500
#include<iostream>
#include<cmath>
using namespace std;

int main()
{  
    int i, left, right, srt, leftSrt, rightSrt;
    for(i = 1000; i<=9999; i++)
    {
        srt = sqrt(i);
        if(srt*srt == i)
        {
            left = i % 100;
            right = i / 100;
            leftSrt = sqrt(left);
            rightSrt = sqrt(right);

            if(leftSrt*leftSrt == left && rightSrt*rightSrt == right)
            {
                cout<<i<<endl;
            }
        }
    }

    return 0;
}