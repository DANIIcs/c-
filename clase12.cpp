/*
punteros - declaracion de punterios

&n= la direccion de n
*n = la variable cuya direcion esta almacewnada en n

*/

#include <iostream>
#include <conio.h>
using namespace std;

/*Declaracion de punteros
int main(){
    int num, *dir_num;

    num = 20;
    dir_num = &num;

    cout<<"Nummero: "<<*dir_num<<endl;
    cout<<"La direccion de memoria: "<<dir_num<<endl;

    getch();
    return 0;
}

//ejercicio 1
int main(){
    int numero, *dir_num;

    cout<<"Digite un numero: ";cin>>numero;
    dir_num = &numero; //guardando la posicion de memoria
    if(*dir_num%2==0){
        cout<<"El numero "<<*dir_num<<" es par"<<endl;
        cout<<"Posicion: "<<dir_num<<endl;
    }
    else{
        cout<<"El numero "<<*dir_num<<" es impar"<<endl;
        cout<<"Posicion: "<<dir_num<<endl;
    }


    return 0;
}

//ejercicio 2
int main(){
    int numero, *dir_num, cont=0;

    cout<<"Digite un numero: ";cin>>numero;
    dir_num = &numero;
    //dterminar si el numero es primo
    for(int i=1; i<*dir_num; i++){
        if (*dir_num%i==0){
            cont++;
        }
    }

    if(cont>2){
        cout<<"El numero "<<*dir_num<<" no es primo"<<endl;
        cout<<"Posicion: "<<dir_num<<endl;
    }
    else{
        cout<<"El numero "<<*dir_num<<" es primo"<<endl;
        cout<<"Posicion: "<<dir_num<<endl;
    }

    return 0;
}

*/
//Correspondencia entre arrays y punteros
int main(){
    int numeros[]={1,2,3,4,5};
    int *dir_num;

    dir_num=&numeros[0]; //igualamos la direcion de numeros a la primera posicion de numeros
    


    getch();
    return 0;
}