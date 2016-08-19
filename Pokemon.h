#pragma once

#include <iostream>
#include <string>

using namespace std;

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
           Pokemon(string, int, string, string, string, int, int, int, int, int, int, bool);

           void setNombre(string);
           void setNivel(int);
	   
  	   string toString()const;
	
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
           bool getLegendary();
<<<<<<< HEAD

           void toString()const;
           
=======
		
>>>>>>> 16231f01a0bd4940c7fa1abc3524cf272a752065
           ~Pokemon();
};
