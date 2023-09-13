#include "Cliente.h"

Cliente::Cliente(const string &nom, const string &correo, const string &telefonoContacto, const string &direccionContacto) : Usuario(nom, correo) {
    this->telefonoContacto = telefonoContacto;
    this->direccionContacto = direccionContacto;
    this->setCodigo(3);
}

const string &Cliente::getTelefonoContacto() const {
    return telefonoContacto;
}

void Cliente::setTelefonoContacto(const string &telefonoContacto) {
    Cliente::telefonoContacto = telefonoContacto;
}

const string &Cliente::getDireccionContacto() const {
    return direccionContacto;
}

void Cliente::setDireccionContacto(const string &direccionContacto) {
    Cliente::direccionContacto = direccionContacto;
}

void Cliente::MostrarContenido() {
    cout << "Eres un Cliente" << endl;
    cout << "Nombre: " << this->getNom() << ", Correo: " << this->getCorreo() << ", Codigo: " <<this->getCodigo() << endl;
    cout << "Tu telefono de contacto es: " << this->telefonoContacto << endl;
    cout << "Tu direccion de contacto es: " << this->direccionContacto << endl;
}

void Cliente::ConsultarProductos() {
    cout << "Como cliente, consulto los productos disponibles" << endl;
}