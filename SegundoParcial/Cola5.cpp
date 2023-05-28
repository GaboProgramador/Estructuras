//Colas circulares

#include <iostream>
#include "ColaCircular.h"

#define FIN 0
using namespace std;

int main(){
    system("color f0");
    ColaCircular c1;

    void leerColaR(ColaCircular *c1);
    void imprimirColaR(ColaCircular c1);

    leerColaR(&c1);
    cout << endl << "Elementos de la cola: ";
    cout << endl << "=======================";
    imprimirColaR(c1);

    cout << endl;
    system("pause");
}
void leerColaR(ColaCircular *c1){
    Tipo x;
    cout << endl << "Valor a insertar. Finalice con "<<FIN<<": ";
    cin >> x;
    if(x != FIN){
        if(!c1->colaLlena()){
        c1 -> insertar(x);
        leerColaR(c1);
        }else{
            cout << endl << "C1:'Ya me llene :('";
        }
    }
}   
void imprimirColaR(ColaCircular c1){
    if(!c1.colaVacia()){
        //no hay que cambiar el orden en colas, explota BOOM!
        cout << endl << ">  " << c1.quitar();
        imprimirColaR(c1);
    }
}




    