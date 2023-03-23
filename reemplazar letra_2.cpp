#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    char letra_antigua, letra_nueva;

    // Pedir al usuario su nombre
    printf("Ingresa tu nombre: \n");
    scanf("%s", nombre);

    // Pedir al usuario la letra a reemplazar y la nueva letra
    cout << "Ingresa la letra que deseas reemplazar: ";
    cin >> letra_antigua;
    cout << "Ingresa la nueva letra: ";
    cin >> letra_nueva;

    // Reemplazar la letra antigua por la nueva letra en el nombre
    for (int i = 0; i < nombre.length(); i++) {
        if (nombre[i] == letra_antigua) {
            nombre[i] = letra_nueva;
        }
    }

    // Mostrar el nombre actualizado
    cout << "Tu nombre actualizado es: " << nombre << endl;

    return 0;
}