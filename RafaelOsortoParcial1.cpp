#include <iostream>

using namespace std;

char nombre[40];
int turno;
double hor, hEx;
double saldo;

void ingresoDeDatos()
{
    cout<<"Ingresar el nombre"<<endl;
         cin.getline(nombre, 40);

    do{
        cout<<"Ingrese el urno"<<endl;
        cin>> turno;
    }while(!((turno>=1) && (turno<=4)));

    cout<<"Horas Trabajadas?"<<endl;
    cin>>hor;

    cout<<"Horas Extra trabajadas?"<<endl;
    cin>>hEx;

}

double calcularPago(int turno, double hor, double hEx)
{
    if(turno == 1 / turno == 3){
        return saldo = (200 * hor) + (250 * hEx);
    }
    else if( turno == 1 / turno ==4){
        return saldo = (300 * hor) + (350 * hEx);
    }
}

double calcular(double hor, double hEx)
{

}
int main()
{
    ingresoDeDatos();
    calcular(hor, hEx);
    cout<< saldo <<endl;

    return 0;

}

