#include"Player.h"
#include"Team.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Football Simulator 2019" << endl;
    Team *t;
    int i=0;
    t=new Team[10]{{++i},{++i},{++i},{++i},{++i},{++i},{++i},{++i},{++i},{++i}};

    return 0;
}
