#include <iostream>
using namespace std;

int main(){

    //Definiendo los valores
    
    string oracion2 = "Y el menor numero es: ";
    string oracion1 = "El mayor numero es: ";
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    
    //Haciendo "leer" al programa los numeros los cuales pueden ser escritos directos en codigo o por teclado

    cout<<"Ingresar numero 1:"<<endl;
    cin>>numero1;
    
    cout<<"Ingresar numero 2:"<<endl;
    cin>>numero2;
    
    cout<<"Ingresar numero 3:"<<endl;
    cin>>numero3;
    
    cout<<"Ingresar numero 4:"<<endl;
    cin>>numero4;
    
    cout<<"Ingresar numero 5:"<<endl;
    cin>>numero5;

    //Zona de else if para identificar cual es el menor y mayor

    if (numero1>=numero2 && numero1>=numero3 && numero1>=numero4 && numero1>=numero5)
        cout<<oracion1<<numero1<<endl;

    else if (numero2>=numero1 && numero2>=numero3 && numero2>=numero4 && numero2>=numero5)
        cout<<oracion1<<numero2<<endl;
    
    else if (numero3>=numero2 && numero3>=numero1 && numero3>=numero4 && numero3>=numero5)
        cout<<oracion1<<numero3<<endl;

    else if (numero4>=numero2 && numero4>=numero3 && numero4>=numero1 && numero4>=numero5)
        cout<<oracion1<<numero4<<endl;

    else if (numero5>=numero2 && numero5>=numero3 && numero5>=numero4 && numero5>=numero1)
        cout<<oracion1<<numero5<<endl;

    if (numero1<=numero2 && numero1<=numero3 && numero1<=numero4 && numero1<=numero5)
        cout<<oracion2<<numero1<<endl;
    
    else if (numero2<=numero1 && numero2<=numero3 && numero2<=numero4 && numero2<=numero5)
        cout<<oracion2<<numero2<<endl;
    
    else if (numero3<=numero2 && numero3<=numero1 && numero3<=numero4 && numero3<=numero5)
        cout<<oracion2<<numero3<<endl;
    
    else if (numero4<=numero2 && numero4<=numero3 && numero4<=numero1 && numero4<=numero5)
        cout<<oracion2<<numero4<<endl;
    
    else if (numero5<=numero2 && numero5<=numero3 && numero5<=numero4 && numero5<=numero1)
        cout<<oracion2<<numero5<<endl;

    return 0;
}