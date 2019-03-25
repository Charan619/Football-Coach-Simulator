#include "User.h"


User::User(int user_id)
{
    user_name=new char[20];
    this->user_id=user_id;
    cout<<"Enter your Manager Name"<<endl;
    gets(user_name);
    cout<<"Pick a team ";
    puts(user_name);
    cout<<endl<<"1.FC Barcelona"<<endl<<"2.Real Madrid";
    cin>>team_id;
}
