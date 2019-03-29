#include "Match.h"
#include <time.h>

Match::Match()
{
    game_week=0;
}

void Match::Game(Team t1,Team t2)
{
    t1.inc_matches();
    t2.inc_matches();
    fflush(stdin);
    float t1_att=0,t1_def=0,t2_def=0,t2_att=0;
    for(int j=0;j<6;j++)
    {
        int i=t1.get_start11(j);
        switch(t1.player(i).Gettype())
        {

            case 1:t1_att+=(t1.player(i).Getpac()+t1.player(i).Getdri()+t1.player(i).Getsho());break;
            case 2:
                    {
                        t1_att+=0.5*(t1.player(i).Getpac()+t1.player(i).Getdri()+t1.player(i).Getsho()+t1.player(i).Getphy()+t1.player(i).Getpas());
                        t1_def+=0.5*(t1.player(i).Getpac()+t1.player(i).Getdri()+t1.player(i).Getdef()+t1.player(i).Getphy()+t1.player(i).Getpas());
                        break;
                    }
            case 3:t1_def+=(t1.player(i).Getphy()+t1.player(i).Getdef()+t1.player(i).Getpas());break;

        }
        cout<<t1_att<<" "<<t1_def<<endl;
        cout<<t2.player(i).Getname()<<t2.player(i).Getpac();

        i=t2.get_start11(j);
        switch(t2.player(i).Gettype())
        {

            case 1:t2_att+=(t2.player(i).Getpac()+t2.player(i).Getdri()+t2.player(i).Getsho());break;
            case 2:
                    {
                        cout<<"Mid";
                        t2_att+=0.5*(t2.player(i).Getpac()+t2.player(i).Getdri()+t2.player(i).Getsho()+t2.player(i).Getphy()+t2.player(i).Getpas());
                        t2_def+=0.5*(t2.player(i).Getpac()+t2.player(i).Getdri()+t2.player(i).Getdef()+t2.player(i).Getphy()+t2.player(i).Getpas());
                        break;
                    }
            case 3:t2_def+=(t2.player(i).Getphy()+t2.player(i).Getdef()+t2.player(i).Getpas());break;

        }
        cout<<t2_att<<" "<<t2_def<<endl;
    }

    int a1=0,b1=0,att,def;
    int fl=0,t=0,padding=1280;
    srand (time(0));
    while(t!=90)
    {
        //initialize random seed:

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
        //generate secret number between 1 and 10:
        int r=rand() % c + 1;
        int time=(rand() % 5 )+ t;
        if(fl==1&&r<att)
        {
            a1++;
            t1.inc_goals_for();
            t2.inc_goals_against();
            fl=3;
        }
        if(fl==2&&r<att)
        {
            b1++;
            t2.inc_goals_for();
            t1.inc_goals_against();
            fl=3;
        }
        //if(r>c-def)
        //{
          //  b1++;
            //fl=2;
        //}
        cout<<a1<<" : "<<b1;
        if(fl==3)
            cout<<" '"<<time;
        cout<<endl;
        t+=5;
        padding-=5;
        fl=0;
    }


}
