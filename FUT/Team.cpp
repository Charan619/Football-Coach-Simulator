#include "Team.h"
#include "Player.h"

Team::Team(int no)
{
    pts=0,wins=0,loss=0,goals_for=0,goals_against=0,goals_diff=0,goals_for=0;
    p=new Player[17];
    team_code=new char[20];
    team_name=new char[20];
    fstream file_obj,file_obj2;
/*
    Player obj;
    obj.Setname("KRC");
    obj.Settype(9);
    obj.Setpac(88);
    obj.Setdri(66);
    obj.Setsho(80);
    obj.Setdef(90);
    obj.Setpas(87);
    obj.Setphy(56);
    file_obj.open("C://Users//admin//Desktop//FUT//Team.txt", ios::out);
    file_obj.write((char*)&obj, sizeof(obj));
    file_obj.close();
*/
    // Opening file in input mode


    // Object of class contestant to input data in file

    int i=-1;
    char file_name[20]="Team_";
    char file_no[5];
    itoa(no,file_no,10);
    cout<<"hi";
    strcat(file_name,file_no);
    strcat(file_name,".txt");
    cout<<file_name;
    cout<<"hey";
   // cout<<obj2.Getname();
    // Reading from file into object "obj2"
    file_obj2.open(file_name);
    char name[20];
    int u;
    file_obj2.getline(team_name,20,'\n');
    file_obj2.getline(team_code,20,'\n');
    while(i!=17&&!file_obj2.eof())
    {
        i++;

        file_obj2>>name;
        p[i].Setname(name);

        file_obj2>>u;
        p[i].Settype(u);

        file_obj2>>u;
        p[i].Setpac(u);

        file_obj2>>u;
        p[i].Setsho(u);

        file_obj2>>u;
        p[i].Setpas(u);

        file_obj2>>u;
        p[i].Setdri(u);

        file_obj2>>u;
        p[i].Setdef(u);

        file_obj2>>u;
        p[i].Setphy(u);
        //file_obj2.read((char*)&obj2, sizeof(obj2));

    }
    //p[i].Setname(obj2.Getname());
    //p[i].Settype(obj2.Gettype());
    //p[i].Setpac(obj2.Getpac());
    /*p[i].dri=obj.dri;
    p[i].sho=obj.sho;
    p[i].def=obj.def
    p[i].pas=obj.pas;
    p[i].phy=obj.phy;*/
    cout<<p[i].Gettype()<<p[i].Getpac();
    cout<<p[i].Getname();
    //Setteam_name("Beast FC");
    cout<<Getteam_name();
    }
