///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;


void cargarDatos(int vA[], bool vD[]);
 ///a) Informar para cada código de artículo la cantidad total vendida en el mes.
void punto_1(int vA[]);

///b) Informar los días en los que no hubo ventas.  6
void punto_2(bool vD[]);


///c) Informar los artículos cuyas ventas en cantidad son mayores al promedio.
void punto_3(int vA[]);

///calcular el promedio ¿puedo hacer una función?
float calcularPromedio(int vec[], int tam);

///comparar cada posición del vector con el promedio
int contarMayores(int v[],int tam, float dato);

int main(){
    int vArticulos[200]={};
    bool vDias[31]={};
    cargarDatos(vArticulos,vDias);
  ///  punto_1(vArticulos);
  ///  punto_2(vDias);
    punto_3(vArticulos);
	system("pause");
	return 0;
}

void cargarDatos(int vA[], bool vD[]){
    int articulo, dia, cantidad;
    cout<<"ARTICULO ";
    cin>>articulo;
    while(articulo!=0){
        cout<<"DIA ";
        cin>>dia;
        cout<<"CANTIDAD ";
        cin>>cantidad;
        ///punto a
        vA[articulo-1]+=cantidad;///vA[articulo-1]=vA[articulo-1]+cantidad;
        ///punto b
        vD[dia-1]=true;
        ///punto c????
        cout<<"ARTICULO ";
        cin>>articulo;
    }
}

void punto_1(int vA[]){
    int i;
    for(i=0;i<200;i++){
        if(vA[i]>0){///OJO QUE EL ENUNCIADO NO PIDE ESTO!!!!
            cout<<"ARTICULO "<<i+1;
            cout<<" CANTIDAD VENDIDA "<<vA[i]<<endl;
        }
    }
}

void punto_2(bool vD[]){
    int i;
    for(i=0;i<31;i++){
        if(vD[i]==false){
            cout<<"EL DIA "<<i+1<<" NO TUVO VENTAS"<<endl;
        }
    }
}

void punto_3(int vA[]){
    float promedio;
    promedio=calcularPromedio(vA,200);
    cout<<"PROMEDIO "<<promedio<<endl;
    system("pause");
    int cantMayores=contarMayores(vA,200,promedio);
    cout<<"CANTIDAD DE ARTICULOS CON VENTAS MAYORES AL PROMEDIO "<<cantMayores<<endl;
}

float calcularPromedio(int vec[], int tam){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=vec[i];
    }
    return (float)suma/tam;
}

int contarMayores(int v[],int tam, float dato){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]>dato){
            cant++;
        }
    }
    return cant;
}
