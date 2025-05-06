#include <iostream>

using namespace std;

class AlmacenamientoNumeros {   // Nombre descriptivo
    int numeros[10];             // Arreglo para almacenar números
    int contador = 0;            // Contador de números almacenados

public:
    void agregarNumero(int valor) { // Agrega un número al arreglo
        if (contador < 10) {        // Verifica que no se exceda el tamaño
            numeros[contador++] = valor;
        } else {
            cout << "Capacidad máxima alcanzada." << endl;
        }
    }
    
    int calcularSuma() const {      // Calcula la suma de los números
        int suma = 0;                // Variable para almacenar la suma
        for (int indice = 0; indice < contador; ++indice) {
            suma += numeros[indice];
        }
        return suma;
    }
    
    double calcularPromedio() const { // Calcula el promedio de los números
        return contador == 0 ? 0.0 : static_cast<double>(calcularSuma()) / contador;
    }
};

int main() {
    AlmacenamientoNumeros almacenamiento; // Objeto para almacenar números
    int totalNumeros;                   // Total de números a ingresar
    cout << "¿Cuántos números ingresará? ";
    cin >> totalNumeros;
    
    for (int indice = 0; indice < totalNumeros; ++indice) {
        cout << "Número: ";
        int numero;                     // Variable para el número ingresado
        cin >> numero;
        almacenamiento.agregarNumero(numero);
    }
    
    cout << "Suma = "      << almacenamiento.calcularSuma() << '\n';
    cout << "Promedio = "  << almacenamiento.calcularPromedio() << '\n';
    
    return 0;
}
