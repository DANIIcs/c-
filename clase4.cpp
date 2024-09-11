#include <iostream>
#include <conio.h>//Libreria para que el ejectuable se cierre con una tecla 
using namespace std;

/*
//sintaxis while
int main(){
    int i;

    i=1;

    while(i<=10){
        cout<<i<<endl;
        i+=1; // tambien se puede escribir como i++;
    }
    getch();//comando de conio para que espere a q yo ejectue una tecla apar cerrar el prohgrama
    return 0;
}


//sintaxis do while
int main(){
    int i;

    i=1;

    do{
        cout<<i<<endl;
        i++;
    }while (i<=10);

    return 0;
}

//sintaxis de for
int main(){
    int i;

    for( i=10; i>=1; i--){
        cout<<i<<endl;
    }

    getch();
    return 0;
}

//Ejercicio 1
int main(){
    int numero;
    
    do{
        cout<<"Digite un numero: ";cin>>numero;
    }while ((numero<1) || (numero>10));//si esque el numero es menor a 1 o igual a 10 el do while se seguira ejecutando

    for(int i=1; i<=20; i++){
        cout<<numero<<"*"<<i<<" = "<<numero*i<<endl;
    }
    getch();    
    return 0;
}

//Ejercicio 2
int main(){
    int numero,cont=0;

    do{
        cout<<"Digita un numero: ";cin>>numero;
        
        if(numero>0){
            cont++;
        }

    }while(numero!=0);

    cout<<"EL numero de numeros mayores a 0 es: "<<cont<<endl;

    return 0;
}

//Ejercicio 3
int main(){
    int cuadrado=0, suma=0;

    for(int i=1; i<=10; i++){
        cuadrado=i*i;
        suma+=cuadrado;
    }
    cout<<"La suma de los 10 primeros cuadrados sera:"<<suma<<endl;

    return 0;
}
*/

//Ejercicio 4
int main(){
    float temperatura,mayor=0,menor=9999999;
    float sumaT;

    for(int i=0, i<24, i+=4){
        cout>>"Digite la temperatura de la hora"<<i<<"i"<<endl;
        cin>>temperatura;

        sumaT+=temperatura;
    }



    return 0;
}
