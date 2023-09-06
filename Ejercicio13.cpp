#include <iostream>
using namespace std;

int main(){

    //Zona de variables

    int age;

    //Zona de peticion de valores

    cout<<"Inngresar su edad: "<<endl;
    cin>>age;

    //Zona del calculo f significa formula , y el numero indica cual es

    float f1 = 222-age;
    float f2 = 208-0.7*age;
    float f3 = 207-0.7*age;
    float f4 = 211-0.64*age;

    //Zona que evalua el mayor
    if (f1>=f2 && f1>=f3 && f1>=f4)
        cout<<"\nEl mayor MHR es "<<f1<<endl;
    else if (f2>=f1 && f2>=f3 && f2>=f4)
        cout<<"\nEl mayor MHR es "<<f2<<endl;
    else if (f3>=f2 && f3>=f1 && f3>=f4)
        cout<<"\nEl mayor MHR es "<<f3<<endl;
    else if (f4>=f2 && f4>=f3 && f4>=f1)
        cout<<"\nEl mayor MHR es "<<f4<<endl;

    //Zona que evalua el menor
    if (f1<=f2 && f1<=f3 && f1<=f4)
        cout<<"\nY el menor MHR es "<<f1<<endl;
    else if (f2<=f1 && f2<=f3 && f2<=f4)
        cout<<"\nY el menor MHR es "<<f2<<endl;
    else if (f3<=f2 && f3<=f1 && f3<=f4)
        cout<<"\nY el menor MHR es "<<f3<<endl;
    else if (f4<=f2 && f4>=f3 && f4<=f1)
        cout<<"\nY el menor MHR es "<<f4<<endl;

}