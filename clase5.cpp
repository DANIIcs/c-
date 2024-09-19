#include <iostream>
using namespace std;

/*
//Ejercicio 1
int main(){
    int numeros[] = {1,2,3,4,5};
    int suma =0;

    for(int i=0; i<=4;i++){
        suma+=numeros[i];
    }

    cout<<"La suma de los elementos del vector es "<<suma;

    return 0;
}

//Ejercicio 2
int main(){
    int numeros[5] = {1,2,3,4,5};
    int multi =1;

    for(int i=0; i<=4;i++){
        multi*=numeros[i];
    }

    cout<<"La multiplicacion de los elementos del vector es "<<multi;

    return 0;
}

//Ejercicio 3
int main(){
    int numeros[100], n;

    cout<<"Digite el numero de elentos del arreglo: ";cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Digite un numero: ";cin>>numeros[i];//guadando todos los elemntos del vector

    }
    //ahora mostraremos los elemntos con sus indices

    for(int i=0; i<n; i++){
        cout<<i<<" -> "<<numeros[i]<<endl;//guadando todos los elemntos del vector
    }
    return 0;
}

//Ejercicio 4
int main(){
    int numeros[] = {1,2,3,4,5};

    for(int i=5; i>=0;i--){
    }
    cout<<"el vector inverso es"<<numeros[i]<<endl;

    return 0;
}


//Ejercicio 5
int main(){
    int numeros[100], n ,mayor=-90000;

    cout<<"Digite el numero de elemntos del array: ";cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<". Digite un numero: ";cin>>numeros[i];

        if(numeros[i]>mayor){
            mayor=numeros[i];
        }
    }

    cout<<"El mayor elemnto del vector es "<<mayor<<endl;
    
    return 0;
}


//Ejercicio 6
int main(){
    int numeros[100], n , x=0, mayor=0;

    cout<<"Digite el numero de elemntos del array: ";cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<". Digite un numero: ";cin>>numeros[i];
    }

    for (int i = 0; i < n; i++){
        x+=numeros[i];

        if(numeros[i]>mayor){
            mayor=numeros[i];
        }
    }
    
    if (mayor == x-mayor)
    {
        cout<<"El numero "<<mayor<<" equivale a suma de los demas";
    }
    else {
        cout<<"No se encontro ningun numero que de la suma de los demas elemntos";
    }

    return 0;
}


//Ejercicio 7
int main(){
    char letras1[]={'a','b','c','d','e'};
    char letras2[]={'f','g','h','i','j'};
    char letras3[10];

    for(int i=0; i<5; i++){
        letras3[i]=letras1[i];
    }
    for(int i=5; i<10; i++){
        letras3[i]=letras2[i-5];
    }

    for(int i=0; i<10;i++){
        cout<<letras3[i]<<endl;
    }
    return 0;
}
*/

//Ejercicio 8
int main(){
    int numeros[5] = {1,2,3,4,5};

    for(int i=0; i<5;i++){
        cout<<2*numeros[i]<<endl;
    }
    return 0;
}