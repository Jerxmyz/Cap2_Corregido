#include <iostream>

using namespace std;

class AlmacenamientoNumeros {   // Nombre más descriptivo
    int numeros[10];             // Cambiado de "a" a "numeros"
    int contador = 0;            // Cambiado de "i" a "contador"
public:
    void agregarNumero(int valor) { // Cambiado de "x" a "agregarNumero"
        numeros[contador++] = valor;
    }
    
    int calcularSuma() {          // Cambiado de "y" a "calcularSuma"
        int suma = 0;             // Cambiado de "s" a "suma"
        for (int indice = 0; indice < contador; ++indice) { // Cambiado de "j" a "indice"
            suma += numeros[indice];
        }
        return suma;
    }
    
    double calcularPromedio() {   // Cambiado de "z" a "calcularPromedio"
        return contador == 0 ? 0.0 : static_cast<double>(calcularSuma()) / contador;
    }
};

int main() {
    setlocale(LC_ALL, "Spanish"); 
    AlmacenamientoNumeros almacenamiento; // Cambiado de "p" a "almacenamiento"
    int totalNumeros;                   // Cambiado de "t" a "totalNumeros"
    cout << "¿Cuantos numeros ingresara? ";
    cin >> totalNumeros;
    
    for (int indice = 0; indice < totalNumeros; ++indice) { // Cambiado de "k" a "indice"
        cout << "Numero: ";
        int numero;                     // Cambiado de "d" a "numero"
        cin >> numero;
        almacenamiento.agregarNumero(numero);
    }
    
    cout << "Suma = "      << almacenamiento.calcularSuma() << '\n';
    cout << "Promedio = "  << almacenamiento.calcularPromedio() << '\n';
    
    return 0;
}
