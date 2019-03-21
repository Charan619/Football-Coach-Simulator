#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include<iostream>
using namespace std;

int main ()
{

    int a=35,b=50,a1=0,b1=0;
    int fl=0,t=0,c=a+b+480;
    srand (time(0));
    while(t!=90)
    {
    /* initialize random seed: */


    /* generate secret number between 1 and 10: */
    int r=rand() % c + 1;
    int t1=(rand() % 5 )+ t;
    if(r<35)
    {
        a1++;
        fl=1;
    }
    if(r>c-b)
    {
        b1++;
        fl=2;
    }
    cout<<a1<<" : "<<b1;
    if(fl!=0)
        cout<<" '"<<t1;
    cout<<endl;
    t+=5;
    c-=5;
    fl=0;
    }
    return 0;
}
