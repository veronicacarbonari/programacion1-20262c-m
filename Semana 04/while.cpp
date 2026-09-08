///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///MAXIMO DE UN CONJUNTO DE VALORES. PUEDEN SER POSITIVOS, NEGATIVOS, CERO.
///ADEMAS QUIERO SABER QUE POSICION OCUPA EL MAXIMO EN LA LISTA
/// Y CUAL ES EL PROMEDIO DE LOS NUMEROS POSITIVOS INGRESADOS

///El PROGRAMA DEBE FINALIZAR CUANDO LA SUMA DE LOS POSITIVOS SEA MAYOR A 20

int main(){
    const int TOPE=5;
    int n1;
    int maximo=0, posMax;
    int i=0;
    ///Para calcular el promedio
    float promedio;
    int sumaNumerosPos=0, cantNumeros=0;
    bool hayPositivos=false;
    ///
    while(sumaNumerosPos<=20){///condición del while decide si se ejecuta o no las instrucciones que contiene
        cout<<"INGRESAR NUMERO ";
        cin>>n1;
        i++;
        if(i==1){
            maximo=n1;
            posMax=i;
        }
        else{

            if(n1>maximo){
                maximo=n1;
                posMax=i;
            }
        }
        if(n1>0){
            hayPositivos=true;
            cantNumeros++;
            sumaNumerosPos+=n1;
        }
    }


    cout<<"EL MAXIMO ES "<<maximo<<endl;
    cout<<"OCUPO LA POSICION "<<posMax<<endl<<endl;

    if(hayPositivos){
        promedio=(float)sumaNumerosPos/cantNumeros;
        cout<<"EL PROMEDIO DE LOS POSITIVOS ES "<<promedio;
    }
    else{
        cout<<"NO HUBO NUMEROS POSITIVOS INGRESADOS ";
    }
    cout<<endl;
	system("pause");
	return 0;
}
