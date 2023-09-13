#include "Cajero.h"

Cajero::Cajero(const string &nom, const string &correo, const string &claveCajero) : Usuario(nom,correo){
    this->claveCajero = claveCajero;
    this->setCodigo(2);
}

const string &Cajero::getClaveCajero() const {
    return claveCajero;
}

void Cajero::setClaveCajero(const string &claveCajero) {
    Cajero::claveCajero = claveCajero;
}

void Cajero::MostrarContenido() {
    cout << "Eres un Cajero" << endl;
    cout << "Nombre: " << this->getNom() << ", Correo: " << this->getCorreo() << ", Codigo: " <<this->getCodigo() << endl;
    cout << "Tu clave de cajero es: " << this->claveCajero << endl;
}

void Cajero::RegistrarVenta() {
    cout << "Como cajero, registro ventas" << endl;
}