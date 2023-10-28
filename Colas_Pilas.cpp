#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    char eleccion;
    cout << "Desea crear una pila (P) o una cola (C)? ";
    cin >> eleccion;

    if (eleccion == 'P' || eleccion == 'p') {
        stack<int> pila; 
        cout << "Ha creado una pila." << endl;

        while (true) {
            cout << "1. Insertar dato en la pila" << endl;
            cout << "2. Ejecutar metodo LIFO" << endl;
            cout << "3. Mostrar lista" << endl;
            cout << "0. Salir" << endl;

            int opcion;
            cin >> opcion;

            if (opcion == 0) {
                break;
            } else if (opcion == 1) {
                int dato;
                cout << "Ingrese un numero: ";
                cin >> dato;
                pila.push(dato); 
            } else if (opcion == 2) {
                if (!pila.empty()) {
                    int tope = pila.top();
                    cout << "Metodo LIFO: " << tope << " ha sido eliminado." << endl;
                    pila.pop();
                } else {
                    cout << "La pila esta vacia." << endl;
                }
            } else if (opcion == 3) {
                cout << "Lista original en la pila: ";
                stack<int> pila_copia = pila; 
                while (!pila_copia.empty()) {
                    cout << pila_copia.top() << " ";
                    pila_copia.pop();
                }
                cout << endl;
            } else {
                cout << "Opcion no valida." << endl;
            }
        }
    } else if (eleccion == 'C' || eleccion == 'c') {
        queue<int> cola; // Cola
        cout << "Ha creado una cola." << endl;

        while (true) {
            cout << "1. Insertar dato en la cola" << endl;
            cout << "2. Ejecutar metodo FIFO" << endl;
            cout << "3. Mostrar lista" << endl;
            cout << "0. Salir" << endl;

            int opcion;
            cin >> opcion;

            if (opcion == 0) {
                break;
            } else if (opcion == 1) {
                int dato;
                cout << "Ingrese un numero: ";
                cin >> dato;
                cola.push(dato); 
            } else if (opcion == 2) {
                if (!cola.empty()) {
                    int frente = cola.front();
                    cout << "Metodo FIFO: " << frente << " ha sido eliminado." << endl;
                    cola.pop();
                } else {
                    cout << "La cola esta vacia." << endl;
                }
            } else if (opcion == 3) {
                cout << "Lista: ";
                queue<int> cola_copia = cola; 
                while (!cola_copia.empty()) {
                    cout << cola_copia.front() << " ";
                    cola_copia.pop();
                }
                cout << endl;
            } else {
                cout << "Opcion no valida." << endl;
            }
        }
    } else {
        cout << "Opcion no valida. Por favor, seleccione P para pila o C para cola." << endl;
    }

    return 0;
}

