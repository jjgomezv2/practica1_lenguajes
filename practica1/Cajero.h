#include "Usuario.h"
#include <iostream>

class Cajero : public Usuario {
private:
    string claveCajero;
public:
    Cajero(const string &nom, const string &correo, const string &claveCajero);

    const string &getClaveCajero() const;

    void setClaveCajero(const string &claveCajero);

    void MostrarContenido() override;

    void RegistrarVenta();
};
