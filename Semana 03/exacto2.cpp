///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///MAXIMO DE UN CONJUNTO DE 5 VALORES. PUEDEN SER POSITIVOS, NEGATIVOS, CERO.
///
int main(){
    const int TOPE=5;
    int n1;
    int maximo=0;
    int i;
    for(i=1;i<=TOPE;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>n1;
        if(i==1){
            maximo=n1;
        }
        else if(n1>maximo){
            maximo=n1;
        }

    }
    cout<<"EL MAXIMO ES "<<maximo<<endl;
	system("pause");
	return 0;
}
