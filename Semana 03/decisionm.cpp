///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Entrada: el lenguaje ('C','#','P','G')
            ///cantidad de horas (int) cantHoras
            ///urgencia (bool) vamos a usar un caracter 'S' (es urgente)
            /// 'N' si no lo es.
///Salida: 1 valor solamente, que es el costo del desarrollo del programa
        ///costoTotal=cantHoras*valorHora
        ///Si es urgente costoTotal=costoTotal+costoTotal*1.2

///Decisión simple: el programa elige uno de dos caminos posibles
///Decisión múltiple: el programa puede elegir entre un conjunto de caminos posibles
///
/*switch(varControl){
            case 1:
                break;
            case 8:
                break;

}
*/
int main(){
    int cantHoras, costoTotal, valorHora;
    char tipoLenguaje, urgente;
    bool calcular=true;
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
	return 0;
}
