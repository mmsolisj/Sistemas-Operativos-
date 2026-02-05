#include <iostream>
#include <fstream>

using namespace std; 

int main() {

	ofstream file("tarea1.txt");
	if (file.is_open()) {
		file << "Hellooooo\n"; 
		file << "Aufwiedersehen\n";
		file.close(); 
		cout << "Archivo modiifcado";

	}
	else {
		cout << "No se pudo abrir el archivo" << endl; 
	}

	return 0; 
}