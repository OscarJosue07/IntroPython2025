/*1.EscrEscribe un programa que lea de la entrada estándar dos números y muestren 
en la salida estándar su suma, resta, multiplicación y división.*/


#include <iostream> 
using namespace std;

int main()

{
int n1,n2,suma = 0,resta = 0,multiplicacion = 0,division = 0;

cout<<"Digite Un Numero: "; cin>>n1;
cout<<"Digite Otro Numero: "; cin>>n2;	
	
	suma=n1 + n2;
	resta=n1 - n2;
	multiplicacion=n1 * n2;
	division=n1 / n2;
	
	cout<<"\nLa Suma Es: "<<suma <<endl;
	cout<<"\nLa Resta Es: "<<resta <<endl;
	cout<<"\nLa Multiplicacion Es: "<<multiplicacion <<endl;
	cout<<"\nLa Division Es: "<<division <<endl;
	return 0;
}