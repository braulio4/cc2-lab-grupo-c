#include<iostream>
#include<stdlib.h>
using namespace std;
//prototipo de funcion
int nummax(int x,int y);

int main(){
	int n1,n2;
	int funcion1;
	cout<<"ingresa 2 numeros: "; cin>>n1>>n2;
	funcion1=nummax(n1,n2);
	cout<<"el numero mayor es: "<<funcion1<<endl;
	
	
	system("PAUSE");
	return 0;
}

int nummax(int x,int y){
	int max;
	if(x<y){
		max=y;
	}
	else{	
		max=x;
	}
	return max;
}