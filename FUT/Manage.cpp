#include "Manage.h"
#include<iostream>
using namespace std;
Manage::Manage()
{
    //ctor
}

void Manage::showTeam(Team &t,int f_no)
{
    int p_no=6;
    cout<<"Team "<<f_no<<endl;
    cout<<t.Getteam_name()<<" "<<t.Getteam_code()<<endl;
    cout<<"NAME\t\tTYPE\tPACE\tDRIBBLING\tSHOOTING\tDEFENCE\tPASSING\tPHYSICAL\n";
    for(int i=0;i<p_no;i++)
    {
        cout<<t.player(i).Getname()<<"\t\t"<<t.player(i).Gettype()<<"\t"<<t.player(i).Getpac()<<"\t"<<t.player(i).Getdri()<<"\t"<<t.player(i).Getsho()<<"\t"<<t.player(i).Getdef()<<"\t"<<t.player(i).Getpas()<<"\t"<<t.player(i).Getphy()<<"\n";
    }
}

//void Manage::changeAttStyle(Team &t,int f_no)

void Manage::showTable(Team *t)
{
    if(t[0].Getwin()+t[0].Getdraw()+t[0].Getloss()==0)
    {
        for(int i=0;i<10;i++)
        {
            cout<<t[i].Getteam_code()<<" "<<t[i].Getpts()<<endl;
        }
    }
    else
    {
        int max_pts=0;
        int lim_pts=100;
        int x;
        int arr[10]={0,1,2,3,4,5,6,7,8,9};
        //char lim_code[5];
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


            cout<<t[x].Getteam_code()<<" "<<t[x].Getpts()<<endl;
        }
    }
}

void Manage::changeStart11(Team &t,int f_no)
{
    int arr[16];
    showTeam(t,f_no);
    cout<<"\nPick 11 players from the squadlist(must include keeper)";
    for(int i=0;i<16;i++)
        arr[i]=i;
    int num;
    for(int i=0;i<11;i++)
    {
        cin>>num;
        if(arr[num]!=-1)
        {
            t.start11[i]=num;
            arr[num]=-1;
        }
        else
        {
            cout<<"\nplayer already selected,try again";
            i--;
        }
    }
}


