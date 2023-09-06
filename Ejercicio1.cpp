#include <iostream>
using namespace std;

int main(){

    int ra;
    cout<<"Escriba el radio de la circunferencia(m): "<<endl;
    cin>>ra;

    cout<<"El diametro de la circunferencia es: "<<(ra*2)<<"m"<<endl;
    cout<<"\nY el perimetro seria: "<<3.14159*(ra*2)<<"m"<<endl;
    cout<<"\nY el area seria: "<<3.14159*(ra*ra)<<"m"<<endl;
    return 0;
}