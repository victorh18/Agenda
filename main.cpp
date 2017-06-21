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
	contacto* anterior;
	contacto* siguiente;
	string nombre;
	string telefono;
	
} contacto;

contacto* primer = NULL;
contacto* ultimo = NULL;


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
		
		//Validacion de la iteracion
		cout << "Deseas agregar otro contacto? S/N" << endl;
		cin >> verificacion;
	}
	archivo.close();
	
}

//Este metodo me permite agregar contactos a la estructura del programa
void agregar(contacto* _contacto){
	//Instanciamos valores
	_contacto
}

void leerContactos(){
	//Este metodo me permite crear los punteros que me van a ayudar con la estructura
	ifstream archivoEntrada("contactos.txt");
	contacto contactoTempEntrada;
	
	while (archivoEntrada >> contactoTempEntrada.nombre >> contactoTempEntrada.telefono){
		cout << contactoTempEntrada.nombre << ", " << contactoTempEntrada.telefono << endl;
	}
	
}

 
 int main(){
	int idContacto = 0;
	string nombre = "";
	string telefono = "";
	string verificacion = "S";
	
	leerContactos();
	
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