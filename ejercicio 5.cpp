 //Desarrollar un programa, utilizando funciones con un tipo de retorno, con las siguientes opciones:
//a. Introducir un valor x entero comprendido entre 0 y 100.
//b. Validar que sea un valor par.
//c. Sumar todos los números impares desde el 0 hasta el valor de x.

#include <iostream>
#include <conio.h>
using namespace std;

bool numeroingresar(int x);
bool numpar(int x);
void sumimpares(int x);

int main(){
	int num1;
	cout<<"ingrese un numero: "; cin>>num1;
	if(numeroingresar(num1)==true && numpar(num1)==true){
		sumimpares(num1);
	}else{
		cout<<"ingreso un numero fuera de 0 a 100\n";
	}
	getch();
}

bool numeroingresar(int x){
	if(x>0 && x<100){
		return true;
	}else{
		return false;
	}
}

bool numpar(int x){
	if(x%2==0){
		return true;		
	}else{
		return false;
	}
}

void sumimpares(int x){
	int sum = 0;
	for (int i=1; i<x; i++){
		if(i % 2 != 0){
			sum+=i;
		}	
	}
	cout<<"la suma de impares es: "<<sum;
	
}
