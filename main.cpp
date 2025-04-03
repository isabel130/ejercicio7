//
// Algortimo que determina si un año es bisiesto.
// Divisible entre 4, no divisible entre 100, a menos que sea divisible entre 400.

#include <iostream>
using namespace std;

int main() {

    int año;

    cout << " Ingrese el año: ";
    cin >> año;

    if (año % 400 == 0) {
        cout << "El año " << año << " es bisiesto.";

        if ((año % 4 == 0) and !(año % 100 == 0)) {
            cout << "El año " << año << " es bisiesto.";
        }
    }
    else {
        cout << "El año " << año << " no es bisiesto.";
    }
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.