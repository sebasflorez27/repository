#include "Deportista.h"

Deportista::Deportista()
{
    nombre = "";
    cedula = "";
    programa = "";
    genero = "";
    edad = 0;
    faltas = 0;

}

void Deportista::setNombre(string nombre)
{
    this -> nombre = nombre;
}

string Deportista::getNombre()
{
    return nombre;
}

void Deportista::setCedula(string cedula)
{
    this -> cedula = cedula;
}

string Deportista::getCedula()
{
    return cedula;
}

void Deportista::setPrograma(string programa)
{
    this -> programa = programa;
}

string Deportista::getPrograma()
{
    return programa;
}

void Deportista::setGenero(string genero)
{
    this -> genero = genero;
}

string Deportista::getGenero()
{
    return genero;
}

void Deportista::setEdad(int edad)
{
    this -> edad = edad;
}

int Deportista::getEdad()
{
    return edad;
}

void Deportista::setFaltas(int faltas)
{
    this -> faltas = faltas;
}

int Deportista::getFaltas()
{
    return faltas;
}