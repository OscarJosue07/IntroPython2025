/* La sentencia if

    if (condicional){
         	Instrucciones1;
    }
    else{
        Instrucciones 2;
    } 
*/

#include<iostream>
using namespace std;

int main(){
	int numero, dato =5;
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero == dato){
		cout<<"El numero es 5";
	}
	else{
		cout<<"El numero es diferente de 5";
	}
	return 0;
}