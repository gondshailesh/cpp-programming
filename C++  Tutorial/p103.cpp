/* Inline function is a function expanded inline , keyword inline is request to compiler to treat function as an inline ,
When a function is made inline , compiler replaces function call with corresponding code of function,
inline functions execute faster than other functions, thus reduces overhead of function calling again & again,

only functions that are small enough to be written in one or two lines are made inline

syntax -  inline function-header()
          {
             function-body;
          }

 */

#include<iostream>
using namespace std;

inline int sum(int a, int b)
{
    return a + b;
}

int main()
{  
    int n1, n2;
    n1 = 10;
    n2 = 78;

    cout<<"sum = "<<sum(n1, n2);

    return 0;
}