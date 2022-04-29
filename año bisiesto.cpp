//Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para 
//realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el 
//año leído por teclado, comprueba si es o no bisiesto.
#include<iostream>
#include<conio.h> 
using namespace std;

void bisiesto(int x);

int main(){
	int num1;
	cout<<"ingresa un anio: "; cin>>num1;
	bisiesto(num1);
	getch();
	return 0;
}

void bisiesto(int x){
	if(x%4 == 0 and x%100 != 0 or x%400 == 0){
		cout<<"es un anio bisiesto";
	}
	else{
		cout<<"no es un anio bisiesto";
	}
}
