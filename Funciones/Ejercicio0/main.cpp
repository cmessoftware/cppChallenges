//Para un conjunto de N personas indica que edad es la mayor y en que orden la ingreso.
//Suponiendo que no se repiten.

#include<iostream>
using namespace std;
#define M 10

const int N = 5;

// Entradas --> ! ALGO que hace algo ! --> Salida/s

//Declaraciones de funciones.
int maximo();
int minimo();
void dibujarTriangulo(int base);
void dibujarTrianguloIsoceles(int base);
void dibujarRombo(int diagonal);

int main()
{
    //invocacion de la funciones.
    // int max = maximo();
    // cout << "El mayor es " << max << endl;

    // int min = minimo();
    // cout << "El menor es " << min << endl;

    int base = 0;
    
    do
    {
        cout << "Ingrese un numero impar" << endl;
        cin >> base;
    }while(base%2 == 0);

    dibujarRombo(base);

    return 0;
}

// Efectuar un programa que solicite al usuario que ingrese la diagonal de un rombo (validar que el valor ingresado sea impar). Luego deberá dibujar dicho rombo en la pantalla. Ejemplo:
// Ingrese diagonal: 8
// Valor incorrecto. Ingrese diagonal: 7
void dibujarRombo(int diagonal)
{
    if(diagonal %2 == 0)
    {
        cout << "Ingrese un numero impar" << endl;
        return;
    }

    for(int i = 0; i <= diagonal; i++)
    {
        for(int j=0 ; j <= diagonal-i-1; j++)
        {
             cout << ' ';
        }  

        for(int k=1 ; k <= 2*i+1; k++)
        {
             cout << '*';
        }  
         cout << endl;  
    }


    for(int i = diagonal; i >=0; i--)
    {
        for(int j=0 ; j <= diagonal-i-1; j++)
        {
             cout << ' ';
        }  

        for(int k=1 ; k <= 2*i+1; k++)
        {
             cout << '*';
        }  
         cout << endl;  
    }

}


// Efectuar un programa que solicite al usuario que ingrese un número entero impar (validar el valor ingresado). El programa tendrá que dibujar en la pantalla un triángulo de asteriscos cuya base sea el valor ingresado. Ejemplo:
// Ingrese número: 8
// Número no válido. Ingrese número: 11

void dibujarTrianguloIsoceles(int base)
{
    if(base %2 == 0)
    {
        cout << "Ingrese un numero impar" << endl;
        return;
    }

    int desplazamiento = base/2; //como es un in trunca lo decimales.
    int d = desplazamiento;
    int veces = 0;

    for(int i = 0; i <= base; i++)
    {
        for(int j=0 ; j <= base-i-1; j++)
        {
             cout << ' ';
        }  

        for(int k=1 ; k <= 2*i+1; k++)
        {
             cout << '*';
        }  

         cout << endl;  
    }
}



void dibujarTriangulo(int base)
{

    for(int i = 1; i <= base;i++)
    {
        for(int j=0 ; j < i; j++)
        {
            cout << "*";            
        }  

        cout << endl;  
    }

}

//Implementacion de la funcion.
int maximo()
{
    cout << "Ingrese " <<  M << " numeros" << endl;

    int num=0;
    int max = -9999999;
    //Buscar el mayor de una lista.
    for(int i =0 ; i < M;i++)
    {
        cin >> num;

        if(num > max)  
            max = num;
        
    }

    return max;

}

int minimo()
{
    int num = 0;
    cout << "Ingrese " <<  M << " numeros" << endl;
    int min = 999999999;
    //Buscar el mayor de una lista.
    for(int i =0 ; i < M;i++)
    {
        cin >> num;

        if(num < min)  
            min = num;
        
    }
        
    return min;

}

