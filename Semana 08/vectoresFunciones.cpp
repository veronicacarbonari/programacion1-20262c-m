///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;
///Informar cuántos alumnos tienen una edad mayor al promedio.
///En el curso hay 25 alumnos, y se dispone de las 25 edades.

///prototipo, firma o declaración de la función
void cargarVector(int v[], int tam);

float calcularPromedio(int v[], int tam);

int contarMayores(int v[], int tam, float valorAcomparar);

int buscarMaximo(int v[], int tam);

int buscarMinimo(int v[], int tam);

int contarRepetidos(int v[], int tam, int valorAcomparar);

///Hacer una función de nombre buscarPosMaximo() que devuelva la posición del máximo en el vector
///La posición del primer valor máximo que se encuentre
///Hacer una función de nombre buscarPosMinimo() que devuelva la posición del minimo en el vector
///La posición del primer valor mínimo que se encuentre
int main(){

    const int TAM=10;
    float promedio;
    int vEdades[TAM]={0};///hace que el vector se inicialice en 0. SOLO EN LA DECLARACIÓN
    ///INGRESAR LOS VALORES DE EDAD
    cout<<"INGRESAR EDADES "<<endl;
    cargarVector(vEdades,TAM);
    ///Calcular el promedio
    promedio=calcularPromedio(vEdades,TAM);
    cout<<"EDAD PROMEDIO "<<promedio<<endl;
    ///Comparar cada edad con el promedio para saber cuántas hay mayores
    int cantMayores=contarMayores(vEdades,TAM,promedio);
    ///Informar el resultado
    cout<<"LA CANTIDAD DE ALUMNOS MAYORES AL PROMEDIO DE EDAD ES "<<cantMayores<<endl;
	///Calcular la edad máxima
	int edadMaxima=buscarMaximo(vEdades,TAM);
	cout<<"LA EDAD MAXIMA ES "<<edadMaxima<<endl;
	///Calcular la edad mínima
	int edadMinima=buscarMinimo(vEdades,TAM);
	cout<<"LA EDAD MINIMA ES "<<edadMinima<<endl;
	///Calcular si se repite la edad mínima
	int cantEmin=contarRepetidos(vEdades,TAM,edadMinima);
	cout<<"LA EDAD MINIMA SE REPITE "<<cantEmin<<" VECES"<<endl;
	system("pause");

	return 0;

}

void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cin>>v[i];
    }
}

float calcularPromedio(int v[], int tam){
    int i,sumaEdad=0;
    float promedio;
    for(i=0;i<tam;i++){
        sumaEdad+=v[i];
    }
    promedio=(float)sumaEdad/tam;
    return promedio;
}

int contarMayores(int v[], int tam, float valorAcomparar){
    int i,cont=0;

    for(i=0;i<tam;i++){
        if(v[i]>valorAcomparar){
            cont++;
        }
    }
    return cont;
}

int buscarMaximo(int v[], int tam){
	int i;
	int maximo=v[0];
	for(i=1;i<tam;i++){
         if(v[i]>maximo){
            maximo=v[i];
         }
    }
    return maximo;
}

int buscarMinimo(int v[], int tam){
	int i;
	int minimo=v[0];
	for(i=1;i<tam;i++){
         if(v[i]<minimo){
            minimo=v[i];
         }
    }
    return minimo;
}

int contarRepetidos(int v[], int tam, int valorAcomparar){
	int i, cont=0;
	for(i=0;i<tam;i++){
         if(v[i]==valorAcomparar){
            cont++;
         }
    }
    return cont;
}
