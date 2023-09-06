#include <iostream>
#include <list>
using namespace std;

int main(){

    //Zona de definicion de variables Lenght of the cube
    list <int> listaloc{0,1,2,3,4,5};
    
    //Zona de tabla

    cout<<"Face lenght\tSurface area\tVolume"<<endl;
    cout<<"of cube (cm)\tof cube(cm^2)\tof cube(cm^3)"<<endl;

    //Zona de operandos

    for (auto x : listaloc)
        cout<<x<<"\t\t"<<(x*x)*6<<"\t\t"<<x*x*x<<endl;
        
    return 0;
}