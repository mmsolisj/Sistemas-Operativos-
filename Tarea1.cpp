#include <iostream>
#include <fstream>

using namespace std; 

int main() {

	ofstream file;
	file.open("tarea1.txt");
	if (file.is_open()) {
		file.write("Hellooooo\n",10); 
		file.write( "Aufwiedersehen\n",15);
		file.close(); 
		cout << "Archivo modiifcado";

	}
	else {
		cout << "No se pudo abrir el archivo" << endl; 
	}

	return 0; 
}