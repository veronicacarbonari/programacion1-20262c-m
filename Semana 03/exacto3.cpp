///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///MAXIMO DE UN CONJUNTO DE 5 VALORES. PUEDEN SER POSITIVOS, NEGATIVOS, CERO.
///ADEMAS QUIERO SABER QUE POSICION OCUPA EL MAXIMO EN LA LISTA
int main(){
    const int TOPE=5;
    int n1;
    int maximo=0, posMax;
    int i;
    for(i=1;i<=TOPE;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>n1;
        if(i==1){
            maximo=n1;
            posMax=i;
        }
        else if(n1>maximo){
            maximo=n1;
            posMax=i;
        }

    }
    cout<<"EL MAXIMO ES "<<maximo<<endl;
    cout<<"OCUPO LA POSICION "<<posMax<<endl;
	system("pause");
	return 0;
}
