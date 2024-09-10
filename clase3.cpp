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

//Ejercicio 4
int main(){
    int numero;

    cout<<"Digite un numero:";cin>>numero;

    if (numero==0){
        cout<<"El numero es 0";
    }
    else if(numero>0){
        cout<<"El numero es positivo";
    }
    else{
        cout<<"El numero es negativo";
    }

    return 0;
}


//Ejercicio 5
int main(){
    char letra;

    cout<<"Digite un caracter: ";cin>>letra;

    switch (letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minuscula";break;
        default : cout<<"Es una vocal mayuscula";break;

    }

    return 0;
}

//Ejercicio 6
int main(){
    char letra;

    cout<<"Digite un caracter: ";cin>>letra;

    switch (letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minuscula";break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"Es una vocal mayuscula";break;
        default: cout<<"No es una vocal";break;
    }

    return 0;
}


//Ejercicio 7
int main(){
    int edad;

    cout<<"Digite su edad: ";cin>>edad;

    if( (edad>=18) && (edad<=25) ){
        cout<<"SI edad pertenece al rango de 18 a 25";
    }
    else{
        cout<<"su edad no esta en el rango requerido";
    }

    return 0;
}


//Ejercicio 8
int main(){
    int a,b,c,x;

    cout<<"Digite 3 numeros:";cin>>a>>b>>c;
    cout<<"Digite un 4to numero:";cin>>x;

    if( (x==a) || (x==b) || (x==c) ){
        cout<<"El cuarto numero coincide con un numero anterior";
    }
    else{
        cout<<"El cuarto numero no coincide con ningun numero anterior";
    }

    return 0;
}

//Ejercicio 9
int main(){
    int numero,unidades,decenas,centenas,millar;

    cout<<"Digite un numero entero: ";cin>>numero;

    unidades = numero%10;
    numero /=10; // es igual a poner numero = numero/10
    decenas = numero%10;
    numero /=10;
    centenas = numero%10;
    numero /=10;
    millar = numero%10;
    numero /=10;

    switch (millar){
        case 1: cout<<"M";break;
        case 2: cout<<"MM";break;
        case 3: cout<<"MMM";break;
    }
    switch (centenas){
        case 1: cout<<"C";break;
        case 2: cout<<"CC";break;
        case 3: cout<<"CCC";break;
        case 4: cout<<"CD";break;
        case 5: cout<<"D";break;
        case 6: cout<<"DC";break;
        case 7: cout<<"DCC";break;
        case 8: cout<<"DCCC";break;
        case 9: cout<<"CM";break;
    }
    switch (decenas){
        case 1: cout<<"X";break;
        case 2: cout<<"XX";break;
        case 3: cout<<"XXX";break;
        case 4: cout<<"XL";break;
        case 5: cout<<"L";break;
        case 6: cout<<"LX";break;
        case 7: cout<<"LXX";break;
        case 8: cout<<"LXXX";break;
        case 9: cout<<"XC";break;
    }
    switch (unidades){
        case 1: cout<<"I";break;
        case 2: cout<<"II";break;
        case 3: cout<<"III";break;
        case 4: cout<<"IV";break;
        case 5: cout<<"V";break;
        case 6: cout<<"VI";break;
        case 7: cout<<"VII";break;
        case 8: cout<<"VII";break;
        case 9: cout<<"IX";break;
    }

    return 0;
}

//Ejercicio 10
int main(){
    int x;

    cout<<"Digite un numero del 1 al 12:";cin>>x;

    switch (x){
    case 1: cout<<"El mes es enero";break;
    case 2: cout<<"El mes es febrero";break;
    case 3: cout<<"El mes es marzo";break;
    case 4: cout<<"El mes es abril";break;
    case 5: cout<<"El mes es mayo";break;
    case 6: cout<<"El mes es junio";break;
    case 7: cout<<"El mes es julio";break;
    case 8: cout<<"El mes es agosto";break;
    case 9: cout<<"El mes es septiembre";break;
    case 10: cout<<"El mes es octubre";break;
    case 11: cout<<"El mes es noviembre";break;
    case 12: cout<<"El mes es diciembre";break;
    default: cout<<"no hay mes con ese numero";break;
    }

    return 0;
}

//EJercicio 11
int main(){
    int x=1000,opc;
    float extra,saldo=0,retiro;

    cout<<"Bienvenido al cajero automatico"<<endl;
    cout<<"1. Ingrese dinero a la cuenta"<<endl;
    cout<<"2. Retire dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: ";cin>>opc;

    switch(opc){
        case 1:
            cout<<"Digite la cantidad que quiera ingresar: ";cin>>extra;
            saldo= x + extra;
            cout<<"Dinero en cuenta "<<saldo;break;
        case 2:
            cout<<"Digite la cantidad que quiera retirar: ";cin>>retiro;
            if (retiro> x){
                cout<<"NO TIENE ESA CANTIDAD DE DINERO";
            }
            else{
                saldo=x-retiro;
                cout<<"Ha retiro exitosamente"<<endl;
                cout<<"Su saldo ahora es de: "<<saldo;
            }

        case 3:break;
    }

    return 0;
}
*/

//EJercicio 11
#include <math.h>
int main(){
    int opc, y;
    float x;

    cout<<"1. Cubo de un numero"<<endl;
    cout<<"2. Numero par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: ";cin>>opc;

    switch(opc){
        case 1:
            cout<<"Digite el numero: ";cin>>x;
            x= pow(x,3);
            cout<<"el numero elevado al cubo es: "<<x;break;
        case 2:
            cout<<"Digite el numero: ";cin>>y;
            if ((y%2)==0){
                cout<<"es numero par";
            }
            else{
            cout<<"es numero impar";
            }

        case 3:break;
    }

    return 0;
}