#include <iostream>

using namespace std;

#include "funciones.h"

int main(){
    int vArticulos[200]={};
    bool vDias[31]={};
    int opc;
    bool cargado=false;
    while(true){
        system("cls");
        cout<<"*********MENU EJERCICIO 29 TP6*********"<<endl;
        cout<<"1. CARGAR DATOS "<<endl;
        cout<<"2. CANTIDAD VENDIDA DE CADA ARTICULO "<<endl;
        cout<<"3. DIAS SIN VENTAS "<<endl;
        cout<<"4. ARTICULOS CON VENTA MAYOR AL PROMEDIO "<<endl;
        cout<<"0. FIN DEL PROGRAMA "<<endl;
        cout<<"***************************************"<<endl;
        cout<<"SELECCIONAR UNA OPCION ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cargarDatos(vArticulos,vDias);
                    cargado=true;
                    break;
            case 2: if(cargado==true)punto_1(vArticulos);
                    else cout<<"LOS DATOS NO FUERON CARGADOS"<<endl;
                    break;
            case 3: if(cargado) punto_2(vDias);
                    else cout<<"LOS DATOS NO FUERON CARGADOS"<<endl;
                    break;
            case 4: if(cargado) punto_3(vArticulos);
                    else cout<<"LOS DATOS NO FUERON CARGADOS"<<endl;
                    break;
            case 0: cout<<"GRACIAS POR USAR NUESTRO SISTEMA "<<endl;
                    return 0;
                    break;
            default: cout<<"OPCION INCORRECTA"<<endl;
                    break;
        }
        system("pause");

    }
	system("pause");
	return 0;
}

