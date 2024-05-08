#include <iostream>
using namespace std; 
int main ()
{
    char opcion, variable = 'x';
    do 
    {
        cout << "Menu"<< "\n";
        cout << "A carne asada"<<"\n";
        cout << "B pollo"<<"\n";
        cout << "C cerdo" <<"\n";
        cout << "Seleccione una opcion:"<< opcion <<"\n";
        cin >> opcion;
        cout << "opcion seleccionada"<< opcion << "\n";
    }
    while (opcion != variable );
    return 0;
}
