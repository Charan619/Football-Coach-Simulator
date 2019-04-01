#include "User.h"

//int User::schedule={{10,9,8,7,6,5,4,3,2},{9,7,5,3,10,8,6,4,1},{8,6,4,2,9,7,5,1,10},{7,5,3,10,8,6,1,2,9},{6,4,2,9,7,1,3,10,8},{5,3,10,8,1,4,2,9,7},{4,2,9,1,5,3,10,8,6},{3,10,1,6,4,2,9,7,5},{2,1,7,5,3,10,8,6,4},{1,8,6,4,2,9,7,5,3}};
User::User(int user_id,int load)
{
    int sch[10][9]={{10,9,8,7,6,5,4,3,2},{9,7,5,3,10,8,6,4,1},{8,6,4,2,9,7,5,1,10},{7,5,3,10,8,6,1,2,9},{6,4,2,9,7,1,3,10,8},{5,3,10,8,1,4,2,9,7},{4,2,9,1,5,3,10,8,6},{3,10,1,6,4,2,9,7,5},{2,1,7,5,3,10,8,6,4},{1,8,6,4,2,9,7,5,3}};
    if(load==1)
    {
        Team *t;
        cout<<"team created";
        int i=0;
        t=new Team[2]{{++i},{++i}};
        cout<<"HAI"<<endl;
        user_name=new char[20];
        this->user_id=user_id;
        fflush(stdin);
        cout<<"Enter your Manager Name"<<endl;
        gets(user_name);
        cout<<"Pick a team ";
        puts(user_name);
        cout<<endl<<"1.FC Barcelona"<<endl<<"2.Real Madrid";
        cin>>team_id;
        team_id--;
        cout<<t[team_id].Getteam_name()<<endl;
        char file_name[20]="User_";
        char file_no[5];
        cout<<"ok";
        itoa(user_id,file_no,10);
        cout<<"hi";
        strcat(file_name,user_name);
        strcat(file_name,".txt");
        cout<<file_name;
        cout<<"file name made\n";
   // cout<<obj2.Getname();
    // Reading from file into object "obj2"
        fstream file_obj,user_table;
        user_table.open("user_table.txt");
        user_table<<user_id<<" "<<user_name<<" "<<team_id<<"\n";
        user_table.close();
        file_obj.open(file_name);
        //need to create pts table

    }
     .


        //for(int i=0;i<)
    Game(t[0],t[1]);
}
