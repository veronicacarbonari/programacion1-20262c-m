///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario: Dados 3 números informar el mayor de ellos

# include<iostream>

using namespace std;


int main(){
    int num1, num2, num3;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num1;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num2;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num3;


    cout<<"EL MAS GRANDE ES ";
        ///la salida debe ser alguna de éstas:
        /*cout<<num1;
        cout<<num2;
        cout<<num3;*/
    if(num1>num2){
        if(num1>num3){
            cout<<num1;
        }
        else{
            ///sé que num1 es mayor que num2 y que num1 no es mayor que num3
            cout<<num3;
        }
    }
    else{///sé que num1 no es el mayor
        if(num2>num3){
            cout<<num2;
        }
        else{
            cout<<num3;
        }

    }

    cout<<endl;

	system("pause");
	return 0;
}
