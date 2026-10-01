///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario: del ejercicio 11 TP2

# include<iostream>


using namespace std;

///Modificar para calcular el importe de 10 proyectos distintos

int main(){
    const int CANT_REPE=5;
    int cantHoras, costoTotal, valorHora, i;
    char tipoLenguaje, urgente;
    bool calcular;
    for(i=1;i<=CANT_REPE;i++){
        system("cls");
        calcular=true;
        cout<<"INGRESAR EL LENGUAJE A UTILIZAR ('C','#','P','G') ";
        cin>>tipoLenguaje;
        cout<<"INGRESAR LA CANTIDAD DE HORAS DEL PROYECTO ";
        cin>>cantHoras;
        cout<<"ES URGENTE EL PROYECTO (S= SI; N= NO) ";
        cin>>urgente;
        ///calcular el valor de la hora
        switch(tipoLenguaje){
            case 'C':   valorHora=7500;
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
    }
	system("pause");
	return 0;
}
