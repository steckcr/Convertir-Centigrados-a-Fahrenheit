// Curso de programación C++
// Steck Orozco Durán
// TAREA 1. EJERCICIO: Convertir °Centigrados a °Fahrenheit
// 

#include <iostream>

float Centigrados=0;    // Declaracion de la variable "Centigrados" del tipo flotante
float Fahrenheit=0;     // Declaracion de la variable "Fahrenheit" del tipo flotante

int main() {

std::cout << "Ingrese el valor de los °Centigrados a Convertir: " << std::endl;   // Lee dato del teclado y  
std::cin >> Centigrados;                                                          // lo almacena en "Centigrados"

Fahrenheit=((9*Centigrados)/5)+32; // Fórmula de la conversión de °Centigrados a °Fahrenheit

std::cout << "Los °Fahrenheit son: " << Fahrenheit << std::endl; // Muestra el resultado de la conversión °C a °F

return (0);

}