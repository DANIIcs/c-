/*
En un arbol binario es un arbol con nodo no mayor a 2 es decir que un nodo puede tener 0 1 o 2 hijos 

Tipos de abboles binarios:

- Arbol lleno que se caracteriza por tener todas sus ramas al mismo nivel y sus hijos completos
- Arbol Completo que se caracteriza por tener sus hijos completos pero no necesariamente al mismo nivel todos
- Arbol degenrado que tiene varios nodos pero solo de un solo gijo como si fuera una lista enlazada

*/
/*
Estructura de un arbol binario
struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};
*/

//Arbol binario de busqueda: es aquel que dado un nodo, todos los datos del subarbol estendistribudios de tal forma que para la izq estan los valores menores y los de la der mayores por ejemplo:
//         8
//        / \
//       3   10
//      / \    \
//     1   6    14
//        / \   /
//       4   7 13

#include <iostream>
using namespace std;
//Insertar un nodo en el arbol

//primero digitamos la estructura 
struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};

//Prototipos
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *,int);
Nodo *arbol= NULL;


int main(){
    menu();

    return 0;
}



//Funcion de menu
void menu(){
    int dato, opcion, contador=0;

    do{
        cout<<"\t. :MENU:."<<endl;
        cout<<"1. Insertar un nuevo nodo"<<endl;
        cout<<"2. Mostrar el arbol completo"<<endl;
        cout<<"3. Buscar un elemento en el arbol"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Opcion: ";cin>>opcion;

        switch (opcion){
            case 1: cout<<"Digita un nuemero: ";cin>>dato;
                    insertarNodo(arbol,dato);//Insertamos un nuevo nodo
                    cout<<"\n";
                    system("pause");
                    break;
            case 2: cout<<"\nMostrando el arbol completo:\n\n";
                    mostrarArbol(arbol,contador);
                    cout<<"\n";
                    system("pause");
                    break;
            case 3: cout<<"\nDigita el elemnto que quieras buscar:\n\n";cin>>dato;
                    if(busqueda(arbol,dato)==true){
                        cout<<"\nEl elemnto "<<dato<<" ha sido encontrado en el arbol\n";
                    }
                    else{
                        cout<<"\nElemnto no encontrado\n";
                    }
                    ;
                    cout<<"\n";
                    system("pause");
                    break;
        }
        system("cls");
    }while(opcion !=4 );
}

//Funcion para crear un Nodo
Nodo *crearNodo(int n){
    Nodo *nuevo_nodo=new Nodo();

    nuevo_nodo->dato=n;
    nuevo_nodo->der=NULL;
    nuevo_nodo->izq=NULL;

    return nuevo_nodo;
}

//Funcion para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol, int n){
    if(arbol==NULL){//si arbol esta vacio cramos un nuevo nodo
        Nodo *nuevo_nodo= crearNodo(n);
        arbol=nuevo_nodo;
    }
    else{//Si esque el arbol tiene un nodo o mas
        int valorRaiz = arbol->dato;//Obtenemos el valor de la raiz
        if( n< valorRaiz){//si el elemnto es menor a la raiz, insertamos en la izq
            insertarNodo(arbol->izq,n);
        }
        else{//si el elemnto es mayor a la raiz, insertamos en la der
            insertarNodo(arbol->der,n);
        }
    }
}

//Funcion para mostrar el arbol
void mostrarArbol(Nodo *arbol, int cont){
    if(arbol==NULL){//Si el arbol esta vacio
        return;
    }
    else{
        mostrarArbol(arbol->der, cont+1);
        for(int i=0; i<cont; i++){
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->izq, cont+1);
    }
}

//Funcion para buscar un elemento en el arbol
bool busqueda(Nodo *arbol, int n){
    if( arbol==NULL){//Sie el arbol esta vacio
        return false;
    }
    else if(arbol-> dato == n){//sie el nodo es igual al elemnto
        return true;
    }
    else if(n<arbol->dato){
        return busqueda(arbol->izq,n);
    }
    else{
        return busqueda(arbol->der,n);
    }  
}