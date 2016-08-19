#include "Pokemon.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace  std;
int menu();


int main(int argc, char* argv[]){
	int opcion=0;
	vector <Pokemon*> pokemons;
	while((opcion = menu()) != 6 ){
		if(opcion == 1){
			int legend;
			string nombre;
			string naturaleza;
			string tipo1 = "";
			string tipo2 = "";	
			int nivel, hp,ataque,defensa, ataqueE,defensaE,rapidez;
			bool legendario;
			cout << "Ingrese El Nombre: " << endl;
			cin >> nombre;
			cout << "Ingrese La Naturalez" << endl;
			cin >> naturaleza; 
			cout << "Ingrese El Nivel: " << endl;
			cin >> nivel;
			cout << "Ingrese El Tipo 1: " << endl;
			cin >> tipo1;
			cout << "Ingrese El Tipo 2: " << endl;
			cin >> tipo2;
			cout << "1. Legendario: SI " << endl;
			cout << "2. Legendario: NO " << endl;
			cin >> legend;
			if(legend == 1){
				legendario = true;
			}else{
				legendario = false;
			}
			pokemons.push_back(new Pokemon(nombre,nivel,naturaleza,tipo1,tipo2,hp,ataque,defensa,ataqueE,defensaE,rapidez,legendario));
			pokemons[0]->toString();
			cout << "AGREGADO!" << endl;
		}
		if(opcion == 2){
			int opcion;
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
				cin >> opcion;
				if(opcion == 1){
					cout << "Ingrese El Nombre: " << endl;
					cin >> nombre;
					pokemons[pos]->setNombre(nombre);
				}
				if(opcion == 2){
					cout << "Ingrese El Nivel: " << endl;
					cin >> nivel;
					pokemons[pos]->setNivel(nivel);
				}
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
	}
	return 0;
}

int menu(){
	int opcion;
	cout << "----------Menu----------" << endl;
	cout << "1. Agregar Pokemons" << endl;
	cout << "2. Modificar Pokemons" << endl;
	cout << "3. Eliminar Pokemons" << endl;
	cout << "4. Salir" << endl;
	cin >> opcion;
	return opcion;

}


