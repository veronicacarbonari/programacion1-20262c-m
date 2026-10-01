///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Corte de control: una técnica que puede aplicarse cuando los datos están agrupados, y no conocemos la cantidad
///de registros que tenemos que procesar. Además para que tenga sentido su aplicación, el programa debe
///emitir información relacionada con la variable por la cual están agrupados los datos
int main(){
    int sucursal, dia, cantidad, formaPago;
    float importe;
    int sucursalAnterior, quincenaMas;
    float recaudacionCredito,recaudacionDebito, recaudacionEfectivo;
    float pCredito=0, pDebito=0, pEfectivo=0;
    int cajasQuincena1=0, cajasQuincena2=0;
    cout<<"INGRESAR SUCURSAL ";
    cin>>sucursal;
    while(sucursal!=0){
        ///se va a ejecutar una cantidad de veces coincidentes
        ///con la cantidad de sucursales
        sucursalAnterior=sucursal;
        recaudacionCredito=recaudacionDebito=recaudacionEfectivo=0;
        while(sucursal==sucursalAnterior){
            ///se va a ejecutar una cantidad de veces coincidentes
            ///con la cantidad de registros
            cout<<"INGRESAR DIA ";
            cin>>dia;
            cout<<"INGRESAR CANTIDAD ";
            cin>>cantidad;
            cout<<"INGRESAR IMPORTE ";
            cin>>importe;
            cout<<"INGRESAR FORMA DE PAGO  ";
            cin>>formaPago;
            ///punto c
            switch(formaPago){
                case 1: recaudacionDebito+=importe;
                        break;
                case 2: recaudacionCredito+=importe;
                        break;
                case 3: recaudacionEfectivo+=importe;
                        break;
            }
            ///fin punto c
            ///punto b
            if(dia<16){
                ///primera quincena
                cajasQuincena1+=cantidad;
            }
            else{
                ///segunda quincena
                cajasQuincena2+=cantidad;
            }
            cout<<"INGRESAR SUCURSAL ";
            cin>>sucursal;

        }
        ///se va a ejecutar una cantidad de veces coincidentes
        ///con la cantidad de sucursales
        ///punto c
        float recTotal=recaudacionCredito+recaudacionDebito+recaudacionEfectivo;
        pCredito=recaudacionCredito/recTotal*100;
        pDebito=recaudacionDebito/recTotal*100;
        pEfectivo=recaudacionEfectivo/recTotal*100;

        cout<<"PARA LA SUCURSAL "<<sucursalAnterior<<endl;
        cout<<"PORCENTAJE DE RECAUDACION EN CREDITO "<<pCredito<<endl;
        cout<<"PORCENTAJE DE RECAUDACION EN DEBITO "<<pDebito<<endl;
        cout<<"PORCENTAJE DE RECAUDACION EN EFECTIVO "<<pEfectivo<<endl;

    }
    ///punto b
    if(cajasQuincena1>cajasQuincena2) quincenaMas=1;
    else quincenaMas=2;

    cout<<"LA QUINCENA QUE SE VENDIO MAS FUE "<<quincenaMas<<endl;
	system("pause");
	return 0;
}
