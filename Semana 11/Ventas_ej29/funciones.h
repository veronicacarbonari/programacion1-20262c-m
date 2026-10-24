#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
///Prototipos de funciones

void cargarDatos(int vA[], bool vD[]);
 ///a) Informar para cada código de artículo la cantidad total vendida en el mes.
void punto_1(int vA[]);

///b) Informar los días en los que no hubo ventas.  6
void punto_2(bool vD[]);


///c) Informar los artículos cuyas ventas en cantidad son mayores al promedio.
void punto_3(int vA[]);

///calcular el promedio ¿puedo hacer una función?
float calcularPromedio(int vec[], int tam);

///comparar cada posición del vector con el promedio
int contarMayores(int v[],int tam, float dato);



#endif // FUNCIONES_H_INCLUDED
