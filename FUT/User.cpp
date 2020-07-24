#include "User.h"

//int User::schedule={{10,9,8,7,6,5,4,3,2},{9,7,5,3,10,8,6,4,1},{8,6,4,2,9,7,5,1,10},{7,5,3,10,8,6,1,2,9},{6,4,2,9,7,1,3,10,8},{5,3,10,8,1,4,2,9,7},{4,2,9,1,5,3,10,8,6},{3,10,1,6,4,2,9,7,5},{2,1,7,5,3,10,8,6,4},{1,8,6,4,2,9,7,5,3}};
void User::TableWrite(Team *t,char *file_name)
{
    ofstream file_obj;
    file_obj.open(file_name);
    cout<<file_name<<"testing";
    //file_obj<<"hi again its me";
    for(int i=0;i<10;i++)
    {
        file_obj<<t[i].Getpts()<<" ";
        file_obj<<t[i].Getwin()<<" ";
        file_obj<<t[i].Getdraw()<<" ";
        file_obj<<t[i].Getloss()<<" ";
        file_obj<<t[i].Getgoals_for()<<" ";
        file_obj<<t[i].Getgoals_against();
        file_obj<<"\n";
    }
    cout<<"done";
}


User::User(int user_id,int load)
{
    //round robin schedule (each row is a game week,i vs i+1 coloumn)
    int sch[9][10]={{2,1,3,10,4,9,5,8,6,7},{2,3,1,7,8,6,9,5,10,4},{6,9,7,8,3,1,4,2,5,10},{10,6,2,5,3,4,1,8,9,7},{5,3,6,2,7,10,8,9,4,1},{1,9,10,8,2,7,3,6,4,5},{5,1,6,4,7,3,8,2,9,10},{5,6,1,10,2,9,3,8,4,7},{9,3,10,2,6,1,7,5,8,4}};
    Team *t;
    char file_name[30]="User_";
    char user_name[20];
    int j=0;
    int team_id;


    cout<<"team created";
    int i=0;
    t=new Team[10]{{++i},{++i},{++i},{++i},{++i},{++i},{++i},{++i},{++i},{++i}};
    if(load==1)
    {
        cout<<"HAI"<<endl;
        //user_name=new char[20];
        this->user_id=user_id;
        fflush(stdin);
        int fl=1;
        while(fl==1)
        {
            fl=0;
            cout<<"Enter your Manager Name"<<endl;
            gets(user_name);
            ifstream user_table;
            user_table.open("usertable.txt");
            int num;
            char name[20];
            while(!user_table.eof())
            {
                user_table>>num;
                user_table>>name;
                user_table>>num;
                if(strcmpi(name,user_name)==0)
                {
                    cout<<"Try again";
                    fl=1;
                    break;
                }
            }
        }
        cout<<"Pick a team ";
        puts(user_name);
        cout<<endl<<"1.FC Barcelona"<<endl<<"2.Real Madrid";
        cin>>team_id;
        team_id--;
        cout<<t[team_id].Getteam_name()<<endl;

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
        ofstream user_table;
        user_table.open("usertable.txt",ios::app);
        user_table<<user_id<<" "<<user_name<<" "<<team_id<<"\n";
        user_table.close();
    }


    if(load==2)
    {
        int fl=0;
        int num;
        fstream user_table;
        while(fl==0)
        {
            cout<<"Enter your username";
            char name[20];
            fflush(stdin);
            cout<<"ok";
            gets(user_name);

            user_table.open("usertable.txt");

            while(!user_table.eof())
            {
                user_table>>num;
                user_table>>name;
                user_table>>num;
                if(strcmpi(name,user_name)==0)
                {
                    cout<<"Successful match";
                    team_id=num;
                    fl=1;
                    break;
                }
            }
            if(fl==0)
            {
                cout<<"Username does not exist,try again\n ";
                user_table.close();
            }
        }
        user_table.close();

        strcat(file_name,user_name);
        strcat(file_name,".txt");
        cout<<file_name;
        cout<<"file name made\n";
        ifstream fin;
        fin.open(file_name);
        int t_no=-1;
        while(!fin.eof())
        {
            t_no++;
            fin>>num;
            t[t_no].Setpts(num);

            fin>>num;
            t[t_no].Setwin(num);

            fin>>num;
            t[t_no].Setdraw(num);

            fin>>num;
            t[t_no].Setloss(num);

            fin>>num;
            t[t_no].Setgoals_for(num);

            fin>>num;
            t[t_no].Setgoals_against(num);
        }
        fin.close();

        fin.open(file_name);


        fin>>num;
        int gm=0;
        for(int i=0;i<3;i++)
        {
            fin>>num;
            gm+=num;
        }
        j=gm;

    }
    cout<<"gm="<<j;

    showTeam(t[team_id],team_id);
    showTable(t);
    system("pause");
    cout<<"Welcome Manager "<<user_name;
    changeStart11(t[team_id],team_id);
    //while(opt1!=0)
    //{
        //cout<<" "





            for(int i=0;i<10;i+=2)
            {
                cout<<sch[j][i]<<"-"<<sch[j][i+1]<<"\n";
                Game(t[sch[j][i]-1],t[sch[j][i+1]-1],t[team_id].Getteam_name());              //simming game
                system("pause");
            }
            TableWrite(t,file_name);                            //writing table every gameweek
        //file_obj.open(file_name,ios::in|ios::out);
            cout<<"Gameweek "<<j+1<<" over.\n";
    showTable(t);

}
