///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///MAXIMO DE UN CONJUNTO DE 5 VALORES. PUEDEN SER POSITIVOS, NEGATIVOS, CERO.
///ADEMAS QUIERO SABER QUE POSICION OCUPA EL MAXIMO EN LA LISTA
/// Y CUAL ES EL PROMEDIO DE LOS NUMEROS INGRESADOS
int main(){
    const int TOPE=5;
    int n1;
    int maximo=0, posMax;
    int i;
    ///Para calcular el promedio
    float promedio;
    int sumaNumeros=0, cantNumeros=0, cantCambiosMax=0;
    ///
    for(i=1;i<=TOPE;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>n1;
        if(i==1){
            maximo=n1;
            posMax=i;
            cantCambiosMax++;
            cantNumeros++;
        }
        else{
            cantNumeros++;
            if(n1>maximo){
                maximo=n1;
                posMax=i;
                cantCambiosMax++;
            }
        }

        sumaNumeros+=n1;

    }
    promedio=(float)sumaNumeros/cantNumeros;
    cout<<"EL MAXIMO ES "<<maximo<<endl;
    cout<<"OCUPO LA POSICION "<<posMax<<endl<<endl;

    cout<<"EL PROMEDIO ES "<<promedio<<endl;
    cout<<"EL MAXIMO CAMBIO "<<cantCambiosMax<<endl;
	system("pause");
	return 0;
}
