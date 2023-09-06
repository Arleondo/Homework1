#include <iostream>
using namespace std;

int main(){
    
    //Definiendo variables a usar
    int n1;
    int n2;

    //Zona para pedir los datos
    cout<<"Ingrese numero 1: "<<endl;
    cin>>n1;
    cout<<"Ingrese numero 2: "<<endl;
    cin>>n2;

    //Zona de comprobacion de odd or even(par,impar)
    if (n1%2==0)
        cout<<"El numero "<<n1<<" es par"<<endl;
    else
        cout<<"El numero "<<n1<<" es impar"<<endl;
    
    if (n2%2==0)
        cout<<"El numero "<<n2<<" es par"<<endl;
    else
        cout<<"El numero "<<n2<<" es impar"<<endl;

    //Haciendo la suma y comprobandola
    
    int n3=n1+n2;
    if (n3%2==0)
        cout<<"La suma de "<<n1<<" y "<<n2<<" es par"<<endl;
    else
        cout<<"La suma de "<<n1<<" y "<<n2<<" es impar"<<endl;

    return 0;
}