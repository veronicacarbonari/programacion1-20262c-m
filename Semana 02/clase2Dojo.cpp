///Fecha:
///Autor:
/**Comentario:Un negocio de perfumería efectúa descuentos según el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%
Hacer un programa donde se ingresa el importe original sin descuento y se informe por pantalla el importe con el descuento ya aplicado.
Importante: Verifique que el programa emita UN SOLO CARTEL.**/


#include<iostream>
using namespace std;
/** datos de entrada>>>> importe

proceso >>> tomar el importe y realizar calculos

datos de salida >>>>> importe final con descuento aplicado

 **/









int main(){
    float importe, importe_final;

    cout<<"Ingrese importe: ";
    cin>> importe;

    if(importe<100){
        importe_final= importe*0.95;
    }
        else if(importe<=500){
                importe_final= importe*0.90;
        }
            else{
                importe_final= importe*0.85;
            }

            cout << "Importe con descuento: $" << importe_final;


return 0;
}
