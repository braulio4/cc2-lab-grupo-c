#include <iostream>
#include <conio.h>
using namespace std;

 
void edad(int anio1,int mes1,int fech1,int anio2,int mes2,int fech2);
 
int main (){
    int anio1,mes1,fech1;
 
    int anio2,mes2,fech2; 
    cout<<"ponga Anio actual: "; cin>>anio1;
    cout<<"ponga Mes actual: "; cin>>mes1;
    cout<<"ponga dia actual: "; cin>>fech1;
 
    cout<<"\nponga Anio Nacimiento: ";  cin>>anio2;
    cout<<"ponga Mes de Nacimiento: ";  cin>>mes2;
    cout<<"ponga dia de Nacimiento: ";  cin>>fech2;
 
    edad(anio1,mes1,fech1,anio2,mes2,fech2);
 	getch();
    return 0;
}
 

void edad(int anio1,int mes1,int fech1,int anio2,int mes2,int fech2){
    int fech,mes;
 
    if (fech1<fech2){  
        fech1=fech1+30; 
        mes1=mes1-1; 
        fech=fech1-fech2;
    }
    else 
        fech=fech1-fech2; 
 
    if( mes1<mes2){  
        mes1=mes1+12;
        anio1=anio1-1;
        mes=mes1-mes2;
    }
    else 
        mes=mes1-mes2;
 
    cout<<"\ntu tienes:\n";
    cout<<" Edad: "<<anio1-anio2<<endl; 
    cout<<" Mes: "<<mes<<endl;
    cout<<" Dia: "<<fech<<endl;
}