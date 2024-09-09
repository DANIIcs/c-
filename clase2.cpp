#include <iostream>
using namespace std;

/*
int main(){
    float a,b, resultado = 0;

    cout<<"Digita el valor de a:"; cin>>a;
    cout<<"Digita el valor de b:"; cin>>b;

    resultado= (a/b) +1;
    cout.precision(2);
    cout<<"El resultado es:"<<resultado<<endl;
    return 0;
}

//Ejercicio 2
int main(){
    float a,b,c,d, resultado = 0;

    cout<<"Digita el valor de a:"; cin>>a;
    cout<<"Digita el valor de b:"; cin>>b;
    cout<<"Digita el valor de c:"; cin>>c;
    cout<<"Digita el valor de d:"; cin>>d;

    resultado= (a+b)/(c+d);
    cout.precision(2);
    cout<<"El resultado es:"<<resultado<<endl;
    return 0;
}

//Ejercicio 3
int main(){
    float a,b,c,d,e,f, resultado = 0;

    cout<<"Digita el valor de a:"; cin>>a;
    cout<<"Digita el valor de b:"; cin>>b;
    cout<<"Digita el valor de c:"; cin>>c;
    cout<<"Digita el valor de d:"; cin>>d;
    cout<<"Digita el valor de e:"; cin>>e;
    cout<<"Digita el valor de f:"; cin>>f;

    resultado= (a+(b/c))/(d+(e/f));
    cout.precision(2);
    cout<<"El resultado es:"<<resultado<<endl;
    return 0;
}

//Ejercicio 4
int main(){
    float a,b,c,d, resultado = 0;

    cout<<"Digita el valor de a:"; cin>>a;
    cout<<"Digita el valor de b:"; cin>>b;
    cout<<"Digita el valor de c:"; cin>>c;
    cout<<"Digita el valor de d:"; cin>>d;

    resultado= a+(b/(c-d));
    cout.precision(2);
    cout<<"El resultado es:"<<resultado<<endl;
    return 0;
}

//Ejercicio 5
int main(){
    float x,y,aux;

    cout<<"Digita el valor de x:"; cin>>x;
    cout<<"Digita el valor de y:"; cin>>y;
    
    aux=x;
    x=y;
    y=aux;


    cout<<"x es:"<<x<<endl;
    cout<<"y es:"<<y<<endl;
    return 0;
}

//Ejercicio 6
int main(){
    float a,b,c, prom=0;

    cout<<"la nota de a es:"; cin>>a;
    cout<<"la nota de b es:"; cin>>b;
    cout<<"la nota de c es:"; cin>>c;
    
    prom= (a+b+c)/3;

    cout.precision(2);
    cout<<"el promedio es:"<<prom<<endl;
    return 0;
}
//Ejercicio 7
int main(){
    float pc,teo,parti,nfinal=0;

    cout<<"La nota de practica es:";cin>>pc;
    cout<<"La nota de teoria es:";cin>>teo;
    cout<<"La nota de participacion es:";cin>>parti;

    nfinal= (pc*30/100)+(teo*60/100)+(parti*10/100);

    cout.precision(2);
    cout<<"La nota final es:"<<nfinal<<endl;

    return 0;
}

//Ejercicio 8
#include <math.h> // libreria para las oprearciones matematicas

int main(){
    float ca, co, h;

    cout<<"Ingrese el cateto Adyacente:";cin>>ca;
    cout<<"Ingrese el cateto Opuesto:";cin>>co;

    ca=pow(ca,2);//ELevar al cuadrado con la funcion pow
    co=pow(co,2);
    h=sqrt(ca+co);//sacar la raiz cn la funcion sqrt

    cout.precision(2);
    cout<<"La hipotenusa es igual a:"<<h<<endl;
    return 0;
}

//Ejercicio 9
#include <math.h> // libreria para las oprearciones matematicas

int main(){
    float x, y, f;

    cout<<"Ingrese el valor de x:";cin>>x;
    cout<<"Ingrese el valor de y:";cin>>y;

    x=sqrt(x);
    y=pow(y,2);
    f=x/(y-1);

    cout.precision(2);
    cout<<"El valor de la funcion sera:"<<f<<endl;
    return 0;
}
*/

//Ejercicio 10
#include <math.h> // libreria para las oprearciones matematicas

int main(){
    float a, b, c, x1=0, x2=0;

    cout<<"Ingrese el valor de a:";cin>>a;
    cout<<"Ingrese el valor de b:";cin>>b;
    cout<<"Ingrese el valor de c:";cin>>c;

    x1= ((-b) + sqrt(pow(b,2)- (4*a*c)))/(2*a);
    x2= ((-b) - sqrt(pow(b,2)- (4*a*c)))/(2*a);

    cout<<"x1 tendra como valor:"<<x1<<endl;
    cout<<"x2 tendra como valor:"<<x2<<endl;

    return 0;
}