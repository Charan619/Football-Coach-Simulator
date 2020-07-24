#include "Manage.h"
#include<iostream>
using namespace std;
Manage::Manage()
{
    //ctor
}

void Manage::showTeam(Team &t,int f_no)
{
    int p_no=15;
    cout<<"Team "<<f_no<<endl;
    cout<<t.Getteam_name()<<" "<<t.Getteam_code()<<endl;
    cout<<"NAME\t\t\tTYPE\tPACE\tDRI\tSHO\tDEF\tPAS\tPHY\n";
    for(int i=0;i<p_no;i++)
    {
        cout<<t.player(i).Getname()<<"    \t\t"<<t.player(i).Gettype()<<"\t"<<t.player(i).Getpac()<<"\t"<<t.player(i).Getdri()<<"\t"<<t.player(i).Getsho()<<"\t"<<t.player(i).Getdef()<<"\t"<<t.player(i).Getpas()<<"\t"<<t.player(i).Getphy()<<"\n";
    }
}

//void Manage::changeAttStyle(Team &t,int f_no)

void Manage::showTable(Team *t)
{
    if(t[0].Getwin()+t[0].Getdraw()+t[0].Getloss()==0)
    {
        cout<<"TEAM\tMP\tPTS\tWIN\tDRAW\tLOSS\tGF\tGA"<<endl;
        for(int x=0;x<10;x++)
        {
            cout<<t[x].Getteam_code()<<"\t"<<t[x].Getdraw()+t[x].Getwin()+t[x].Getloss()<<"\t"<<t[x].Getpts()<<"\t"<<t[x].Getwin()<<"\t"<<t[x].Getdraw()<<"\t"<<t[x].Getloss()<<"\t"<<t[x].Getgoals_for()<<"\t"<<t[x].Getgoals_against() <<endl;
        }
    }
    else
    {
        int max_pts=0;
        int lim_pts=100;
        int x;
        int arr[10]={0,1,2,3,4,5,6,7,8,9};
        //char lim_code[5];
        cout<<"TEAM\tMP\tPTS\tWIN\tDRAW\tLOSS\tGF\tGA"<<endl;
        for(int j=0;j<10;j++)
        {

            for(int i=0;i<10;i++)
            {
                if(t[i].Getpts()>=max_pts &&t[i].Getpts()<=lim_pts&&arr[i]!=-1)
                {
                    x=i;
                    max_pts=t[i].Getpts();
                }
            }

            lim_pts=max_pts;
            arr[x]=-1;
            max_pts=0;


            cout<<t[x].Getteam_code()<<"\t"<<t[x].Getdraw()+t[x].Getwin()+t[x].Getloss()<<"\t"<<t[x].Getpts()<<"\t"<<t[x].Getwin()<<"\t"<<t[x].Getdraw()<<"\t"<<t[x].Getloss()<<"\t"<<t[x].Getgoals_for()<<"\t"<<t[x].Getgoals_against() <<endl;
        }
    }
}

void Manage::changeStart11(Team &t,int f_no)
{
    int arr[16];
    L1:showTeam(t,f_no);
    cout<<"\nPick 11 players from the squadlist(must include keeper)";
    for(int i=0;i<16;i++)
        arr[i]=i;
    int num;
    for(int i=0;i<11;i++)
    {
        cin>>num;
        if(arr[num]!=-1&&num<16)
        {
            t.start11[i]=num;
            arr[num]=-1;
        }
        else
        {
            cout<<"\nInvalid player selection,try again";
            i--;
        }
    }
    int gk=0;
    for(int i=0;i<11;i++)
    {
        if(t.player(t.start11[i]).Gettype()==4)
            gk++;
    }
    if(gk!=1)
    {
        if(gk>1)
        {
            cout<<"\nToo many goal keepers selected, try again";
            goto L1;
        }
        else
        {
            cout<<"\nNo goalkeeper in starting 11,try again";
            goto L1;
        }
    }
}


