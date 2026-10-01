///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

///Dado un conjunto de números que termina con un valor 0, calcular e informar cuántos de esos
///números son números primos.
///El valor 0 no forma parte de la lista a analizar. Se usa para finalizar

using namespace std;


int main(){
    int num, i, cantDivisores, cantPrimos=0;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num;
    while(num!=0){
        cantDivisores=0;
        for(i=1;i<=num;i++){
            if(num%i==0){
                cantDivisores++;
            }
        }
        if(cantDivisores==2){
                cantPrimos++;
                cout<<"PRIMO "<<num<<endl;
        }
        cout<<"INGRESAR UN NUMERO ";
        cin>>num;
    }
	cout<<"CANTIDAD DE PRIMOS "<<cantPrimos<<endl;
	system("pause");
	return 0;
}
