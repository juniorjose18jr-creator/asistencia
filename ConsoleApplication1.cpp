#include <iostream>
using namespace std;

int main() {
    double asistencia;

    cout << "Ingrese el porcentaje de asistencia: ";
    cin >> asistencia;

    if (asistencia >= 80) {
        cout << asistencia << "%  ->  Puede presentar el examen final" << endl;
    }
    else {
        cout << asistencia << "%  ->  Debe reponer clases" << endl;
    }

    return 0;
}
6