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


//Correspondencia entre arrays y punteros
int main(){
    int numeros[]={1,2,3,4,5};
    int *dir_num;

    dir_num=&numeros[0]; //igualamos la direcion de numeros a la primera posicion de numeros
    
    for(int i=0; i<5; i++){
        cout<<"Elemento del vector ["<<i<<"]: "<<*dir_num++<<endl;//ponemos el *dir_num para que me ponga los valores del array y el ++para que me imprima de todos lo que haya 
    }
    for(int i=0; i<5; i++){
        cout<<"Posicion de memoria "<<numeros[i]<<" es: "<<dir_num++<<endl;//ponemos el dir_num sin el puntero para que me ponga las posiciones de memoria del array y el ++para que me imprima de todos lo que haya 
    }


    getch();
    return 0;
}

//Ejercicio 3
int main(){
    int numeros[10], *dir_num;

    //para digitar los numeros del arreglo
    for ( int i=0; i<10; i++){
        cout<<"Digite un numero["<<i<<"]: ";cin>>numeros[i];
    }

    dir_num =numeros; //posicion de memoria comienza numeros

    //para saber si es par o no los numeros
    for (int i = 0; i < 10; i++)
    {
        if(*dir_num%2==0){
            cout<<"El numero "<<*dir_num<<" es par"<<endl;
            cout<<"Posicion del numero es: "<<dir_num<<endl;
        }
        dir_num++;
    }
    

    getch();
    return 0;
}

//Ejercicio 4
int main(){
    int nElementos, numeros[100], *dir_num, menor=999999;

    cout<<"Digite el numero de elementos: ";cin>>nElementos;

    //para digitar los numeros del arreglo
    for ( int i=0; i<nElementos; i++){
        cout<<"Digite un numero["<<i<<"]: ";cin>>numeros[i];
    }

    dir_num = numeros; //posicion de memoria comienza numeros

    //para saber si es par o no los numeros
    for (int i = 0; i < nElementos; i++)
    {
        if(*dir_num<menor){
            menor=*dir_num;
        }
        dir_num++;
    }

    cout<<"El menor elemento es: "<<menor<<endl;

    getch();
    return 0;
}

----------------------------------------------------------------------------------------------

//Asignacion dinamica de arreglos
// es cuando utilizamos el espacio necesario para el programa

// new: reserva el numero de bytes solicitados por la declaracion
// delete: libera un bloque de bytes reservados con anterioridad

//ejemplo: pedir al usuario n claificaiones y almacenar en un arreglo dinamico
#include <stdlib.h>//libreria para new y delete
// Prototipo de funcion 
void pedirNotas();
void mostrarNotas();

int numCalif, *calif;


int main(){
    pedirNotas();
    mostrarNotas();

    delete[] calif; //para liberar el espacio utilizado

    getch();
    return 0;
}

void pedirNotas(){
    cout<<"Digitita el numero de calificaciones: ";cin>>numCalif;

    calif= new int[numCalif]; //Crear el arreglo

    for(int i=0;i<numCalif;i++){
        cout<<"Ingresa una nota: ";cin>>calif[i];
    }

}

void mostrarNotas(){
    cout<<"\nLas notas son las siguientes:\n";
    for(int i=0; i<numCalif;i++){
        cout<<calif[i]<<endl;
    }
}




//Transmision de Direcciones
// ejemplo intercambiar el valor de 2 varibales
void intercambio(float *,float *);//aqui indicamos que estamos guardadnod dos direciones de memoria de tipo flotante

int main(){
    float num1 = 20.8, num2 = 6.78;

    cout<<"El primer numero: "<<num1<<endl;
    cout<<"El segundo numero: "<<num2<<endl;

    intercambio(&num1,&num2);//lamada a la funcion intercambio
    cout<<"\n\nDespues del intercambio \n\n";
    cout<<"El nuevo valor de num1: "<<num1<<endl;
    cout<<"El nuevo valor de num2: "<<num2<<endl;

    getch();
    return 0;
}

void intercambio(float *dirNm1, float *dirNm2){
    float aux;//variable auxiliar para poder intercambiar

//intercambiar los valores de las varibales
    aux= *dirNm1;
    *dirNm1= *dirNm2;
    *dirNm2= aux;

}

//Transmision de arreglos
// ejemplo hallar el maximo elemento de un arreglo

int hallarMax(int *, int);

int main(){
    const int nElementos = 5;
    int numeros[nElementos]={3,5,8,2,1};

    cout<<"El mayor elemento es: "<<hallarMax(numeros,nElementos);

    getch();
    return 0;
}

int hallarMax(int *dirVec, int nElementos){
    int max =0;

    for(int i=0; i<nElementos; i++){
        if(*(dirVec+i)>max){
            max = *(dirVec+i);
        }
    }
    return max;
}

//ejercicio 5 Ordenar elementos de yn arreglo con punteros
#include <stdlib.h>

void pedirDatos();
void ordenarArray(int *, int);
void mostrarArray(int *, int); //el pimer paramaero sera para  pasarle la posicion del array dinamico, y  otro para enviarle el numero de elemntos del arreglo

int nElementos, *elemento;

int main(){
    pedirDatos();
    ordenarArray(elemento,nElementos);
    mostrarArray(elemento,nElementos);

    delete[] elemento;

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del Arreglo: ";cin>>nElementos;

    elemento = new int[nElementos];
    for(int i=0; i<nElementos; i++){
        cout<<"Digite un numero["<<i<<"]: ";
        cin>>*(elemento+i); //es lo mimso que poner elemento[i] pero esto es con punteros
    }

}

void ordenarArray(int *elemento, int nElementos){
    int aux;
    //metodo burble sort 
    for(int i=0; i<nElementos; i++){
        for(int j=0; j<nElementos-1;j++){
            if(*(elemento+j) > *(elemento+j+1)){
                aux= *(elemento+j);
                *(elemento+j)= *(elemento+j+1);
                *(elemento+j+1)= aux;
            }
        }
    }
}

void mostrarArray(int *elemento, int nElementos){

    cout<<"\n\nMostrando arreglo ordenado: ";
    for(int i=0; i<nElementos; i++){
        cout<<*(elemento+i)<<" ";
    }
}


// ejercicio 7 pedir su nombre al usuario y devolver el numero de vocales que hay
#include <stdlib.h>
#include <cstring> // Para strupr()

void pedirDatos();
int contandoVocales(char *);

char nombreUsuario[30];

int main(){

    pedirDatos();
    cout<<"El numero de vocales del nombre es: "<<contandoVocales(nombreUsuario)<<endl;
// nombreUsuario = &nombreUsuario[0]
    getch();
    return 0;
}

void pedirDatos(){

    cout<<"Digite su nombre: ";
    cin.getline(nombreUsuario,30);

    strupr(nombreUsuario);//transformando a a mayuscula el nombre
}

int contandoVocales(char *nombre){
    int cont=0;

    while(*nombre){//mientras nombre no sea nulo '\0' 
        switch (*nombre){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': cont++;
        }
        nombre ++;
    }
    return cont; 
}

//ejercicio 8 cpntar cada vocal en una palabra
#include <cstring>

void pedirDatos();
void contarVocales(char*);
char palabraUsuario[50];

int main(){

    pedirDatos();
    contarVocales(palabraUsuario);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite una plabra o frase: ";
    cin.getline(palabraUsuario,50);

    strupr(palabraUsuario);
}

void contarVocales(char *palabra){
    int contA=0, contE=0, contI=0, contO=0, contU=0;

    while(*palabra){//mientras palabra no sea nulo
        switch(*palabra){
            case 'A': contA++;break;
            case 'E': contE++;break;
            case 'I': contI++;break;
            case 'O': contO++;break;
            case 'U': contU++;break;
        }
        palabra++;
    }

    cout<<"\n\nNumero de veces de la vocal A: "<<contA<<endl;
    cout<<"Numero de veces de la vocal E: "<<contE<<endl;
    cout<<"Numero de veces de la vocal I: "<<contI<<endl;
    cout<<"Numero de veces de la vocal O: "<<contO<<endl;
    cout<<"Numero de veces de la vocal U: "<<contU<<endl;

}
*/

//MAtriz dinamica

//ejemplo rellenar una matriz nxm y mostrar su coontenido
#include <stdlib.h>
void pedirDatos();
void mostrarMatriz(int **,int,int);

int **puntero_matriz, nfilas, ncol;

int main(){
    pedirDatos();
    mostrarMatriz(puntero_matriz,nfilas,ncol);

    for(int i=0;i<nfilas;i++){
        delete[] puntero_matriz[i];
    }

    delete[] puntero_matriz;

    getch();
    return 0;
}

void pedirDatos(){

    cout<<"Digite el numero de filas: ";cin>>nfilas;
    cout<<"Digite el numero de columnas: ";cin>>ncol;

    puntero_matriz=new int*[nfilas];
    for(int i=0; i<nfilas; i++){
        puntero_matriz[i] = new int[ncol];
    }

    cout<<"\nDigitando elementos de la matriz: \n";
    for (int i=0; i<nfilas;i++){
        for(int j=0; j<ncol; j++){
            cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz+i)+j);
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nfilas, int ncol){
    cout<<"\n\n Imprimiendo mtriz: \n";
    for (int i=0; i<nfilas;i++){
        for(int j=0; j<ncol; j++){
            cout<<*(*(puntero_matriz+i)+j);
        }
        cout<<"\n";
    }
}