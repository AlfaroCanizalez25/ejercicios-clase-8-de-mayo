#include <iostream>
using namespace std;
int main (){
    cout << "ingresar numero entero: ";
    int n; 
    cin >> n; 
    int primo= 1; //hipotesis primo 1 
    for (int i=n;  i>=2; i= i-1)
    {
        int modulo= n% i;
        if (modulo ==0)
        {
            cout << n << "No es primo"<< "\n";
            primo = 0;
            break;
        }
        if (primo)
        {
            cout <<n << "Es primo";
        }
    }
}