#include "DtClase.h"

DtClase::DtClase()
{
}

DtClase::DtClase(int id, string nom, Turno t){
    this->Id = id;
    this->Nombre = nom;
    this->turno = t;
};

int DtClase::getId(){
    return this->Id;
};

string DtClase::getNombre(){
    return this->Nombre;
};

Turno DtClase::getTurno(){
    return this->turno;
};

void DtClase::setId(int id){
    this->Id = id;
};
void DtClase::setNombre(string nom){
    this->Nombre = nom;
};
void DtClase::setTurno(Turno t){
    this->turno = t;
};

DtClase::~DtClase()
{
};
