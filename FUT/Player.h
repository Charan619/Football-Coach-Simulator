#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Player
{    public:
        Player();
        char *Getname(){return name;}
        void Set_name(char *str){strcpy(name,str);}

        int Gettype(){return type;}
        void Settype(int val){type=val;}

        float Getpac() { return pac; }
        void Setpac(float val) { pac = val; }

        float Getdri() { return dri; }
        void Setdri(float val) { dri = val; }

        float Getsho() { return sho; }
        void Setsho(float val) { sho = val; }

        float Getdef() { return def; }
        void Setdef(float val) { def = val; }

        float Getpas() { return pas; }
        void Setpas(float val) { pas = val; }

        float Getphy() { return phy; }
        void Setphy(float val) { phy = val; }

        int Getgoals() { return goals; }
        void Setgoals(int val) { goals = val; }
    protected:
        char *name;
        int type;
        float pac;
        float dri;
        float sho;
        float def;
        float pas;
        float phy;
        int goals;
};
#endif

