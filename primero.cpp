//Para un conjunto de N personas indica que edad es la mayor y en que orden la ingreso.
//Suponiendo que no se repiten.

#include<iostream>
using namespace std;

const int N = 5;

int main()
{
    int a,n = 0, pos =0,mayor = 0;

    
    while(n < N)
    {
        cout << "Ingrese una edad";
        cin >> a;

        if(a > mayor)
        {
            mayor = a;
            pos = n+1;
        }

        n++;
    }

    cout << "La mayor edad es: " << mayor << endl;
    cout << "Posicion: " << pos << endl;

    return 0;
}
