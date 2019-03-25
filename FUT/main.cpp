#include"Player.h"
#include"Team.h"
#include"User.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Football Simulator 2019" << endl;
    Team *t;
    int i=0;
    t=new Team[2]{{++i},{++i}};
    User u(1);
    u.Game(t[0],t[1]);
    return 0;
}
