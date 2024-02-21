#include <iostream>
using namespace std;
int main() // inicio del main
{
    // declaración de variables
    int posicion = 0, e, b, suma, valores[10];
    char opc;
    bool menu= true;

    while (menu)
    { // inicio del ciclo while
        cout<< "----------Menú----------"<<endl;
        cout<<"1. Ingresar valores"<<endl;
        cout<<"2. Mostrar lista de valores"<<endl;
        cout<<"3. Mostrar sumatoria de los valores"<<endl;
        cout<<"4. Edición de elementos"<<endl;
        cout<<"5. Borrar elementos"<<endl;
        cout<<"6. Vaciado de arreglo"<<endl;
        cout<<"7. Salir del programa"<<endl;
        cout << "\nSelecciona una opción: ";
        cin >> opc;
        switch (opc) // inicio del switch
        {
        case '1': // opción para ingresar valores
            if (posicion == 10)
            {
                cout << "\n¡Arreglo lleno!\n";
            }
            else
            {
                cout << "Ingrese el valor " << posicion + 1 << " : ";
                cin >> valores[posicion];
                posicion++;
            }
            break;
        case '2': // opción para imprimir la lista
            if (posicion == 0)
            {
                cout << "\n¡Arreglo vacío!\n";
            }
            else
            {
                cout << endl;
                for (int i = 0; i < posicion; i++)
                { // inicio del for
                    cout << "[" << valores[i] << "] ";
                } // fin del for
                cout << endl;
            }
            break;
        case '3': // opción para sumar los valores
            if (posicion == 0)
            {
                cout << "\n¡Arreglo vacío!\n";
            }
            else
            {
                cout << endl;
                suma = 0;
                for (int i = 0; i < posicion; i++)
                { // inicio del for
                    suma += valores[i];
                } // fin del for
                cout << "La sumatoria es: " << suma << endl;
            }
            break;
        case '4': // opción para editar elemento
            if (posicion == 0)
            {
                cout << "\n¡Arreglo vacío!\n";
            }
            else
            {
                cout << "\nIngrese el indice del elemento a editar [1-10]. El elemento aparece dentro de los parentesis" << endl;
                for (int i = 0; i < posicion; i++)
                { // inicio del for
                    cout << "[" << i + 1 << "] (" << valores[i] << ")" << endl;
                } // fin del for
                cout << endl;
                cout << "Seleccione una opción: ";
                cin >> e;
                e = e - 1;
                cout << "Ingrese el nuevo valor: ";
                cin >> valores[e];
                cout << "Editado Listo" << endl;
            }
            break;
        case '5': // opción para eliminar un elemento
            if (posicion == 0)
            {
                cout << "\n¡No hay nada!\n";
            }
            else
            {
                cout << "\nIngrese el indice del elemento para borrar [1-10]. El elemento aparece dentro de los parentesis" << endl;
                for (int i = 0; i < posicion; i++)
                { // inicio del for
                    cout << "[" << i+1 << "] (" << valores[i] << ")" << endl;
                } // fin del for
                cout << endl;
                cout << "Seleccione una opción: ";
                cin >> b;
                b = b-1;
                for (int i = 0; i < b; i++)
                {
                    /* code */
                }
                
                valores[b] = 0;
                cout << "Borrado con exito" << endl;
            }
            break;
        case '6': // opción para vaciar el arreglo
            if (posicion == 0)
            {
                cout << "\n¡No hay nada aqui!\n";
            }
            else
            {
                for (int i = 0; i < posicion; i++)
                { // inicio del for
                    valores[i] = 0;
                } // fin del for
                posicion = 0;
                cout << "Vaciado completado";
            }
            break;
        case '7': // opción para salir del programa
            menu = false;
            break;
        default: // opción default
            cout << "\nOpcion no valida" << endl;
            break;
        } // fin del switch
    }     // fin del while
    cout << "Bueno, Bye";
} 