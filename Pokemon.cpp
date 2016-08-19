#include <iostream>
#include "Pokemon.h"
#include <string>
#include <sstream>

using namespace std;

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

Pokemon::Pokemon(string Nombre, int Nivel, string Naturaleza, string Tipo1, string Tipo2, int HP, int ATK, int DEF, int SP_ATK, int SP_DEF, int SPEED, bool Legendary)
{
  this-> Nombre =  Nombre;
  this-> Nivel = Nivel;
  this-> Naturaleza = Naturaleza;
  this-> Tipo1 = Tipo1;
  this-> Tipo2 = Tipo2;
  this-> HP= HP;
  this-> ATK = ATK;
  this-> DEF = DEF;
  this-> SP_ATK = SP_ATK;
  this-> SP_DEF = SP_DEF;
  this-> SPEED = SPEED;
  this-> Legendary = Legendary;

}

void Pokemon::setNombre(string Nombre)
{
    this->Nombre = Nombre;
}

void Pokemon::setNivel(int Nivel)
{
  if (Nivel < 0 || Nivel > 101)
  {
    while(Nivel < 0 || Nivel > 101)
    {
    cout<< "Valor Invalido! Ingrese de nuevo el Nivel!" << endl;
    cin>> Nivel;
    }
  }

    this->Nivel = Nivel;
}

string Pokemon::getNombre()
{
    return Nombre;
}

int Pokemon::getNivel()
{
    return Nivel;
}

string Pokemon::getNaturaleza()
{
    return Naturaleza;
}

string Pokemon::getTipo1()
{
    return Tipo1;
}

string Pokemon::getTipo2()
{
    return Tipo2;
}

int Pokemon::getHP()
{
    return HP;
}

int Pokemon::getATK()
{
    return ATK;
}

int Pokemon::getDEF()
{
    return DEF;
}

int Pokemon::getSP_ATK()
{
    return SP_ATK;
}

int Pokemon::getSP_DEF()
{
    return SP_DEF;
}

int Pokemon::getSPEED()
{
    return SPEED;
}

bool Pokemon::getLegendary()
{
    return Legendary;
}

string Pokemon::toString()const
{
	stringstream ss;
	ss << "Pokemon: " << Nombre << " Nivel: " << Nivel << " Naturaleza: " << Naturaleza << " Tipo1: " << Tipo1 << " Tipo2: " << Tipo2 << "HP: " << HP << " Ataque: " << ATK << " Defensa: " << DEF << " Ataque Especial: " << SP_ATK << " Defensa Especial: " << SP_DEF << " Legendario: " << Legendary <<  endl;
	return ss.str();
}
Pokemon::~Pokemon()
{

}
