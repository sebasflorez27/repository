#include "Deportista.h"

class Futbolista : public Deportista
{
    public:
        Futbolista();

        int goles, asistencias;
        string posicion;
    private:

    protected:
        Futbolista();

        void setGoles(int goles);
        int getGoles();

        void setAsistencias(int asistencias);
        int getAsistencias();

        void setPosicion(string posicion);
        string getPosicion();
};