#include <iostream>
#include "Usuario.h"

class Cliente : public Usuario{
private:
    string telefonoContacto, direccionContacto;
public:
    Cliente(const string &nom, const string &correo, const string &telefonoContacto, const string &direccionContacto);

    const string &getTelefonoContacto() const;

    void setTelefonoContacto(const string &telefonoContacto);

    const string &getDireccionContacto() const;

    void setDireccionContacto(const string &direccionContacto);

    void MostrarContenido() override;

    void ConsultarProductos();
};
