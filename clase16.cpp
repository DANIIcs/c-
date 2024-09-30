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
    Nodo *padre; //Es para que cada nodo sepa quien es su padre
};

//Prototipos
void menu();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int ,Nodo *);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *,int);
Nodo *arbol= NULL;
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

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
        cout<<"4. Recorrer el arbol en preOrden"<<endl;
        cout<<"5. Recorrer el arbol en inOrden"<<endl;
        cout<<"6. Recorrer el arbol en inOrden"<<endl;
        cout<<"7. Eliminar un nodo del arbol"<<endl;        
        cout<<"8. Salir"<<endl;
        cout<<"Opcion: ";cin>>opcion;

        switch (opcion){
            case 1: cout<<"Digita un nuemero: ";cin>>dato;
                    insertarNodo(arbol,dato, NULL);//Insertamos un nuevo nodo
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
            case 4: cout<<"\nRecorrido en preOrden:\n\n";
                    preOrden(arbol);
                    cout<<"\n\n";
                    system("pause");
                    break;
            case 5: cout<<"\nRecorrido en inOrden:\n\n";
                    inOrden(arbol);
                    cout<<"\n\n";
                    system("pause");
                    break;
            case 6: cout<<"\nRecorrido en postOrden:\n\n";
                    postOrden(arbol);
                    cout<<"\n\n";
                    system("pause");
                    break;
            case 7: cout<<"\nDigite el nodo que quiera eliminar: ";cin>>dato;
                    eliminar(arbol,dato);
                    cout<<"\n";
                    system("pause");
                    break;
        }
        system("cls");
    }while(opcion !=8 );
}

//Funcion para crear un Nodo
Nodo *crearNodo(int n, Nodo *padre){
    Nodo *nuevo_nodo=new Nodo();

    nuevo_nodo->dato=n;
    nuevo_nodo->der=NULL;
    nuevo_nodo->izq=NULL;
    nuevo_nodo->padre=padre;

    return nuevo_nodo;
}

//Funcion para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol, int n, Nodo *padre){
    if(arbol==NULL){//si arbol esta vacio cramos un nuevo nodo
        Nodo *nuevo_nodo= crearNodo(n,padre);
        arbol=nuevo_nodo;
    }
    else{//Si esque el arbol tiene un nodo o mas
        int valorRaiz = arbol->dato;//Obtenemos el valor de la raiz
        if( n< valorRaiz){//si el elemnto es menor a la raiz, insertamos en la izq
            insertarNodo(arbol->izq, n, arbol);
        }
        else{//si el elemnto es mayor a la raiz, insertamos en la der
            insertarNodo(arbol->der, n, arbol);
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

// Para el recorrido preOrden se refiere a primero recorrer la raiz despues la parte izquiera del arbol y por ultimo el lado derecho
void preOrden(Nodo *arbol){
    if(arbol==NULL){ //si el arbol esta vacio
        return;
    }
    else{
        cout<<arbol->dato<<" - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

// Para el recorrido inOrden se refiere a primero recorrer la parte izquiera del arbol luego recorrer la raiz y por ultimo el lado derecho
void inOrden(Nodo *arbol){
    if(arbol==NULL){ //si el arbol esta vacio
        return;
    }
    else{
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}

// Para el recorrido postOrden se refiere a primero recorrer la parte izquiera del arbol luego recorrer la parte derecha y por ultimo la raiz
void postOrden(Nodo *arbol){
    if(arbol==NULL){ //si el arbol esta vacio
        return;
    }
    else{
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout<<arbol->dato<<" - ";

    }
}

//Eliminar un nodo del arbol
void eliminar(Nodo *arbol, int n){
    if(arbol==NULL){ //si el arbol esta vacio
        return;
    }
    else if(n < arbol->dato){ // si el valor es menor
        eliminar(arbol->izq, n); //busca por la izq
    }
    else if(n > arbol->dato){ // si el valor es mayor
        eliminar(arbol->der, n); //busca por la der
    }
    else{// si ya se econtro el valor
        eliminarNodo(arbol);
    }
}

//funcion para determinar el nodo mas izquierdo posible
Nodo *minimo(Nodo *arbol){
    if(arbol==NULL){ //si el arbol esta vacio
        return NULL;
    }
    if(arbol->izq){
        return minimo(arbol->izq); //Buscamos la parte mas izquiera posible
    }
    else{//Si no tiene hijo izq
        return arbol; //retornamos el mimso nodo
    }
}

//Funcion para reemplazar dos nodos
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
    if(arbol->padre){
        //arbol->padre hay que asignarle su nuevo hijo
        if( arbol->dato == arbol->padre->izq->dato){
            arbol->padre->izq = nuevoNodo;
        }
        else if(arbol->dato == arbol->padre->der->dato){
            arbol->padre->der = nuevoNodo;
        }
    }
    if(nuevoNodo){
        //le asignamos su nuevo padre
        nuevoNodo->padre = arbol->padre;
    }
}

//funcion para destruir un nodo
void destruirNodo(Nodo *nodo){
    nodo->izq=NULL;
    nodo->der=NULL;

    delete nodo;
}

//funcion para eliminar el nodo encontrado
void eliminarNodo(Nodo *nodoeliminar){
    if( nodoeliminar->izq && nodoeliminar->der){//Si el nodo tiene hijo izq y der
        Nodo *menor = minimo(nodoeliminar->der);
        nodoeliminar->dato = menor->dato;
        eliminarNodo(menor);
    }
    else if(nodoeliminar->izq){ // si tiene hijo izq
        reemplazar(nodoeliminar, nodoeliminar->izq);
        destruirNodo(nodoeliminar);
    }
    else if(nodoeliminar->der){ // si tiene hijo der
        reemplazar(nodoeliminar, nodoeliminar->der);
        destruirNodo(nodoeliminar);
    }
    else{ //No tiene hijos
        reemplazar(nodoeliminar,NULL);
        destruirNodo(nodoeliminar);
    }
}