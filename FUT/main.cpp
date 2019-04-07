#include"Player.h"
#include"Team.h"
#include"User.h"
#include"Match.h"
#include<time.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    srand (time(0));
    int user_count,opt;
    fstream file_obj;
    file_obj.open("user_count.txt");
    file_obj>>user_count;
    file_obj.close();
    cout << "Football Simulator 2019" << endl;
    cout<<"1.Create new user"<<endl<<"2.Load User";
    cin>>opt;
    if(opt==1)
    {
        file_obj.open("user_count.txt",ios::out);
            file_obj<<++user_count;
        User u(user_count,opt);         //creates user
    }
    if(opt==2) //for loading (pls to complete)
    {
        User u(user_count,opt);
    }
    return 0;

}
