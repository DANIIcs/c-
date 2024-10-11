/* 

PILAS 

una pila es una estructura de datos de entradas ordenadas tales que solo se pueden introducir y eliminar por un extremo, llamdo cima
tambien se le conoce como el que entra ultimo sale primero como si fuera una pila de platos

- Las operaciones comunes son insertar(push) y quitar(pop)

insertar añade un elemento a la cima de la pila
quitar elimina o saca un elemtno de la pila

una pila constara de la siguiente estructura

dato q sera lo q almacena y un puntero que appuntara hacia abajo es decir hacia el siguiente valor

a esa estructura le llamaremos NODO

struc Nodo{
    int dato;
    Nodo *siguiente;
};

*/

/*

Insertar elemtnos en la pila

para insertar elemtnos en la pila, solo hay que seguir 4 pasos:

1 crear el espacio en memoria para almacenar un nodo
2 cargar el valor dentro del nodo(dato)
3 cargar el puntero pila dento del nodo(*siguiente)
4 asignar el nuevo nodo a pila

*/
/*

estructura principal

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&, int &);

int main(){
    Nodo *pila=NULL;
    int dato;

    cout<<"Digite un numero: ";cin>>dato;
    agregarPila(pila,dato);

    cout<<"\nDigite otro numero: ";cin>>dato;
    agregarPila(pila,dato);

    cout<<"\nSacando los elemntos de la pila: ";
    while(pila != NULL){ //mientras no sea el final de la pila
        sacarPila(pila, dato);
        if(pila!=NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<" . ";
        }
    }

    return 0;
}

void agregarPila(Nodo *&pila,int n){
    Nodo *nuevo_nodo = new Nodo();  //crear el espacio en memoraria 
    nuevo_nodo->dato =n; // cargar el valor dento del nodo(dato)
    nuevo_nodo->siguiente = pila; //cargar el puntero pela dento del nodo(sigueinte)
    pila =nuevo_nodo; // asignar el nuevo nodo a pila

    cout<<"\n Elemeto "<<n<<" agregado \n";
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila; //creamos un nuevo nodo aux que nos ayudara a elimnar el nodo sin problemas
    n = aux ->dato; // el aux hacemos que apunte a la pila , es decir al primer valor
    pila= aux->siguiente; //la pila hacemos que apunte al siguiente nodo para que el nodo se pueda eliinar sin ningun problema
    delete aux; //eliminamos el nodo
}
*/

//ejercicio 1: HAcer un programa para agregar numeros enteros a una pila 
// hasta que el usuario lo decida, despues mostrar todos los numeros introducidos en la pila



#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&, int &);


int main(){
    Nodo *pila =NULL;
    int dato;
    char rpt;

    do{
        cout<<"Digite un numero: ";
        cin>>dato;
        agregarPila(pila, dato);

        cout<<"Quieres agregar otro elemento a la pila(s/n): ";
        cin>>rpt;
    }while((rpt == 'S') || (rpt == 's'));

    cout<<"\nSacando todos los elemtno de la pila: ";
    while(pila != NULL){ //mientras no sea el final de la pila
        sacarPila(pila, dato);
        if(pila!=NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<" . ";
        }
    }


    return 0;
}



void agregarPila(Nodo *&pila,int n){
    Nodo *nuevo_nodo = new Nodo();  //crear el espacio en memoraria 
    nuevo_nodo->dato =n; // cargar el valor dento del nodo(dato)
    nuevo_nodo->siguiente = pila; //cargar el puntero pela dento del nodo(sigueinte)
    pila =nuevo_nodo; // asignar el nuevo nodo a pila

    cout<<"\n Elemeto "<<n<<" agregado \n";
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila; //creamos un nuevo nodo aux que nos ayudara a elimnar el nodo sin problemas
    n = aux ->dato; // el aux hacemos que apunte a la pila , es decir al primer valor
    pila= aux->siguiente; //la pila hacemos que apunte al siguiente nodo para que el nodo se pueda eliinar sin ningun problema
    delete aux; //eliminamos el nodo
}