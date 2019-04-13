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
