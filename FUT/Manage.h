#ifndef MANAGE_H
#define MANAGE_H
#include"Team.h"

class Manage
{
    public:
        Manage();
        void showTeam(Team &,int );
        void showTable(char *file_name);
        void changeStart11(Team&);

    protected:
    private:
};

#endif // MANAGE_H
