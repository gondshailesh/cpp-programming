// function to calc Total price - call by address
#include<iostream>
using namespace std;

float calcTotal(float *value)
{
    *value = *value + (0.18 * (*value));
    return *value;
}

int main()
{
    float val;

    cout<<"Enter price : ";
    cin>>val;

    cout<<"Total price = "<<calcTotal(&val)<<endl;
    cout<<"init price = "<<val;

    return 0;
}