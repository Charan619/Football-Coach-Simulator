#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include<iostream>
using namespace std;

int main ()
{
    int t1_att=35,t2_att=50,t1_def=30,t2_def=40,a1=0,b1=0,att,def;
    int fl=0,t=0,padding=280;
    srand (time(0));
    while(t!=90)
    {
        /* initialize random seed: */

        if(t%10==5)
        {
            att=t1_att;
            def=t2_def;
            fl=1;
        }
        else
        {
            att=t2_att;
            def=t1_def;
            fl=2;
        }
        int c=att+def+padding;
        /* generate secret number between 1 and 10: */
        int r=rand() % c + 1;
        int t1=(rand() % 5 )+ t;
        if(fl==1&&r<att)
        {
            a1++;
            fl=3;
        }
        if(fl==2&&r<att)
        {
            b1++;
            fl=3;
        }
        //if(r>c-def)
        //{
          //  b1++;
            //fl=2;
        //}
        cout<<a1<<" : "<<b1;
        if(fl==3)
            cout<<" '"<<t1;
        cout<<endl;
        t+=5;
        padding-=5;
        fl=0;
    }
    return 0;
}
