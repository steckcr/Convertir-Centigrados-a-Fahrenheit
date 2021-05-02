// Curso de programación C++
// Steck Orozco Durán
// TAREA 1. EJERCICIO: Convertir °Centigrados a °Fahrenheit
// 

#include <iostream>

int main() {

// Declaracion de la variable "Centigrados" del tipo flotante
float Centigrados=0;    

// Declaracion de la variable "Fahrenheit" del tipo flotante
float Fahrenheit=0;     

// Lee dato del teclado
std::cout << "Ingrese el valor de los °Centigrados a Convertir: " << std::endl;      

// Almacena el dato en "Centigrados"
std::cin >> Centigrados;                                                          

// Fórmula de la conversión de °Centigrados a °Fahrenheit
Fahrenheit=((9*Centigrados)/5)+32; 

// Muestra el resultado de la conversión °C a °F
std::cout << "Los °Fahrenheit son: " << Fahrenheit << std::endl; 

return 0;

}