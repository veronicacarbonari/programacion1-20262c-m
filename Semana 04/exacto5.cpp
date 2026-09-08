///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///MAXIMO DE UN CONJUNTO DE 5 VALORES. PUEDEN SER POSITIVOS, NEGATIVOS, CERO.
///ADEMAS QUIERO SABER QUE POSICION OCUPA EL MAXIMO EN LA LISTA
/// Y CUAL ES EL PROMEDIO DE LOS NUMEROS POSITIVOS INGRESADOS
int main(){
    const int TOPE=5;
    int n1;
    int maximo=0, posMax;
    int i;
    ///Para calcular el promedio
    float promedio;
    int sumaNumeros=0, cantNumeros=0;
    bool hayPositivos=false;
    ///
    for(i=1;i<=TOPE;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>n1;
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
            sumaNumeros+=n1;
        }
    }


    cout<<"EL MAXIMO ES "<<maximo<<endl;
    cout<<"OCUPO LA POSICION "<<posMax<<endl<<endl;

    if(hayPositivos){
        promedio=(float)sumaNumeros/cantNumeros;
        cout<<"EL PROMEDIO DE LOS POSITIVOS ES "<<promedio;
    }
    else{
        cout<<"NO HUBO NUMEROS POSITIVOS INGRESADOS ";
    }
    cout<<endl;
	system("pause");
	return 0;
}
