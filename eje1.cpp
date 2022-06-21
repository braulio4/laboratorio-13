#include <iostream>

using namespace std;


struct Amigos{
char nombre[20];
int dia,mes,anio;

}amigos[100],Dia,Mes;

int main(){

setlocale(LC_CTYPE, "spanish");
cout.precision(12);

int amigosUsuario,totalAmigos = 0;

cout << "Digite la cantidad de amigos a procesar: ";
cin >> amigosUsuario;

cout << "\nDigite el dia de cumpleaños a procesar: ";
cin >> Dia.dia;

cout << "Digite el mes de cumpleaños a procesar: ";
cin >> Mes.mes;

cout << "\n";
for (int i = 0; i < amigosUsuario; i++){
	fflush(stdin);
	cout << "\n.:Amigo #"<< amigos[i].dia;
	
	cout << "Mes: ";
	cin >> amigos[i].mes;
	
	cout << "Año: ";
	cin >> amigos[i].anio;
	
	if ( amigos[i].dia == Dia.dia){
	if(amigos[i].mes == Mes.mes){
		totalAmigos++;
	}
	}
	cout << "\n";
}

cout << "La cantidad de amigos que cumplen años en el dia y fecha a procesar son: " << totalAmigos++ << endl;

cout << "\n";
system("pause");
return 0;

}