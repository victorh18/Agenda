/*Programa simple de Agenda
 * Victor de la Rosa
 * 2015-2747
 * 
 * */
 
 #include <iostream>
 #include <fstream>
 #include <string>
 #include <cstdlib>
 
using namespace std;

typedef struct {
	string nombre;
	string telefono;
	
} contacto;

void escribirContacto(){
	//Este metodo me escribe contactos en un archivo
	contacto contactoTemp;
	string verificacion = "S";
	ofstream archivo("contactos.txt");
	while (verificacion == "S"){
		//Le digo al usuario que entrar
		//Que entre el nombre del contacto
		cout << "Introduzca el nombre del contacto" << endl;
		cin >> contactoTemp.nombre;
		//Que entre su numero
		cout << "Introduzca el numero" << endl;
		cin >> contactoTemp.telefono;
		
		archivo << contactoTemp.nombre << ' ' << contactoTemp.telefono << endl;
		
		//Validacion de 
		cout << "Deseas agregar otro contacto? S/N" << endl;
		cin >> verificacion;
	}
	archivo.close();
	
}
 
 int main(){
	int idContacto = 0;
	string nombre = "";
	string telefono = "";
	string verificacion = "S";
	
	escribirContacto();
	
	/*while (verificacion == "S"){
		//Le digo al usuario que entrar
		//Que entre el nombre del contacto
		cout << "Introduzca el nombre del contacto" << endl;
		cin >> nombre;
		//Que entre su numero
		cout << "Introduzca el numero" << endl;
		cin >> telefono;
		
		archivo << nombre << ' ' << telefono << endl;
		
		//Validacion de 
		cout << "Deseas agregar otro contacto? S/N" << endl;
		cin >> verificacion;
	}
	
	*/
	
	
	cout << "lol";
 }