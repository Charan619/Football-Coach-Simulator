#include"Player.h"
#include"Team.h"
#include"User.h"
#include"Match.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
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
            file_obj<<user_count++;
        User u(user_count);
    }
    return 0;
}
