#include <iostream>

using namespace std;

class Deportista
{
    private:

    protected:
    string nombre, cedula, programa, genero;
    int edad, faltas;

    public:
    Deportista();
    
    void setNombre(string nombre);
    string getNombre();

    void setCedula(string cedula);
    string getCedula();

    void setPrograma(string programa);
    string getPrograma();

    void setGenero(string genero);
    string getGenero();

    void setEdad(int edad);
    int getEdad();

    void setFaltas(int faltas);
    int getFaltas();
};