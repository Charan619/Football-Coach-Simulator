#ifndef USER_H
#define USER_H

#include "Match.h"
#include "Team.h"

class User : public Match
{
    public:
        User(int);
        int Getteam_id() { return team_id; }
        void Setteam_id(int val) { team_id = val; }
        int Getuser_id() { return user_id; }
        void Setuser_id(int val) { user_id = val; }
        char* Getuser_name() { return user_name; }
        void Setuser_name(char* val) { user_name = val; }
    protected:
    private:
        int team_id;
        int user_id;
        char* user_name;
};

#endif // USER_H
