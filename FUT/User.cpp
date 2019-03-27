#include "User.h"


User::User(int user_id)
{
    Team *t;
    cout<<"team created";
    int i=0;
    t=new Team[2]{{++i},{++i}};
    cout<<"HAI"<<endl;
    user_name=new char[20];
    this->user_id=user_id;
    cout<<"Enter your Manager Name"<<endl;
    gets(user_name);
    cout<<"Pick a team ";
    puts(user_name);
    cout<<endl<<"1.FC Barcelona"<<endl<<"2.Real Madrid";
    cin>>team_id;
    team_id--;
    cout<<t[team_id].Getteam_name()<<endl;

    Game(t[0],t[1]);
}
