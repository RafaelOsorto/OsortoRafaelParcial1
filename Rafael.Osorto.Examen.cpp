#include <iostream>

using namespace std;

int main()
{
    using namespace std;
char nombre [45];
int turno;
double extras,pcomis,comis;

void IngresoDatos(char nombre[],double&extras,int turno)
{
    cout<<"Nombre...:";
    cin.getline(nombre,45);
    cout<<"Extras...:";
    cin>>extras;
    return 0;
}
