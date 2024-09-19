#include <iostream>
using namespace std;

/*
//Ejercicio 1 Matriz
int main(){
    int numeros[100][100], filas, columnas;

    cout << "Digite el numero de filas: "; 
    cin >> filas;
    cout << "Digite el numero de columnas: "; 
    cin >> columnas;

    // Almacenamiento de la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }

    // Imprimiendo la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << numeros[i][j] << " "; // Agregamos espacio entre números
        }
        cout << "\n"; // Para cambiar de fila
    }

    return 0;
}

//Ejercicio 2
int main(){
    int numeros[3][3]={1,2,3,4,5,6,7,8,9};
    
    //mostrar matiz completa
    for (int i = 0; i < 3; i++){
        for(int j=0; j<3; j++){
            cout<<numeros[i][j];
        }
        cout << "\n";
    }
    //digaonal principal
    for (int i = 0; i < 3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                cout<<numeros[i][j]<<endl;
            }
        }
    }

    return 0;
}

//Ejercicio 3
int main(){
    int matriz1[2][2]={1,2,3,4};
    int matriz2[2][2];

    //Pasando el contenido de numero hacia matriz
    for (int i = 0; i <2; i++){
        for(int j=0; j<2; j++){
            matriz2[i][j]=matriz1[i][j];
        }
    }
    //mostrar la matriz
    for (int i = 0; i < 2; i++){
        for(int j=0; j<2; j++){
            cout<<matriz2[i][j];
        }
        cout << "\n";
    }

    return 0;
}

//Ejercicio 4
#include <stdlib.h>
#include <time.h>
int main(){
    int numeros[100][100], dato, nfilas, ncol;
    int numeros2[100][100];

    cout<<"Digite el numero de filas: ";cin>>nfilas;
    cout<<"Digite el numero de columnas: ";cin>>ncol;

    srand(time(NULL));//numero aleatroios
    //rellenar la matriz de numeros randoms
    for(int i=0; i<nfilas;i++){
        for (int j = 0; j < ncol; j++){
            dato=1+rand()%(100); //generar numeros aleatprios entre el 1 y 100
            numeros[i][j]=dato;
        }  
    }
    //Copiando el contenido a otra matriz
    for(int i=0; i<nfilas;i++){
        for (int j = 0; j < ncol; j++){
            numeros2[i][j]=numeros[i][j];
        }  
    }
    //imprimiendo en pantalla
    for(int i=0; i<nfilas;i++){
        for (int j = 0; j < ncol; j++){
            cout<<numeros2[i][j]<<" ";
        }
        cout << "\n";
    }
    return 0;
}

//Ejercicio 5
//matriz transpuesta
int main(){
    int numeros[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }
    
    cout<<"\n Matriz Original\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<numeros[i][j];
        }
        cout << "\n";
    }
    
    cout<<"\n Matriz transpuesta\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<numeros[j][i];
        }
        cout << "\n";
    }


    return 0;
}

//Ejercicio 6
int main(){
    int numeros[3][3]={1,2,3,4,5,6,7,8,9};
    int numeros2[3][3]={3,4,5,2,6,7,0,2,5};

    cout<<"Mostrando las dos matrices: \n";
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3 ; j++)
        {
            cout<<numeros[i][j]<<" ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3 ; j++)
        {
            cout<<numeros2[i][j]<<" ";
        }
        cout << "\n";
    }
    cout << "\n";
    cout<<"La suma de las dos matrices es: "<<endl;
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3 ; j++)
        {
            cout<<numeros[i][j]+numeros2[i][j]<<" ";
        }
        cout << "\n";
    }

    return 0;
}


//Ejercicio 7
int main() {
    int numeros[100][100], filas, columnas;
    char band = 'V'; // Inicia como 'V' asumiendo que es simétrica

    cout << "Digite el numero de filas: "; cin >> filas;
    cout << "Digite el numero de columnas: "; cin >> columnas;

    // Llenado de la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }

    // Verificar si la matriz es cuadrada
    if (filas == columnas) {
        // Comprobar si la matriz es simétrica
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                if (numeros[i][j] != numeros[j][i]) {
                    band = 'F'; // Si encuentra una diferencia, no es simétrica
                    break; // Salimos del bucle
                }
            }
            if (band == 'F') break; // Rompe el bucle exterior también
        }
    } else {
        band = 'F'; // Si no es cuadrada, no puede ser simétrica
    }

    // Resultado
    if (band == 'V') {
        cout << "La matriz es simétrica";
    } else {
        cout << "La matriz no es simétrica";
    }

    return 0;
}

*/
//Ejercicio 8
int main() {
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int c[3][3] = {0};  // Inicializamos la matriz resultado a ceros

    // Multiplicación de matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];  // Producto fila por columna
            }
        }
    }

    // Imprimir la matriz resultante
    cout << "La matriz resultante de la multiplicacion es: \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}