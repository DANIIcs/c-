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

//Ejercicio 4
int main(){
    float temperatura,mayor=0,menor=9999999;
    float sumaT,promT;

    for(int i=0; i<24; i+=4){
        cout<<"Digite la temperatura de la hora "<<i<<": ";
        cin>>temperatura;

        sumaT+=temperatura;

        if(temperatura>mayor){
            mayor=temperatura;
        }
        if(temperatura<menor){
            menor=temperatura;
        }
    }

    promT= sumaT/6;

    cout<<"La temperatura media del dia es:"<<promT<<endl;
    cout<<"La temperatura mas alta del dia es:"<<mayor<<endl;
    cout<<"La temperatura mas baja del dia es:"<<menor<<endl;

    return 0;
}

//Ejercicio 5
int main(){
    int numero, sum=0;

    do{
        cout<<"Digite un numero: ";cin>>numero;
        if(numero>0){
            sum+=numero;
    }
    } while ((numero!=0) && ((numero<20) || (numero>30)));


    cout<<"La suma de los numeros mayores a 0 es: "<<sum;

    getch();
    return 0;
}

//Ejercicio 6
int main(){
    int x, y, cal=1;

    do
    {
        cout<<"Digite el primer numero positivo: ";cin>>x;
    } while (x<0);

    do
    {
        cout<<"Digite el segundo numero positivo: ";cin>>y;
    } while (y<0);
    
    for(int i=1; i<=y;i++){
        cal*=x;
    }

    cout<<"x elavado a la y sale: "<<cal;
    return 0;
}


//Ejercicio 7
int main(){
    int n, suma=0;

    cout<<"Digite el numero de elemento: ";cin>>n;

    for( int i=1; i<=n; i++){
        suma+=i;
    }
    cout<<"La suma es:"<<suma<<endl;

    return 0;
}

//Ejercicio 8
int main(){
    int n, suma=0;

    cout<<"Digite el numero de elemento: ";cin>>n;

    for( int i=1; i<=(2*n-1); i+=2){
        suma+=i;
    }
    cout<<"La suma es:"<<suma<<endl;

    return 0;
}

//Ejercicio 9
int main(){
    int n, suma=1;

    cout<<"Digite el numero de elemento: ";cin>>n;

    for( int i=1; i<=n; i+=1){
        suma*=i;
    }
    cout<<"La suma es:"<<suma<<endl;

    return 0;
}


//Ejercicio 10
int main(){
    int n, fac=1,suma=0;

    cout<<"Digite el numero de elemento: ";cin>>n;

    for( int i=1; i<=n; i+=1){
        fac*=i;
        suma+=fac;
    }
    cout<<"La suma es:"<<suma<<endl;

    return 0;
}



//Ejercicio 11
#include <math.h>
int main(){
    int n, expo=1,suma=0;

    cout<<"Digite el numero de elemento: ";cin>>n;

    for( int i=1; i<=n; i+=1){
        expo=pow(2,i);
        suma+=expo;
    }
    cout<<"La suma es:"<<suma<<endl;

    return 0;
}

//Ejercicio 12
int main(){
    int n, sumap=0,suman=0,sumaT=0;

    cout<<"Digite el numero de elemento: ";cin>>n;

    for( int i=1; i<=n; i+=1){
        if(i%2==0){
            suman+=i;
        }
        else{
            sumap+=i;
        } 
    }
    sumaT=sumap-suman;

    cout<<"La suma es:"<<sumaT<<endl;

    return 0;
}
*/

//Ejercicio 13
int main(){
    int n, sumap=0,suman=0,sumaT=0;

    cout<<"Digite el numero de elemento: ";cin>>n;

    for( int i=1; i<=n; i+=1){
        if(i%2==0){
            suman+=i;
        }
        else{
            sumap+=i;
        } 
    }
    sumaT=sumap-suman;

    cout<<"La suma es:"<<sumaT<<endl;

    return 0;
}