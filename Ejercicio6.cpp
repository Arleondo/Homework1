#include <iostream>
using namespace std;

int main(){

    // PRIMERO QUE NADA la oracion o ejercicio no es claro ya que dice que los dos primeros saque si son factores
    // del segundo lo cual no queda claro si se refiere al segundo como los primeros siendo un cluster
    // o si tengo que sacar si el n1 y el n2 son factores del n2 asi que prosegire con el primer pensamiento
    // determinar si n1 y n2 son factores del n3

    //Zona de decaracion de datos
    int n1;
    int n2;
    int n3;

    //Zona de peticion de los datos
    cout<<"Ingresar primer numero: "<<endl;
    cin>>n1;
    cout<<"Ingresar segundo numero: "<<endl;
    cin>>n2;
    cout<<"Ingresar tercer numero: "<<endl;
    cin>>n3;

    //Zona donde se determina si n1 y n2 son factores de n3, usando la logica que los factores son numeros que dan un resultado
    // significa que si tengo N1 . x = n3 siendo x un real , asi que tenemos lo sigiente 
    if (n3%n1==0)
        cout<<"El numero "<<n1<<" es factor(divisor) de "<<n3<<endl;
    else
        cout<<"El numero "<<n1<<" no es factor(divisor) de "<<n3<<endl;
    
    if (n2%n1==0)
        cout<<"El numero "<<n2 <<" es factor(divisor) de "<<n3<<endl;
    else
        cout<<"El numero "<<n2 <<" no es factor(divisor) de "<<n3<<endl;

    return 0;
}