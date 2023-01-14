#include<iostream>

using namespace std;

int main(){
	
	string name;
	// c de choice :D
	int c1, c2, c3;
	
	cout << " Te despertas en una casa algo precaria sobre una cama de paja." << endl;
	cout << " Huele raro y esta muy sucio." << endl;
	cout << " Escuchas unos pasos atras de la puerta." << endl;
	cout << endl;
	cout << "					*Sonido de puerta vieja abriendose*" << endl;
	cout << endl;
	cout << " Desconocido:" << endl;
	cout << "	Ahh! Hola! Por fin despertaste!!" << endl;
	cout << endl;
	cout << " Un hombre de dudosa higiene abre la puerta." << endl;
	cout << " Es petiso, barbon, gordo y le faltan las paletas." << endl;
	cout << " Tambien habla gritando y tiene una voz rasposa." << endl;
	cout << " Pero parece ser una buena persona." << endl;
	cout << endl;
	cout << " Desconocido:" << endl;
	cout << "	Mi nombre es Ermenegildo. Cual es tu nombre?" << endl;
	cout << endl;
	cout << " Escribe tu nombre: ";
	cin >> name;

	cout << " Ermenegildo:" << endl;
	cout << "	Asi que te llamas " + name + ", que buen nombre!" << endl;
	cout << "	Okey " + name + ", te parece si empezamos con la aven..." << endl;
	cout << "	Oh! Espera! Casi me olvido de darte algo!!" << endl;
	cout << "	Toma..." << endl;
	cout << endl;
	cout << " Te da un poncho polvoriento" << endl;
	cout << " Lo tomas?" << endl;
	cout << " 1 = Si  |  2 = No" << endl;
	cout << endl;
	cout << " >>> ";
	cin >> c1;
	
	if(c1 == 1){
		cout << " Ganas +1 armadura" << endl;
		cout << " Ermenegildo: " << endl;
		cout << "	Excelente!! Sabia que te gustaria!" << endl;
		cout << "	Se nota que tienes muy buen gusto" << endl;
		cout << endl;
		cout << " Miras de reojo su ropa." << endl;
		cout << " Tiene el mismo poncho." << endl;
		cout << endl;
		cout << " Ermenegildo: " << endl;
		cout << "	Okey! Ahora podemos salir a la aventura!!" << endl;
		cout << endl;
		cout << " Salen de la casa y ves 3 caminos." << endl;
		cout << " Ermenegildo va directo por el camino del medio." << endl;
		cout << " Lo sigues?" << endl;
		cout << " 1 = Si  |  2 = No" << endl;
		cout << endl;
		cout << " >>> ";
		cin >> c2;
		if(c2 == 2){
			cout << " Elijes no seguir a Ermenegildo." << endl;
			cout << " Ahora, derecha o izquierda?" << endl;
			cout << " 1 = Derecha  |  2 = Izquierda" << endl;
			cout << endl;
			cout << " >>> ";
			cin >> c3;
			cout << endl;
			if(c3 == 1){
				cout << " Elejiste el camino de la derecha." << endl;
				cout << " Caminas por mucho tiempo y no encontras nada." << endl;
				cout << " Luego de mucho caminar te encuentras una vibora." << endl;
				cout << " Te pica y moris lentamente por el veneno." << endl;
				cout << endl;
				cout << " GAME OVER >:P" << endl;
			}else{
				cout << " Elejiste el camino de la izquierda." << endl;
				cout << " Luego de caminar por un largo rato te encotras una niebla" << endl;
				cout << " Te metes en la niebla para seguir tu camino" << endl;
				cout << " Luego de pocos metros te desmayas y moris" << endl;
				cout << " Resulta que la niebla era un gas venenoso" << endl;
				cout << " GAME OVER >:P" << endl;
			}
			
		}else{
			cout << " Elijes seguir a Ermenegildo" << endl;
		}
		
		
	}else{
		cout << " Ermenegildo: " << endl;
		cout << "	Oh... Ok... Supongo que no todos tenemos buen gusto." << endl;
		cout << endl;
		cout << " Miras de reojo su ropa." << endl;
		cout << " Tiene el mismo poncho." << endl;
		cout << " Te sientes mal por abrlo rechazado." << endl;
	}
	return 0;
}