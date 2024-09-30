/*
punteros - declaracion de punterios

&n= la direccion de n
*n = la variable cuya direcion esta almacewnada en n

*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num, *dir_num;

    num = 20;
    dir_num = &num;

    cout<<"Nummero: "<<*dir_num<<endl;
    cout<<"La direccion de memoria: "<<dir_num<<endl;

    getch();
    return 0;
}
