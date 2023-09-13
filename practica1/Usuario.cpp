#include "Usuario.h"
#include <iostream>
using namespace std;

const string &Usuario::getNom() const {
    return nom;
}

void Usuario::setNom(const string &nom) {
    Usuario::nom = nom;
}

const string &Usuario::getCorreo() const {
    return correo;
}

void Usuario::setCorreo(const string &correo) {
    Usuario::correo = correo;
}

int Usuario::getCodigo() const {
    return codigo;
}

void Usuario::setCodigo(int codigo) {
    Usuario::codigo = codigo;
}

Usuario::Usuario(const string &nom, const string &correo)  {
    this->nom = nom;
    this->correo = correo;
    this->codigo = 0;
}

void Usuario::MostrarContenido() {
    cout << "Nombre: " << this->nom << ", Correo: " << this->correo << ", Código: " <<this->codigo << endl;
}