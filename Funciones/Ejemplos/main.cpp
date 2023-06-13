//Para un conjunto de N personas indica que edad es la mayor y en que orden la ingreso.
//Suponiendo que no se repiten.

#include<iostream>
using namespace std;
#define M 10

const int N = 5;

int main()
{

    for(int i = 0; i < M; i++)
    {
        cout << i << endl ;
    }

    cout << "**********************************************" << endl;
    int j = 0;
    while(j < M)
    {
        cout << j << endl ;
        j++;
    }

    cout << "**********************************************" << endl;
    
    j = 0;
    do
    {
        cout << j << endl ;
        j++;
    }while(j < M);

    //Mayor de una lista de numeros
    int num = 0;
    while(num != -1)
    {
        cout << "Ingreso un numero, -1 para salir" << endl;
        cin >> num;

        cout << "El doble de " << num << " es " << 2*num << endl;
    }

    num = 0;
    for(int i=0; num != -1 ;i++)
    {
        cout << "Ingreso un numero, -1 para salir" << endl;
        cin >> num;
        cout << "El doble de " << num << " es " << 2*num << endl;
    }

    for(int i=0;  ;i++)
    {
        cout << "Ingreso un numero, -1 para salir" << endl;
        cin >> num;
        
        if(num == -1) break;

        cout << "El doble de " << num << " es " << 2*num << endl;
    }

    return 0;
}
