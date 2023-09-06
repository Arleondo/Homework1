#include <iostream>
using namespace std;

int main(){

    //Zona de declaracion de variables

    int num1;
    int rem;
    //Aca se pide el numero

    cout<<"Ingresar un numero de 4 digitos: "<<endl;
    cin>>num1;

    //Aca es donde la magia pasa en s lo que hago es dividir el ultimo, y sacar en base de eso el remainder
    //para luego dividirlo

    int d1 = num1/1000;
    int d2 = (num1%1000)/100;
    int d3 = (num1%100)/10;
    int d4 = (num1%10);
    cout<<d4<<"  "<<d3<<"  "<<d2<<"  "<<d1<<endl;
}