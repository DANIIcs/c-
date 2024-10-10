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

