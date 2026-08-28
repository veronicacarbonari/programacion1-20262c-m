///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

///for(valor_inicial_variable;condición_que_determina_continuidad;incremento_de_la_variable){

//}

using namespace std;

///MAXIMO DE UN CONJUNTO DE 5 VALORES POSITIVOS
int main(){
    const int TOPE=5;
    int n1;
    int maximo=0;
    int i;
    ///Ciclos: permiten repetir un conjunto de instrucciones
    ///Exacto: cuando sabemos cuántas veces queremos que se repita. for()
    ///Inexacto: necesito que se repitan, pero no sé cuántas veces se van a repetir
    int valorFinal;
    //cout<<"INGRESAR LA CANTIDAD DE NUMEROS A ANALIZAR ";
    //cin>>valorFinal;
    //for(i=1;i<=valorFinal;i++){///i=i+1
    for(i=1;i<=TOPE;i++){///i=i+1
        cout<<"INGRESAR NUMERO ";
        cin>>n1;
        if(n1>maximo){
            maximo=n1;
        }
    }
    cout<<"EL MAXIMO ES "<<maximo<<endl;
	system("pause");
	return 0;
}
