///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario: suponer que los números ingresados pueden ser iguales

# include<iostream>

using namespace std;


int main(){
    int num1, num2;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num1;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num2;
    if(num1>num2){///si es verdadero se ejecuta lo que está por acá
        cout<<"EL VALOR "<<num1<<" ES EL MAS ALTO"<<endl;
    }
    else{/// si es falso se ejecuta lo que sigue por este otro lado
        ///se sabe que num1 NO ES mayor que num2
        if(num1==num2){
            cout<<"AMBOS NUMEROS SON IGUALES"<<endl;
        }
        else{
            cout<<"EL VALOR "<<num2<<" ES EL MAS ALTO"<<endl;
        }
    }

	system("pause");
	return 0;
}
