#include <iostream>
#pragma once

using namespace std;
class Usuario {
private:
    string nom;
    string correo;
    int codigo;
public:
    Usuario(const string &nom, const string &correo);

    const string &getNom() const;

    void setNom(const string &nom);

    const string &getCorreo() const;

    void setCorreo(const string &correo);

    int getCodigo() const;

    void setCodigo(int codigo);

    virtual void MostrarContenido();
};