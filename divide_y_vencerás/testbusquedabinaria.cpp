#include <iostream>
#include <vector>
#include "DyV.h"
using namespace std;

int main() {
    // Ejemplo con vector ASCENDENTE
    vector<int> asc{1, 3, 5, 7, 9, 11, 13, 15};
    int x1 = 7;
    int pos1 = BusquedaBinaria(x1, asc, 0, asc.size() - 1);

    if (pos1 != -1)
        cout << "ASC: El valor " << x1 << " está en la posición " << pos1 << endl;
    else
        cout << "ASC: El valor " << x1 << " NO está en el vector" << endl;

    // Ejemplo con vector DESCENDENTE
    vector<int> desc{20, 17, 14, 11, 8, 5, 2};
    int x2 = 11;
    int pos2 = BusquedaBinaria_INV(x2, desc, 0, desc.size() - 1);

    if (pos2 != -1)
        cout << "DESC: El valor " << x2 << " está en la posición " << pos2 << endl;
    else
        cout << "DESC: El valor " << x2 << " NO está en el vector" << endl;

    // Ejemplo con vector de CHARS ascendente
    vector<char> letras{'a', 'c', 'e', 'g', 'i'};
    char x3 = 'e';
    // Para char haríamos una función genérica (plantilla), pero aquí mostramos ints
    // Podrías convertir el char a int para buscarlo si solo tienes int
    vector<int> letras_int(letras.begin(), letras.end());
    int pos3 = BusquedaBinaria((int)x3, letras_int, 0, letras_int.size() - 1);

    if (pos3 != -1)
        cout << "ASC CHARS: El valor '" << x3 << "' está en la posición " << pos3 << endl;
    else
        cout << "ASC CHARS: El valor '" << x3 << "' NO está en el vector" << endl;

    return 0;
}