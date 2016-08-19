#pragma once

#include <iostream>
#include <string>

class Pokemon
{
    private:
            string Nombre;
            int Nivel;
            string Naturaleza;
            string Tipo1;
            string Tipo2;
            int HP;
            int ATK;
            int DEF;
            int SP_ATK;
            int SP_DEF;
            int SPEED;
            bool Legendary;

    public:
           Pokemon(string, int, string, string, string, int, int, int, int, int, int, string);

           void setNombre(string);
           void setNivel(int);

           string getNombre();
           int getNivel();
           string getNaturaleza();
           string getTipo1();
           string getTipo2();
           int getHP();
           int getATK();
           int getDEF();
           int getSP_ATK();
           int getSP_DEF();
           int getSPEED();
           string getLEgendary();

           ~Pokemon();
};
