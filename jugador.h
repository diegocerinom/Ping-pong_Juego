#ifndef JUGADOR_H
#define JUGADOR_H


class jugador
{
    public:
        int x, y;
        int puntos = 0;
        jugador(int x, int y);
        void mover_barra(int mover);

    protected:

    private:
};

#endif // JUGADOR_H
