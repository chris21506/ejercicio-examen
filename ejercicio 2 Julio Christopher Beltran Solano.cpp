//Julio Christopher Beltran Solano
//video de youtube
//https://youtu.be/-Vy4qrl675E?si=-TJRcYOKXB0Qrrcu
#include <iostream>
using namespace std;

// 3.0 struct Rect define la forma del rectángulo.
struct Rect {
    int x, y, alto, ancho;

    // 3.1 Se proporcionan tres constructores para inicializar rectángulos de diferentes maneras.
    Rect() : x(0), y(0), alto(0), ancho(0) {}

    // 3.2 Se proporcionan tres constructores para inicializar rectángulos de diferentes maneras. 
    Rect(int x_, int y_, int alto_, int ancho_)
        : x(x_), y(y_), alto(alto_), ancho(ancho_) {
    }

    // 3.3 Se proporcionan tres constructores para inicializar rectángulos de diferentes maneras.
    Rect(int alto_, int ancho_) : x(0), y(0), alto(alto_), ancho(ancho_) {}
};

// 3.4  imprimirRect imprime coordenadas iniciales y calcula finales, validando si los valores son positivos.
bool imprimirRect(const Rect& r, int& xFin, int& yFin) {
    cout << "Inicio X: " << r.x << ", Y: " << r.y << endl;
    xFin = r.x + r.ancho;
    yFin = r.y + r.alto;
    cout << "Fin X: " << xFin << ", Y: " << yFin << endl;

    if (r.x < 0 || r.y < 0 || r.alto < 0 || r.ancho < 0)
        return false;

    return true;
}

// 3.5  CheckOverlap detecta si dos rectángulos se traslapan usando reglas geométricas de no-superposición.
bool CheckOverlap(const Rect& a, const Rect& b) {
    if (a.x >= b.x + b.ancho || b.x >= a.x + a.ancho)
        return false;
    if (a.y >= b.y + b.alto || b.y >= a.y + a.alto)
        return false;
    return true;
}

int mainRect() {
    Rect r1(0, 0, 5, 5);
    Rect r2(6, 6, 5, 5);
    Rect r3(2, 2, 2, 2);
    Rect r4(1, 1, 7, 2);

    int xFin, yFin;
    imprimirRect(r1, xFin, yFin);

    cout << "¿r1 y r2 se traslapan? " << (CheckOverlap(r1, r2) ? "Sí" : "No") << endl;
    cout << "¿r1 y r3 se traslapan? " << (CheckOverlap(r1, r3) ? "Sí" : "No") << endl;
    cout << "¿r1 y r4 se traslapan? " << (CheckOverlap(r1, r4) ? "Sí" : "No") << endl;

    return 0;
}
