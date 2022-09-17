#ifndef BOLA_H
#define BOLA_H
#include "jugador.h"

class bola
{


    public:
        int x, y;
        int dx, dy;
        bola(int x, int y);
        void mover(jugador jugador_1, jugador pc);
        void saque();

    protected:

    private:
};

#endif // BOLA_H
