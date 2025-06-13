//Julio Christopher Beltran Solano
//video de youtube
//https://youtu.be/DKzF9K1tteI?si=C9zxL1ruKVyxexSe
#include <iostream>
using namespace std;

int mainMem() {
    // 4) Declaramos un puntero a float e inicializamos con nullptr
    float* ptrFloat = nullptr;

    // 4.1 Asignamos memoria dinámica para un float y almacenamos el valor 7.77
    ptrFloat = new float(7.77);

    // 4.2 Creamos una variable float normal con valor 6.66
    float valor = 6.66;

    // 4.3 Reasignamos el puntero para que apunte a la variable `valor`
    ptrFloat = &valor;

    // 4.4 Mensaje indicando que se ha causado una fuga de memoria (memory leak)
    cout << "Cuidado, acabas de causar un memory leak!" << endl;

    // 4.5 Explicación de por qué ocurrió el memory leak 
    cout << "Esto es un memory leak porque perdimos la referencia a la memoria que pedimos con new y nunca la liberamos con delete. "
        "Para evitarlo, debemos hacer delete antes de reasignar el puntero." << endl;

    // 4.6 Se vuelve a reservar memoria dinámica para un nuevo float con valor 1984.0
    ptrFloat = new float(1984.0f);

    // 4.7 Se copia el valor del puntero a otro puntero (los dos apuntan al mismo bloque)
    float* otroPtr = ptrFloat;

    // 4.8 Liberamos la memoria apuntada por ptrFloat y lo asignamos a nullptr
    delete ptrFloat;
    ptrFloat = nullptr;

    // 4.9 Verificamos si ptrFloat es igual a nullptr
    if (ptrFloat == nullptr)
        cout << "ptrFloat es igual a nullptr" << endl;

    // 4.10 También se puede usar NULL, aunque es preferible nullptr en C++ moderno
    if (ptrFloat == NULL)
        cout << "ptrFloat es igual a NULL" << endl;

    // 4.11 Aquí otroPtr aún apunta a memoria que fue liberada: peligroso (dangling pointer)
    if (otroPtr != nullptr && otroPtr != NULL)
        cout << "otroPtr no es nullptr ni NULL, cuidado: apunta a memoria ya liberada." << endl;

    return 0;
}

