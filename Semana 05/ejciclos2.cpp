///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario: del ejercicio 11 TP2

# include<iostream>


using namespace std;

///Modificar para calcular el importe hasta que se ingrese un valor para el tipo de lenguaje F

int main(){
    int cantHoras, costoTotal, valorHora, i;
    char tipoLenguaje, urgente;
    bool calcular;
    cout<<"INGRESAR EL LENGUAJE A UTILIZAR ('C','#','P','G', PARA FINALIZAR PRESIONE 'F') ";
    cin>>tipoLenguaje;
    while(tipoLenguaje!='F' && tipoLenguaje!='f' ){
        calcular=true;

        cout<<"INGRESAR LA CANTIDAD DE HORAS DEL PROYECTO ";
        cin>>cantHoras;
        cout<<"ES URGENTE EL PROYECTO (S= SI; N= NO) ";
        cin>>urgente;
        ///calcular el valor de la hora
        switch(tipoLenguaje){
            case 'C':
            case 'c':
                        valorHora=7500;
                        break;
            case '#':   valorHora=6100;
                        break;
            case 'P':   valorHora=5400;
                        break;
            case 'G':   valorHora=5000;
                        break;
            default:    cout<<"EL INGRESO PARA EL LENGUAJE NO ES CORRECTO "<<endl;
                        calcular=false;
                        break;
        }
        ///
        if(calcular==true){
            costoTotal=cantHoras*valorHora;
            if(urgente=='S'){
                costoTotal=costoTotal*2.2;
            }
            cout<<"EL COSTO TOTAL DEL PROYECTO ES "<<costoTotal<<endl;
        }
        system("pause");
        system("cls");
        cout<<"INGRESAR EL LENGUAJE A UTILIZAR ('C','#','P','G', PARA FINALIZAR PRESIONE 'F') ";
        cin>>tipoLenguaje;
    }
	system("pause");
	return 0;
}
