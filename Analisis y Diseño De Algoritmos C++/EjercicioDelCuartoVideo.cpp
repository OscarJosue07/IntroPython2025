/* Escribe un programa que lea de la entrada estandar el precio de un producto y 
muestre en la salida estandar el precio del producto al aplicarle el IVA*/

#include <iostream> 
using namespace std;

int main()

{
	
	float precio,precioFinal,IVA;
	
	cout<<"Digite el precio del producto: ";
	cin>>precio;
	
	IVA = precio*0.21;
	precioFinal = precio + IVA;
	
	
	cout<<"\nEl precio Final al aplicarle IVA es: "<<precioFinal;
	
	
	return 0;
}