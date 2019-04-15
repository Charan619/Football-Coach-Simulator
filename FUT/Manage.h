#ifndef MANAGE_H
#define MANAGE_H
#include"Team.h"

class Manage
{
    public:
        Manage();
        void showTeam(Team &,int );
        void showTable(Team *);
        void changeStart11(Team&,int);
        /*void changeAttWidth(Team&,int);
        void changeAttStyle(Team&,int);
        void changeDefWidth(Team&,int);
        void changeDefStyle(Team&,int);
        */
    protected:
    private:
};

#endif // MANAGE_H
