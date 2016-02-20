
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int c=0;
int numero;
int suma;
int promedio=0;
int main()
{
       while (c<5)
{   c++;
    cout<<" Numero "<< c <<"..:";
    cin>> numero;

    if ((numero >=1) and (numero<=50))
    {
        cout<<"El num esta entre 1-50 -"<<numero<<"\n";
    }
    if ((numero>=51) and (numero<=100))
    {
        cout<<"El num esta entre 51-100 -""\n";
    }
    if((numero>100))
    {
        cout<<"El num es mayor a 100""\n";
    }
    suma= (suma + numero);
    cout<<"La suma de los num ingresados es"<<suma<< "\n";

    promedio= (suma/c);
    cout<<"El promedio de los num ingresados es"<<promedio<< "\n";

}
        system("PAUSE");
    return 0;
}
