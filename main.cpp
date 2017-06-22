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

typedef struct contacto{
	contacto* anterior;
	contacto* siguiente;
	string nombre;
	string telefono;
	
};

contacto* primer = NULL;
contacto* ultimo = NULL;


void escribirContacto(){
	//Este metodo me escribe contactos en un archivo
	contacto contactoTemp;
	string verificacion = "S";
	ofstream archivo("contactos.txt");
	string nombreTemp = "";
	string telefonoTemp = "";
	while (verificacion == "S"){
		//Le digo al usuario que entrar
		//Que entre el nombre del contacto
		cout << "Introduzca el nombre del contacto" << endl;
		cin >> nombreTemp;
		//Que entre su numero
		cout << "Introduzca el numero" << endl;
		cin >> telefonoTemp;
		
		contactoTemp.nombre = nombreTemp;
		cout << "se metio el nombre";
		
		contactoTemp.telefono = telefonoTemp;
		cout << "se metio el tel";
		
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
	_contacto -> anterior = NULL;
	_contacto -> siguiente = NULL;
	
	if (primer == NULL){
		primer = _contacto;
		ultimo = _contacto;
	} else {
		_contacto = ultimo;
		ultimo -> siguiente = _contacto;
		ultimo = _contacto;
	}
}

void leerContactos(){
	//Este metodo me permite crear los punteros que me van a ayudar con la estructura
	ifstream archivoEntrada("contactos.txt");
	//contacto* contactoTempEntrada = (struct contacto*) malloc(sizeof(struct contacto));
	string nombreTemp = "";
	string telefonoTemp = "";
	
	while (archivoEntrada >> nombreTemp >> telefonoTemp){
		
		//contactoTempEntrada -> nombre = nombreTemp;
		//contactoTempEntrada -> telefono = telefonoTemp;
		cout << nombreTemp << ", " << telefonoTemp << endl;
		//agregar(contactoTempEntrada);
	}
	
}

 
 int main(){
	int idContacto = 0;
	string nombre = "";
	string telefono = "";
	string verificacion = "S";
	int opcion = 0;
	
	while(opcion != 5){
		switch(opcion){
			case 1:
				cout << "Vamos a agregar" << endl;
				escribirContacto();
				break;
			case 2:
				cout << "Vamos a eliminar" << endl;
				break;
			case 3:
				cout << "Vamos a modificar" << endl;
				break;
			case 4:
				cout << "Vamos a listar" << endl;
				leerContactos();
				break;
			case 5:
				cout << "Saliste del programa" << endl;
				break;
			default:
				break;
		}
		cout << "Seleccione una opcion del menu:\n";
		cout << "1 - Aniadir contacto\n";
		cout << "2 - Eliminar contacto\n";
		cout << "3 - Modificar contactos\n";
		cout << "4 - Listar contactos\n";
		cout << "5 - Salir del programa\n";
		cin >> opcion;
	}
	
	
	
	//escribirContacto();
	
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
	
	

 }