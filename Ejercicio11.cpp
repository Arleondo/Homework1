#include <iostream>
using namespace std;

int main(){

    //Zona de variables , Pek=Peso en kilos y Alm=altura en metros
    float PeK;
    float Alm;
    
    //Zona de peticion de datos

    cout<<"Ingresar peso en Kilogramos: "<<endl;
    cin>>PeK;
    cout<<"Ahora ingresar altura en metros: "<<endl;
    cin>>Alm;

    //Zona de calculos

    int Bmi = PeK/(Alm*Alm);

    cout<<"\nBMI VALUES\n"<<"Underweight: less than 18.5\n"<<"Normal: between 18.5 and 24.9\n"<<"Overweight: between 25 and 29.9\n"<<"Obese: 30 or greater\n"<<endl;
    cout<<"Entonces tu BMI es "<<Bmi;
    
    if (Bmi<18.5)
        cout<<" Underweight(bajo peso)"<<endl;
    else if (Bmi>=18.5 && Bmi<=24.9)
        cout<<" Normal"<<endl;
    else if (Bmi>=25 && Bmi<=29.9)
        cout<<" Overweight (Sobrepeso)"<<endl;
    else if (Bmi>=30)
        cout<<" Obese (Obeso)"<<endl;
}