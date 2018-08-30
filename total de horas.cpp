#include<iostream>
#include<conio.h>
using namespace std;
struct etapa{
	int hora;
	int minutos;
	int segundo;
}etap[100];

int main(){
	
	int nEtapa;
	cout<<"Ingrese el numero de etapa"<<endl;
	cin.sync();cin>>nEtapa;
	int toH=0,toM=0,toS=0;
	for(int i=0;i<nEtapa;i++){
		cout<<"Ingrese los datos de la etapa "<<i+1<<endl;
		cout<<"Duracion en hora"<<endl;cin.sync();cin>>etap[i].hora;
		toH+=etap[i].hora;
		cout<<"Duracion en minutos"<<endl;cin.sync();cin>>etap[i].minutos;
		toM+=etap[i].minutos;
		cout<<"Duracion en segundos"<<endl;cin.sync();cin>>etap[i].segundo;
	    toS+=etap[i].segundo;
	    if(toS>60){
	    	toS-=60;
	    	toM++;
		}
		if(toM>60){
			toM-=60;
			toH++;
		}
	}
	cout<<"La duracion de toda la carrera fue: "<<toH<<":"<<toM<<":"<<toS<<endl;
	
	
	
	getch();
	return 0;
}
