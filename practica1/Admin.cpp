#include "Admin.h"

Admin::Admin(const string &nom, const string &correo, const string &claveAdministrador) : Usuario(nom, correo){
    this->claveAdministrador = claveAdministrador;
    this->setCodigo(1);
}

const string &Admin::getClaveAdministrador() const {
    return claveAdministrador;
}

void Admin::setClaveAdministrador(const string &claveAdministrador) {
    Admin::claveAdministrador = claveAdministrador;
}

void Admin::MostrarContenido(){
    cout << "Eres un Administrador" << endl;
    cout << "Nombre: " << this->getNom() << ", Correo: " << this->getCorreo() << ", Codigo: " <<this->getCodigo() << endl;
    cout << "Esta es tu clave de administrador: " << this->claveAdministrador <<endl;
}

void Admin::AsignarCodigoPerfil() {
    cout << "Como administrador, asigno el codigo de usuario a cada perfil" << endl;
}