//Sacar La Media A 4 Notas

#include <iostream>
using namespace std;

int main()
 {
    double nota1, nota2, nota3, nota4;
    double media;

    // Solicitar las notas de los cuatro alumnos
    cout << "Ingrese la nota del primer alumno:  ";
    cin >> nota1;
    
    cout << "Ingrese la nota del segundo alumno: ";
    cin >> nota2;
    
    cout << "Ingrese la nota del tercer alumno:  ";
    cin >> nota3;
    
    cout << "Ingrese la nota del cuarto alumno:  ";
    cin >> nota4;

    // Calcular la media
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Mostrar el resultado
    cout << "\nLa nota final media de los cuatro alumnos es: " << media << endl;

return 0;
}