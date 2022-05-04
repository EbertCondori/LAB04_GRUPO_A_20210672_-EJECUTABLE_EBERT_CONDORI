#include <iostream>
using namespace std;


/*
2.
int main(){
	
	int vector[8];
	int b;
	int aux;
	cout<<"ingrese 8 numeros : ";
	for(int i=0;i<8;i++){
		cin>>vector[i];
	}
	cout<<"numero a buscar :"<<endl;
	cin>>b;
	
	for(int i=0;i<8;i++){
		if(vector[i]==b)
			aux=1;
	}
	if(aux==1)
		cout<<"true";
	else
		cout<<"false";
}

*/


/*
1.
#include "iostream"
#include "string"
using namespace std;

int main(){
	string nom[3];
	string apell[3];
	string edad[3];
	string dni[3];
	
	cout<<"ingrese datos"<<endl;
	for(int i=0;i<3;i++){
		cout<<"ingrese nombre "<<i+1<<" : ";
		getline(cin,nom[i]);
		cout<<"ingrese apellido "<<i+1<<" : ";
		getline(cin,apell[i]);
		cout<<"ingrese edad "<<i+1<<" : ";
		getline(cin,edad[i]);
		cout<<"ingrese DNI "<<i+1<<" : ";
		getline(cin,dni[i]);
		cout<<endl;
	}
	for(int i=0;i<3;i++){
		cout<<nom[i];
		cout<<" ";
		cout<<apell[i];
		cout<<" ";
		cout<<edad[i];
		cout<<" ";
		cout<<dni[i];
		cout<<" ";
		cout<<endl;
	}
	


}
*/


/*
int main(){
	int a[5][3];
	int b=0;
	for(int i=0;i<5;i++)
		for(int j=0;j<3;j++)
	{
		cout<<"Valor? ";
		cin>>a[i][j];
	}
		
	
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
	
		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			if(j==1 or j==3)
				b=b+a[i][j];
		}
	}
	cout<<"suma de filas pares : "<<b;
	
}
*/


/*

int divi(int a){
	int cont;
	int b=0;
	for(int i=1;i<a;i++){
		cont=a%i;
		if(cont==0){
			b++;
		}
	}
	return b;
}

int main(){
	int aux=0;
	int a[100];

	
	for(int i=0;i<100;i++){
		if(divi(i)==1){
			a[aux]=i;
			aux=aux+1;
			}
		}
		
	

	
	for(int i=aux-1;i>=0;i--)
		cout<<a[i]<<" ";

	
	
}
*/



#include "stdio.h"
#include "string"

int main(){
	
	string a[11][3];
	string b;
	int aux;
	int opc;
	for(int i=0;i<10;i++){
		cout<<endl<<"PRODUCTO "<<i+1<<" nombre / precio / stock "<<endl;
		for(int j=0;j<3;j++){
			cin>>a[i][j];
			
		}
		cout<<endl;
	}
	cout<<"nombre / precio / stock"<<endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"1.ingrese nuevo producto"<<endl;
	cout<<"2.buscar producto por su nombre"<<endl;
	cout<<"3.modifique el stock y precio de un producto"<<endl;
	cout<<"ingrese opcion: ";
	cin>>opc;
	cout<<endl;
	if(opc==1){
		cout<<"ingreso la opcion 1"<<endl;
		for(int i=10;i<10+1;i++){
			cout<<endl<<"PRODUCTO "<<i+1<<" nombre / precio / stock "<<endl;
			for(int j=0;j<3;j++){
				cin>>a[i][j]; 
			}
		}
		cout<<"matriz actualizada"<<endl;
		cout<<"nombre / precio / stock"<<endl;
		for(int i=0;i<11;i++){
			for(int j=0;j<3;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}
	else if (opc==2){
		cout<<"buscar un producto por su nombre"<<endl;
		cin>>b;
		for(int i=0;i<10;i++){
			for(int j=0;j<3;j++){
				if(a[i][j]==b){
					aux=i;
				}
					
			}
		}
		//cout<<"numeor de fila "<<aux;
		cout<<"nombre / precio / stock"<<endl;
		for(int i=0;i<10;i++){
			for(int j=0;j<3;j++){
				if(i==aux)
				    cout<<a[i][j]<<" ";
			}
		}
		
	}
	else if (opc==3){
		cout<<"buscar un producto por su nombre"<<endl;
		cin>>b;
		for(int i=0;i<10;i++){
			for(int j=0;j<3;j++){
				if(a[i][j]==b){
					aux=i;
				}
				
			}
		}
		cout<<"ingrese nuevo / precio / stock"<<endl;
		for(int i=0;i<10;i++){
			for(int j=1;j<3;j++){
				if(i==aux)
					cin>>a[i][j];
			}
		}
		cout<<"matriz actualizada"<<endl;
		cout<<"nombre / precio / stock"<<endl;
		for(int i=0;i<10;i++){
			for(int j=0;j<3;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		
		
	}
	else
		cout<<"no exicte opcion ingresada";
	
	
}



/*
int main(){
	int a[3][3];
	int aux;
	int mayor=1;
	cout<<"ingrese elementos ala matriz 3x3 "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	cout<<"la suma de cada fila"<<endl;
	// i fila
	for(int i=0;i<3;i++){
	    aux=0;
		for(int j=0;j<3;j++){
			//aux=0;
			aux=aux+a[i][j];
			if(aux>mayor)
				mayor=aux;

			
		}
		cout<<"suma fila "<<i<<" : "<<aux<<endl;
	}
	cout<<"fila mayor suma : "<<mayor;
}
*/
