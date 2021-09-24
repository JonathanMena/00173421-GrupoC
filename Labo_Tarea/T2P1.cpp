#include <iostream>

using namespace std;

int verificar(int mayor, int menor);

int main(void)
{
    int mayor = 0, menor = 0;
    cout << "Ingrese el numero menor: ";
    cin >> menor;
    cout << "Ingrese el numero mayor: ";
    cin >> mayor;
    cout << "MCD: " << verificar(mayor, menor) << endl;
    return 0;
}

int verificar(int mayor, int menor)
{
    if ((mayor % menor) == 0 || menor == 0)
        return menor;
    else
    {
        int aux = 0;
        aux = mayor % menor;
        mayor = menor;
        menor = aux;
        return verificar(mayor, menor);
    }
}