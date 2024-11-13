//Cadenas de carcateres

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
/*
int main(){
    char palabra[] = "Alejandro";
    char palabra2[] = {'A','l','e','j','a','n','d','r','o'};
    char nombre[20];

    cout<<"Digite su nombre: ";
    cin.getline(nombre,20,'\n');
    
    cout<<nombre<<endl;

    getch();
    return 0;
}

int main(){
    char palabra[] = "hola";
    int longitud=0;

    longitud = strlen(palabra);//sirve para saber el numeor de elemtos de una cadena

    cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;

    getch;
    return 0;
}

//saber si una cadena supero a 10 carcateres 
int main(){
    char nombre[50];

    cout <<"Digita su nombre: ";;
    cin.getline(nombre,50,'\n');

    if(strlen(nombre)>10){
        cout<<nombre<<endl;
    }
    else{
        cout<<"El nombre no supero los 10 carcateres";
    }
}

//la funcion strcpy copia el contenido de una cadena a otra
int main(){
    char nombre[]="Alejandro";
    char nombre2[20];

    strcpy(nombre2,nombre);//primero la cadena d caracteres vacio y luego a que quermeos copiar

    cout<<nombre2<<endl;
    getch();
    return 0;
}

//ejercicio
int main(){
    char frase[50];
    char frase2[50];

    cout<<"Dame una cadena d carcaterres: ";
    cin.getline(frase,50,'\n');
    strcpy(frase2,frase);

    cout<<frase2<<endl;

    getch();
    return 0;
}
//compara cadenas funcion strcmp()
int main() {
    char palabra[] = "hola";
    char palabra2[] = "hola";

    if (strcmp(palabra, palabra2) == 0) {
        cout << "Ambas palabras son iguales";
    }

    getch();
    return 0;
}

//ejercicio 
int main(){

    char palabra[40], palabra2[40];

    cout<<"Digite una palabra: ";
    cin.getline(palabra,30,'\n');
    cout<<"Digite otra palabra: ";
    cin.getline(palabra2,30,'\n');

    if (strcmp(palabra, palabra2) == 0) {
        cout << "Ambas palabras son iguales";
    }
    else if(strcmp(palabra, palabra2) > 0) {
        cout << "Palabra 1 es mayor a palabra 2 alfabeticamente";
    }
    else{
        cout << "Palabra 2 es mayor a palabra 1 alfabeticamente";    
    }

    getch();
    return 0;
}

//funcion strcat para juntar dos cadenas

int main(){
    char cad1[] = "Esto es una cadena";
    char cad2[] = "de ejemplo";
    char cad3[30];

    strcpy(cad3,cad1); //esto es una cadena
    strcat(cad3,cad2); //esto es una cadena de ejemplo

    cout<<cad3<<endl;

    getch();
    return 0;
}


int main(){
    char cad1[] = "Hola que tal ";
    char cad2[20];

    cout<<"Cual es tu nombre: ";
    cin.getline(cad2,20,'\n');

    strcat(cad1,cad2); //esto es una cadena de ejemplo

    cout<<cad1<<endl;

    getch();
    return 0;
}

//funcion strrev para invertir una cadena

int main(){
    char cad[] = "reconocer";

    strrev(cad);

    cout<<cad<<endl;

    getch();
    return 0;
}
*/
//ejercicio

int main(){
    char palabra[20];
    char palabra2[20];

    cout<<"Dame una palabra: ";
    cin.getline(palabra,20,'\n');

    strcpy(palabra2, palabra);
    strrev(palabra2);  // Invirtiendo a palabra2

    if (strcmp(palabra, palabra2) == 0) {
        cout << palabra << " es una palabra palindroma" <<endl;
    } else {
        cout << palabra << " NO es un palíndromo" <<endl;
    }

    return 0;
}
