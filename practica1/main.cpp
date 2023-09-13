#include <iostream>
#include "Usuario.h"
#include "Cliente.h"
#include "Admin.h"
#include "Cajero.h"

int main() {
    bool salir;
    int op;
    op=0;
    string nom, correo, temp1, temp2;
    salir = true;
    while (salir) {
        cout << "Bienvenido al sistema de seguridad de la empresa xyz" << endl;
        cout << "Por favor digite su tipo de usuario" << endl;
        cout << "Digite 1 para Administrador" << endl;
        cout << "Digite 2 para Cajero" << endl;
        cout << "Digite 3 para Cliente" << endl;
        cout << "Digite 4 para salir" << endl;
        cin >> op;

        if (op==1){
            cout << "Ingresa el nombre del Administrador" << endl;
            cin.ignore();
            getline(cin,nom);
            cout << "Ingresa el correo del Administrador" << endl;
            getline(cin,correo);
            cout << "Ingresa la clave del Administrador" << endl;
            getline(cin,temp1);

            Admin* nuevo_admin = new Admin(nom,correo,temp1);

            nuevo_admin->MostrarContenido();
            nuevo_admin->AsignarCodigoPerfil();

            cout << "----------------------------------------------------------------------------------------" << endl;
        } else if (op == 2){
            cout << "Ingresa el nombre del Cajero" << endl;
            cin.ignore();
            getline(cin, nom);
            cout << "Ingresa el correo del Cajero" << endl;
            getline(cin, correo);
            cout << "Ingresa la clave del Cajero" << endl;
            getline(cin, temp1);

            Cajero* nuevo_cajero = new Cajero(nom,correo,temp1);

            nuevo_cajero->MostrarContenido();
            nuevo_cajero->RegistrarVenta();

            cout << "----------------------------------------------------------------------------------------" << endl;
        }else if(op==3){
            cout << "Ingresa el nombre del Cliente" << endl;
            cin.ignore();
            getline(cin,nom);
            cout << "Ingresa el correo del Cliente" << endl;
            getline(cin,correo);
            cout << "Ingresa el telefono de contacto del Cliente" << endl;
            getline(cin,temp1);
            cout << "Ingresa la direccion de contacto del Cliente" << endl;
            getline(cin,temp2);

            Cliente* nuevo_cliente = new Cliente(nom,correo,temp1, temp2);
            nuevo_cliente->MostrarContenido();
            nuevo_cliente->ConsultarProductos();

            cout << "----------------------------------------------------------------------------------------" << endl;
        } else if(op == 4){
            cout << "Gracias por utilizar nuestro sistema de seguridad" << endl;
            salir = false;
        }else{
            cout << " Opción inválida" << endl;
            cout << "----------------------------------------------------------------------------------------" << endl;
        }
    }
    return 0;
}
