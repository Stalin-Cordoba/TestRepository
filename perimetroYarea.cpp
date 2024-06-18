#include <iostream>
using namespace std;

/*Estructura*/

struct Datos
{
    int NdeCuenta;
    int Dinero;
};

/*Variables*/

struct Datos Persona[20];
int Eleccion, Deposito, Retirar, Buscar;

/*Código*/

int main()
{
    do
    {
        cout << "Introduzca un numero de cuenta (no mayor a 20, presione 0 para terminar el programa)" << endl;
        cin >> Buscar;
        if(Buscar < 0 || Buscar > 20)
        {
            cout << "Introduzca un numero valido" << endl << endl;
        }
        else
        {
            if(Buscar == 0)
            {
                cout << "Adios!" << endl;
            }
            else
            {
                cout << "Bienvenido!" << endl;
                do
                {
                    cout << "Que desea hacer?" << endl << endl;

                    /*Lista de Opciones*/

                    cout << "1) Deposito" << endl << "2) Retirar dinero" << endl << "3) Estado de la cuenta" << endl << endl;
                    cout << "Ingrese 0 para salir" << endl;
                    cin >> Eleccion;
                    if(Eleccion < 0 || Eleccion > 3)
                    {
                        cout << "Ingrese una opción correcta" << endl;
                    }
                    else
                    {
                        switch(Eleccion)
                        {
                            case 0:
                            {
                                cout << "Saliendo..." << endl;
                                break;
                            }
                            case 1:
                            {
                                cout << "Cuanto dinero desea depositar?" << endl;
                                cin >> Deposito;
                                if(Deposito <= 0)
                                {
                                    cout << "Porfavor ingrese una cantidad apropiada" << endl;
                                    break;
                                }
                                else
                                {
                                    Persona[Buscar].Dinero = Persona[Buscar].Dinero + Deposito;
                                    cout << "Deposito realizado con exito!" << endl;
                                    break;
                                }
                            }
                            case 2:
                            {
                                if(Persona[Buscar].Dinero == 0)
                                {
                                    cout << "No hay dinero en la cuenta" << endl;
                                    break;
                                }
                                else
                                {
                                    cout << "Cuanto dinero desea retirar?" << endl;
                                    cin >> Retirar;
                                    if(Retirar > Persona[Buscar].Dinero)
                                    {
                                        cout << "Se esta retirando mas dinero de lo que tiene la cuenta!" << endl;
                                        break;
                                    }
                                    else
                                    {
                                        Persona[Buscar].Dinero = Persona[Buscar].Dinero - Retirar;
                                        cout << "Se retiro el dinero con exito!" << endl;
                                        break;
                                    }
                                }
                            }
                            case 3:
                            {
                                cout << "Informacion de la cuenta" << endl;
                                cout << "Numero de la Cuenta: " << Buscar << endl;
                                cout << "Dinero: " << Persona[Buscar].Dinero << endl;
                            }
                        }
                    }
                } while (Eleccion != 0);
            }
        }
    } while (Buscar != 0);
    return 0;  
}