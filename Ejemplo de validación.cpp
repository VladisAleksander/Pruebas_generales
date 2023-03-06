int numero;
cout << "Escribe un número" << endl;
if( cin >> numero )
{ 
    if (numero%2 == 0){
        cout << "El número " << numero << " es par" << endl;
    } else {
        cout << "El número " << numero << " no es par" << endl;
    }
} else {
        cout << "Número inválido" << endl;
        cin.clear(); // Reseteamos el flag de error
}