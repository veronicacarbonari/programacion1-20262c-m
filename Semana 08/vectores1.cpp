///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;
///Informar cuántos alumnos tienen una edad mayor al promedio.
///En el curso hay 25 alumnos, y se dispone de las 25 edades.

///Arrays:
///unidimensionales (1 dimensión): vectores
///más de una dimensión: matrices
///Nos permiten almacenar bajo un mismo nombre de variable un conjunto de valores DEL MISMO TIPO.
///Un vector puede ser de cualquiera de los tipos conocidos (y los que vamos a conocer)
///Al momento de declarar el vector, se establece la cantidad de elementos, o posiciones que va
/// a tener el vector.
///Al momento de usarlo, la primera de las posiciones es la 0, por lo que la última va a ser la
///posición cantidad de elementos-1
int main(){
    ///Ingresar las edades
    const int TAM=10;
    int i, edad, sumaEdad=0,cantMayores=0;
    float promedio;
    int vEdades[TAM]={0};///hace que el vector se inicialice en 0. SOLO EN LA DECLARACIÓN
    ///INGRESAR LOS VALORES
    for(i=0;i<TAM;i++){
        cout<<"INGRESAR EDAD ";
        cin>>edad;
        vEdades[i]=edad;
    }
    ///sumar las edades
    for(i=0;i<TAM;i++){
        sumaEdad+=vEdades[i];
    }
    ///Calcular el promedio
    promedio=(float)sumaEdad/TAM;
    cout<<"EDAD PROMEDIO "<<promedio<<endl;
    ///Comparar cada edad con el promedio para saber cuántas hay mayores
    for(i=0;i<TAM;i++){
         if(vEdades[i]>promedio){
            cantMayores++;
         }
    }

    ///Informar el resultado
    cout<<"LA CANTIDAD DE ALUMNOS MAYORES AL PROMEDIO DE EDAD ES "<<cantMayores<<endl;
	///Calcular la edad máxima
	int edadMaxima=0;
	for(i=0;i<TAM;i++){
         if(vEdades[i]>edadMaxima){
            edadMaxima=vEdades[i];
         }
    }
	cout<<"LA EDAD MAXIMA ES "<<edadMaxima<<endl;
	///Calcular la edad mínima
	int edadMinima=vEdades[0];
	for(i=1;i<TAM;i++){
         if(vEdades[i]<edadMinima){
            edadMinima=vEdades[i];
         }
    }
	cout<<"LA EDAD MINIMA ES "<<edadMinima<<endl;
	///Calcular si se repite la edad mínima
	int cantEmin=0;
	for(i=1;i<TAM;i++){
         if(vEdades[i]==edadMinima){
            cantEmin++;
         }
    }
	cout<<"LA EDAD MINIMA SE REPITE "<<cantEmin<<" VECES"<<endl;
	system("pause");

	return 0;

}
