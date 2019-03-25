#include "Match.h"


Match::Match()
{
    game_week=0;
}

void Match::Game(Team &t1,Team &t2)
{
    float t1_att=0,t1_def=0,t2_def=0,t2_att=0;
    for(int i=0;i<5;i++)
    {
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


        switch(t2.player(i).Gettype())
        {

            case 1:t2_att+=(t2.player(i).Getpac()+t2.player(i).Getdri()+t2.player(i).Getsho());break;
            case 2:
                    {
                        t2_att+=0.5*(t2.player(i).Getpac()+t2.player(i).Getdri()+t2.player(i).Getsho()+t2.player(i).Getphy()+t2.player(i).Getpas());
                        t2_def+=0.5*(t2.player(i).Getpac()+t2.player(i).Getdri()+t2.player(i).Getdef()+t2.player(i).Getphy()+t2.player(i).Getpas());
                        break;
                    }
            case 3:t2_def+=(t2.player(i).Getphy()+t2.player(i).Getdef()+t2.player(i).Getpas());break;

        }
        cout<<t2_att<<" "<<t2_def<<endl;
    }

}
