#include <iostream>
#include "Usuario.h"

class Admin : public Usuario  {
private:
    string claveAdministrador;
public:
    Admin(const string &nom, const string &correo, const string &claveAdministrador);

    const string &getClaveAdministrador() const;

    void setClaveAdministrador(const string &claveAdministrador);

    void MostrarContenido() override;

    void AsignarCodigoPerfil();
};