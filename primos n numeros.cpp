//Hacer un programa que desarrolle una función, que genere en pantalla el listado de 
//números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).
#include<iostream>
#include<conio.h>
using namespace std;

void primos(int x);

int main(){
	int num1;
	cout<<"ingrese hasta donde quiere hallar los numeros primos: "; cin>>num1;
	primos(num1);
	getch();
	return 0;
}

void primos(int x){
	
	for(int i=1;i<=x;i++){
		int suma=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				suma++;
			}
		}
		if(suma<1){
			cout<<i<<" ";
		}
	}
}