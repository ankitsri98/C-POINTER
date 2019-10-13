#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    cout<<"both are same"<<endl;

    a[0]=5;
    cout<<*a<<endl;
    cout<<a+1<<endl;//inc in address
    cout<<*(a+1)<<endl;//value at index 1

    cout<<sizeof(a)<<endl;

    cout<<a<<endl;  //is same as
    cout<<&a<<endl;
    /*
    int * p=&a[0];
    p=*a[3]; //starts pointing to 3rd index
    a=a+3 is  WRONG it is not possible coz ek nai memory nhi bani hai
    here p and &p is not same as earlier because 8 bytes are assigned seperately for that
    */
}
