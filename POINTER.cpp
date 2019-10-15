
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=10   ;
    cout<<&i<<endl;//means ADDRESS 0x69feec 0x = shows hexadecimal
    //THIS IS THE ADDRESS OF I

    //POINTERS ARE VATRIABLES THAT STORE ADDRESS\

    int * p=&i;
    //TO DISPLAY THE ADDRESS OF I USE
    cout<<"p:  "<<p<<endl;
    //*P AND I IS SAME

    float f=10.2;
    float * pf= &f;

    double d=122.32;
    double* pd=&d;

    cout<<"pf:  "<<pf<<"   "<<"pd:  "<<pd<<endl;

    //NOW IF YOU WANT TO ACCESS VALUE FROM POINTER
    //SIMPLY ACCESS IT BY USING STAR BEFORE POINTER

    cout<<"VALUE FROM POINTER *PD AND *PF: "<<*pd<<"   "<<*pf<<endl;

    //finding the size of variable and pointers

    cout<<"SIZE OF POINTER: "<<sizeof(p)<<"   "<<sizeof(i)<<endl;

    cout<<"i: "<<i<<"  pointer *p : "<<*p<<endl;

    i++;//SO BOTH PRINTS SAME VALUE
    cout<<"i: "<<i<<"  pointer *p : "<<*p<<endl;

    ////////////////////////////////////////
    int a=*p;
    a++;
    cout<<"a: "<<a<<endl;
    cout<<"*p "<<*p<<endl;
    //look at this

    //*p and i same cheese hai kisi me bhi change karoge dono change honge

    //////////////////////////////////////////

    //NEVER INCREMENT A POINTER LIKE (*p)++
    // SO FOR THAT USE
    int * pointer =0;
    //so now if you increment it will f=give error

     /*int a = 100, b = 200;
int *p = &a, *q = &b;
p = q;
//P NOW POINTS TO B

*/


    int q = 7;
int b = 17;
int *c = &b;
   *c = 7;
cout  << q << "  " << b << endl;

cout<<"this sHOWS THAT IF POINTER POINTING TO ANY VALUE IS CHANGES THEN THE OINTED VALUE IS CHANGED AUTOMATICALLY"<<endl;

//(*p)++ is possible if it holds address so address increases by one , and value at that address will  become answer.
//*p=&f  .......  (*p)++ is same as f++;
}
