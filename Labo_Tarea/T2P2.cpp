#include <iostream>

using namespace std;

void imprimirRecursivo(int n, int actual);

int main(void)
{
    int n = 0;
    cout << "Ingrese un numero: ";
    cin >> n;
    while (n < 1)
    {
        cout << "El numero debe ser mayor a 0" << endl;
        cout << "Ingrese un numero: ";
        cin >> n;
    }
    imprimirRecursivo(n, 1);
    return 0;
}

void imprimirRecursivo(int n, int actual)
{
    if (actual == n)
    {
        cout << actual << endl;
        return;
    }
    else
    {
        cout << actual << endl;
        imprimirRecursivo(n, actual + 1);
        cout << actual << endl;
        return;
    }
}