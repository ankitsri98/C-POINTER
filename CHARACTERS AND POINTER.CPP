#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,3};
    char b[]="abc";
    cout<<a<<endl;
    cout<<b<<endl;//WORKS A BIT DIFFERENTLY AND PRINTS WHOLE STRING

    char* c=&b[0];
    cout<<c<<endl;//still it prints whole of the array

    char c1='a';
    char* pc=&c1;

    cout<<c1<<endl;
    cout<<pc<<endl;//starts PRINTING TILL IT FINDS THE  NULL POINTER

    char str[]= "abcde";//character array
    //prefer this only because in this copy of "abcde is created

    //it is wrong and not preferred
    char* pstr="abcde";//directly points to primary data


    char s[]= "hello";
    char *p = s;
    cout << s[0] << " " << p[0];
    //ans is h h

}
