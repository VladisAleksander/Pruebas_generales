#include <iostream>
#include<windows.h>
 
using namespace std;
 
void menu();
void submenuUno();
void submenuDos();
 
int main()
{
    char opcion;

    char nombre;

    cout << "==========Bienvenido==========\n" << endl;
    cout << "Por favor, introduza su nombre:\n" << endl;
    cin >> nombre >> endl;
    cout << "Bienvenido, %s.", nombre << endl;

    do {
        menu();
        cin >> opcion;
 
        switch(opcion)
        {
            case '1':
                system("cls");
                submenuUno();
                break;
 
            case '2':
                system("cls");
                submenuDos();
                break;
 
            case '3':
                cout << "\n\nFIN DEL PROGRAMA" << endl;
                break;
 
            default:
                system("cls");
                cout << "OPCION NO VALIDA, SELECCIONE UNA OPCION DEL 1 AL 3" << endl;
                break;
        }
 
    }while (opcion != '3');
 
    return 0;
}
 
void menu()
{
    
    cout << "\n  REALICE SU PEDIDO" << endl;
    cout << "==================" << endl;
    cout << "1 .- Plato principal" << endl;
    cout << "2 .- Postre" << endl;
    cout << "3 .- Salir" << endl;
    cout << "==================" << endl;
    cout << "Elije una opcion: ";
}
 
void submenuUno()
{
    char opcion;
 
    do {
        cout << "\n  QUE PLATO PRINCIPAL DESEA ORDENAR?" << endl;
        cout << "========================" << endl;
        cout << "1 .- Pasta" << endl;
        cout << "2 .- Sopa" << endl;
        cout << "3 .- Pozole" << endl;
        cout << "4 .- Menu Principal" << endl;
        cout << "=======================" << endl;
        cout << "Elije una opcion: ";
 
        cin >> opcion;
 
        switch(opcion)
        {
            case '1':
                system("cls");
                cout << "\nSe ha elegido la Pasta como platillo principal\n";
                submenuDos();
                break;
 
            case '2':
                system("cls");
                cout << "\nSe ha elegido la Sopa como platillo principal\n";
                submenuDos();
                break;

            case '3':
                system("cls");
                cout << "\nSe ha elegido el Pozole como platillo principal\n";
                submenuDos();
                break;
 
            case '4':
                system("cls");
                break;
 
            default:
                system("cls");
                cout << "OPCION NO VALIDA, SELECCIONE UNA OPCION DEL 1 AL 4" << endl;
                break;
        }
 
    } while (opcion != '4');
}
 
void submenuDos()
{
    char opcion;
 
    do {
        cout << "\n  ELIGE UN POSTRE" << endl;
        cout << "========================" << endl;
        cout << "1 .- Pay de queso" << endl;
        cout << "2 .- Capirotada" << endl;
        cout << "3 .- Pastel" << endl;
        cout << "4 .- Menu Principal" << endl;
        cout << "=======================" << endl;
        cout << "Elije una opcion: ";
 
        cin >> opcion;
 
        switch(opcion)
        {
            case '1':
                system("cls");
                cout << "\nSe ha elegido el Pay de queso\n";
                break;
 
            case '2':
                system("cls");
                cout << "\nSe ha elegido la Capirotada\n";
                break;
            
            case '3':
                system("cls");
                cout << "\nSe ha elegido la Capirotada\n";
                break;
 
            case '4':
                system("cls");
                break;
 
            default:
                system("cls");
                cout << "OPCION NO VALIDA, SELECCIONE UNA OPCION DEL 1 AL 4" << endl;
                break;
        }
 
    } while (opcion != '4');
}
