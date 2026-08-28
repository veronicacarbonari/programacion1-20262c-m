///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario: Dados 3 números informar el mayor de ellos

# include<iostream>

///OP RELACIONALES:
///>    <   >=  <=  ==  !=
///OP LOGICOS

/// AND &&-> ME EXIGE QUE TODAS LAS PROPOSICIONES SEAN VERDADERAS PARA QUE EL RESULTADO SEA VERDADERO

/// OR ||-> ME EXIGE QUE UNA SEA SEA VERDADERAS PARA QUE EL RESULTADO SEA VERDADERO

///! NEGACION->HACE QUE LO VERDADERO SE CONVIERTA FALSO Y LO FALSO VERDADERO

using namespace std;

///true false
int main(){
    int num1, num2, num3;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num1;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num2;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num3;



    if(num1!=num2 || num1!=num3 || num2!=num3){
        cout<<"AL MENOS DOS NUMEROS SON DISTINTOS";
    }
    else{
        cout<<"LOS NUMERO INGRESADOS SON TODOS IGUALES";

    }

    cout<<endl;

	system("pause");
	return 0;
}
