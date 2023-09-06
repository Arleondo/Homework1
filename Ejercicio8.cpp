#include <iostream>
using namespace std;

int main(){

    //Aca dice que hagamos diferentes pruebas lo cual hace que necesite un repetidor

    //Zona de variables
    char pal1;

    //Zona para pedir que se evaluara

    cout<<"Ingresar simbolo, numero o letra(Solo 1 a la vez): "<<endl;
    cin>>pal1;
    cout<<"Y aqui el valor de ese caracter y los siguientes 10 caracteres en la lista ASCII\n"<<endl;
    int num1= int(pal1);
    
    //El coso para repetir ya que dice que lo haga con varios simbolos lo cual lo interprete
    //como el hacerlo varias veces una misma vez

for (int x=1;x<=10;x++)
{
    cout<<"\nEl valor ASCII es = "<<num1<<endl;

    cout<<"Y el caracter es este = "<<char(num1)<<endl;

    num1 = num1+1;     
     
}
}