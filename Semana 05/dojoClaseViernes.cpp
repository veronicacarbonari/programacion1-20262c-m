///Fecha:
///Autor:
///Comentario:Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero y luego informar el porcentaje de números primos y el porcentaje de números no primos. Se informan 2 resultados al final.


#include<iostream>
using namespace std;

int main(){


    int num, cantNoPrimo= 0, cantPrimo= 0,i, cantDivisores=0 ;
    float porcentajePrim, porcentajeNoPrim;

    cout<<"Ingreso un numero: ";
    cin>>num;

    while(num!=0){
            cantDivisores=0;
        for(i=1; i<=num; i++){
            if (num%i==0){
            cantDivisores++;

            }
        }
        if(cantDivisores==2){
            cantPrimo++;
        }
        else {
            cantNoPrimo++;
        }

        cout<<"Ingreso un numero: ";
        cin>>num;

    }

    porcentajePrim= ((float)cantPrimo *100)/(cantPrimo+cantNoPrimo);

    porcentajeNoPrim=100-porcentajePrim;

    cout<<"Porcentaje de Num primos es : "<<porcentajePrim<<endl;
    cout<<"Porcentaje de Num NO primos es : "<<porcentajeNoPrim<<endl;









return 0;
}
