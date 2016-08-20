#include "Pokemon.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::vector;

int menu();


int main(int argc, char* argv[]){
	int opcion;
	vector <Pokemon*> pokemons;
	while((opcion = menu()) != 6 ){
		if(opcion == 1){
			int legend;
			string nombre;
			string naturaleza;
			string tipo1="Sin";
			string tipo2="Sin";	
			int nivel, hp,ataque,defensa, ataqueE,defensaE,rapidez;
			bool legendario;
			cout << "Ingrese El Nombre: " << endl;
			cin >> nombre;
			cout << "Ingrese La Naturaleza" << endl;
			cin >> naturaleza; 
			cout << "Ingrese El Nivel: " << endl;
			cin >> nivel;
			cout << "Ingrese El Tipo 1: " << endl;
			cin >> tipo1;
			cout << "Ingrese El Tipo 2 O Escriba Sin:" << endl;
			cin >> tipo2;
			cout << "Ingrese El HP: " << endl;
			cin >> hp;
			cout << "Ingrese El ATAQUE: " << endl;
			cin >> ataque;
			cout << "Ingrese LA DEFENSA: " << endl;
			cin >> defensa;
			cout << "Ingrese Ataque Especial: " << endl;
			cin >> ataqueE;
			cout << "Ingrese La Defensa Especial: " << endl;
			cin >> defensaE;
			cout << "Ingrese La Rapidez: " << endl;
			cin >> rapidez;
			cout << "1. Legendario: SI " << endl;
			cout << "2. Legendario: NO " << endl;
			cin >> legend;
			if(legend == 1){
				legendario = true;
			}
			if(legend == 2){
				legendario = false;
			}
			pokemons.push_back(new Pokemon(nombre,nivel,naturaleza,tipo1,tipo2,hp,ataque,defensa,ataqueE,defensaE,rapidez,legendario));
			
			cout << "AGREGADO!" << endl;
		}		
		if(opcion == 2){
			int op;
			int pos;
			while(opcion != 3){
				string nombre;
				int nivel;
				for (int i=0; i<pokemons.size(); i++){
                        		cout << i << " " << pokemons[i]->toString() << endl;
                       		}
				cout << "Ingrese La Posicion A Modificar: " << endl;
				cin >> pos;
				cout << "1. Modificar Nombre " << endl;
 	 	                cout << "2. Modificar Nivel " << endl;
				cin >> op;
				if(op == 1){
					cout << "Ingrese El Nombre: " << endl;
					cin >> nombre;
					pokemons[pos]->setNombre(nombre);
				}
				if(op == 2){
					cout << "Ingrese El Nivel: " << endl;
					cin >> nivel;
					pokemons[pos]->setNivel(nivel);
				}
				cout << "POKEMON MODIFICADO" << endl;
				for (int i=0; i<pokemons.size(); i++){
                                        cout << i << " " << pokemons[i]->toString() << endl;
                                }
					
			}
			
				
		}
		if(opcion == 3){
			int pos;
			for (int i=0; i<pokemons.size(); i++){
				if(pokemons[i]->getLegendary() == false){
						cout << i << " " << pokemons[i]->toString() << endl;

				}
                        }
			cout << "Ingrese La Posicion A Borrar: " << endl;
			cin >> pos;
			pokemons.erase(pokemons.begin()+pos);
			for (int i=0; i<pokemons.size(); i++){
                                if(pokemons[i]->getLegendary() == false){
                                                cout << i << " " << pokemons[i]->toString() << endl;

                                }
                        } 			
		}
		if(opcion == 4){
			int op;
			while(op != 3){
				cout << "1. Por 1 Tipo " << endl;
				cout << "2. Por 2 Tipos" << endl;
				cout << "3. Salir" << endl;
				cin >> op;
				if(op == 1){
					int pos;
					for (int i=0; i<pokemons.size(); i++){
						if(pokemons[i]->getTipo2() == "Sin"){
							cout << i << " " << pokemons[i]->getTipo1() << endl;
						}
                        		}
					cout << "Ingrese El Tipo A Buscar: " << endl;
					cin >> pos;
					for (int i=0; i<pokemons.size(); i++){
						if(pokemons[i]->getTipo1() == pokemons[pos]->getTipo1()	){
							cout << i << " " << pokemons[i]->toString() << endl;
						}
                        		}
				}
				if(op == 2){

				}
				
			}
			
		}
		if(opcion == 5){
			cout<< "Ingrese opcion! \n1. Nombre \n2. Naturaleza \n3. Niveles \n4. Stats";
  int opc;
  cin>> opc;

  if (opc == 1)
  {
    string nomb;
    cout<< "Ingrese el nombre del pokemon!";
    cin>> nomb;
      

    cout<< "Los Pokemons son:" << endl;
    for (int i = 0; i < pokemons.size(); ++i)
    {
       cout<< i << ". " << pokemons[i]->getNombre();
    
  }

  if (opc == 2)
  {
    string natu;
    cout<< "Ingrese la Naturaleza del pokemon!";
    cin>> natu;

    for (int i = 0; i < pokemons.size(); ++i)
    {
      
      if (pokemons[i]->getNaturaleza() == natu)
      {
        cout<< i << ". " << pokemons[i]->getNaturaleza();
      }
    }
    
  }

  if (opc == 3)
  {
    int opc2;
    cout<< "Ingrese tipo de dato! \n1. Nivel \n2. HP \n3. ATK \n4. DEF \n5. SP_ATK \n6. SP_DEF \n SPEED" << endl;
    cin>> opc2;

    if (opc2 == 1)
    {
    cout<< "Ingrese opcion para operador de comparacion! \n1. igual a \n2. Diferente de \n3. Menor que \n4. Mayor que \n5. Mayor o igual que \n6. Menor o igual que" << endl;
    int opc3;
    cin>> opc3;

     if (opc3 == 1)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;


      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() == valor) 
        {
          cout<< i << ". " << pokemons[i]->getNombre() << "LVL: " << pokemons[i]->getNivel() << endl;
        }
      }
    }

     if (opc3 == 2)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;

      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() != valor) 
        {
          cout<< i << ". " << pokemons[i]->getNombre() << "LVL: " << pokemons[i]->getNivel() << endl;
        }
      }
    }

      if (opc3 == 3)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;


      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() < valor) 
        {
          cout<< i << ". " << pokemons[i]->getNombre() << "LVL: " << pokemons[i]->getNivel() << endl;
        }
      }
    }

      if (opc3 == 4)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;


      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() > valor) 
        {
          cout<< i << ". " << pokemons[i]->getNombre() << "LVL: " << pokemons[i]->getNivel() << endl;
        }
      }
    }

      if (opc3 == 5)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;


      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() >= valor) 
        {
          cout<< i << ". " << pokemons[i]->getNombre() << "LVL: " << pokemons[i]->getNivel() << endl;
        }
      }
    }
     if (opc3 == 6)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;


      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() <= valor) 
         {
          cout<< i << ". " <<  pokemons[i]->getNombre() << "LVL: " << pokemons[i]->getNivel();
         }
        }
      }





      if (opc2 == 2)
      {
        cout<< "Ingrese opcion para operador de comparacion! \n1. igual a \n2. Diferente de \n3. Menor que \n4. Mayor que \n5. Mayor o igual que \n6. Menor o igual que" << endl;
    int opc3;
    cin>> opc3;

     if (opc3 == 1)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;


      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() == valor) 
        {
          cout<< i << ". " << pokemons[i]->getHP() << "HP: " << pokemons[i]->getNivel() << endl;
        } 
      }
    }

     if (opc3 == 2)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;

      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() != valor) 
        {
          cout<< i << ". " << pokemons[i]->getHP() << "HP: " << pokemons[i]->getNivel() << endl;
        }
      }
    }

      if (opc3 == 3)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;

      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() < valor) 
        {
          cout<< i << ". " << pokemons[i]->getHP() << "HP: " << pokemons[i]->getNivel() << endl;
        }
      }
    }

      if (opc3 == 4)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;


      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() > valor) 
        {
          cout<< i << ". " << pokemons[i]->getHP() << "HP: " << pokemons[i]->getNivel() << endl;
        }
      }
    }

      if (opc3 == 5)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;

 

      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() >= valor) 
        {
          cout<< i << ". " << pokemons[i]->getHP() << "HP: " << pokemons[i]->getNivel() << endl;
        }
      }
    }
     if (opc3 == 6)
      {
      cout<< "Ingrese valor!";
      int valor;
      cin>> valor;

  

      for (int i = 0; i < pokemons.size(); ++i)
      {
        if (pokemons[i]->getNivel() <= valor) 
         {
          cout<< i << ". " << pokemons[i]->getHP() << "HP: " << pokemons[i]->getNivel() << endl;
         }
        }
      }
      }
    }
    
  }
	}}}
	return 0;
}

int menu(){
	int opcion;
	cout << endl;
	cout << "----------Menu----------" << endl;
	cout << "1. Agregar Pokemons" << endl;
	cout << "2. Modificar Pokemons" << endl;
	cout << "3. Eliminar Pokemons" << endl;
	cout << "4. Buscar Pokemons Por Tipo" << endl;
	cout << "5. Opcion Buscar " << endl; 
	cout << "6. Salir" << endl;
	cin >> opcion;
	return opcion;

}


