// Julio Christopher Beltran Solano
//youtube video
//https://youtu.be/DsS-ZiYOWy4?si=BZQZaUwSJEWISflK
#include <iostream>
using namespace std;

// 1.1 y 1.4 Se declara la sobrecarga de funciones modificarArray y Se llama a la versión de modificarArray que usa punteros.
void modificarArray(bool arr[], int size);
void modificarArray(int* arr, int size);

int main() {
    // 1.0 Se declara el arreglo de booleanos.
    bool arregloBool[5];
    modificarArray(arregloBool, 5);

    // Mostrar resultado
    cout << "Array de booleanos: ";
    for (int i = 0; i < 5; i++) {
        cout << arregloBool[i] << " ";
    }
    cout << endl;

    // 1.3 Se crea el arreglo de enteros del 0 al 9.
    int arregloEnteros[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    modificarArray(arregloEnteros, 10);

    return 0;
}

// 1.2 Se implementa la lógica para alternar true/false en el arreglo booleano.
void modificarArray(bool arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (i % 2 != 0);
    }
}

// 1.4–1.8 Se imprime la dirección de memoria y el nuevo valor del arreglo.
void modificarArray(int* arr, int size) {
    int* ptr = arr;
    for (int i = 0; i < size; i++) {
        int valorOriginal = *(ptr + i);
        *(ptr + i) = valorOriginal % 2;
        cout << "Dirección: " << (ptr + i)
            << " | Valor tras %2: " << *(ptr + i) << endl;
    }
}
