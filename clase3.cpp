#include <iostream>
using namespace std;

/*
//Sintaxis del if
int main(){
    int numero, dato =5;

    cout<<"Digite un numero:";cin>>numero;
    if (numero == dato){
        cout<<"El numero es 5";
    }
    else{
        cout<<"El numero es diferente de 5";
    }

    return 0;
}

//Sintaxis del switch
int main(){
    int numero;

    cout<<"Digite un numero del 1 al 5: ";cin>>numero;

    switch (numero){
        case 1: cout<<"Es el numero 1";break;
        case 2: cout<<"Es el numero 2";break;
        case 3: cout<<"Es el numero 3";break;
        case 4: cout<<"Es el numero 4";break;
        case 5: cout<<"Es el numero 5";break;
        default: cout<<"No esta en el rango de 1 al 5";break;

    }
    return 0;
}

//Ejercicio 1
int main(){
    int n1,n2;

    cout<<"Digite dos numeros:";cin>>n1>>n2;

    if (n1==n2){
        cout<<"Ambos numero son iguales";
    }
    else if (n1>n2)
    {
    cout<<"El mayor es:"<<n1;
    }
    else{
        cout<<"El mayor es:"<<n2;
    }

    return 0;
}

//Ejercicio 2
int main(){
    int n1,n2,n3;

    cout<<"Digite 3 numeros:";cin>>n1>>n2>>n3;

    if ((n1>=n2) && (n1>=n3)){
        cout<<"El mayor es:"<<n1<<endl;
    }
    else if ((n2>=n1) && (n2>=n3)){
        cout<<"El mayor es:"<<n2<<endl;
    }
    else{
        cout<<"El mayor es:"<<n3<<endl;
    }

    return 0;
}
*/
//Ejercicio 3
int main(){
    int n1;

    cout<<"Digite un numero:";cin>>n1;

    if (n1%2==0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es impar";
    }

    return 0;
}