///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dadas las edades de los alumnos de un curso, calcular e informar el promedio de edad.
///Hay 25 alumnos en el curso->uso un for
///El ingreso de datos finaliza cuando se ingresa un valor de edad igual a 0.
int main(){
    int edad, sumaNumeros, cuentaIngresos;
    float promedioEdad;
    sumaNumeros=cuentaIngresos=0;
    edad=1;
    while(edad!=0){
        cout<<"INGRESAR EDAD ";
        cin>>edad;
        if(edad!=0){
            cuentaIngresos++;
            sumaNumeros+=edad;
        }
    }
    if(sumaNumeros!=0){
        promedioEdad=(float) sumaNumeros/cuentaIngresos;
        cout<<"PROMEDIO DE EDAD DE LOS ALUMNOS "<<promedioEdad<<endl;
    }
	system("pause");
	return 0;
}
