#include <iostream>
using namespace std;

int main(){

    //Zona datos Cpg = Costo por galon del combus , Mpg = Millas por galon, Ppd= parking por dia
    // Pepd=peaje por dia 
    float miles;
    float Cpg;
    float Mpg;
    float Ppd;
    float Pepd;

    //Zona de pedir datos

    cout<<"Cuantas millas haces por dia : "<<endl;
    cin>>miles;
    cout<<"\nCuanto es el precio por galon de combustible : "<<endl;
    cin>>Cpg;
    cout<<"\nPromedio de millas por galon : "<<endl;
    cin>>Mpg;
    cout<<"\nCosto del parking por dia : "<<endl;
    cin>>Ppd;
    cout<<"\nCosto de peajes por dia : "<<endl;    
    cin>>Pepd;

    //Zona de datos adicionales

    //22 EUROS por 224 millas eso nos da que por milla usualmene cobran 1 euros por 10.18 millas 
    //22 euros son aprox. 87.30 soles 
    // La variable pro es el promedio
    int Pro = (miles/Mpg)*Cpg;

    cout<<"\nTu gasto total por dia trabajo con carro seria : S/."<<Pro+Ppd+Pepd<<endl;
    cout<<"\nY tendrias que cobrar como car-pool : S/."<<(miles/10.18)*3.98<<" por pasajero"<<endl;

}