#include "jugador.h"
#include <iostream>
#include "entorno.h"

using namespace std;
/*Constructor inicia el objeto*/
jugador::jugador(int x_, int y_): x(x_), y(y_)
{
    gotoxy(x,y-1);printf("%c", 219);
    gotoxy(x,y);printf("%c", 219);
    gotoxy(x,y+1);printf("%c", 219);
}

/*Mueve la barra del jugador*/
void jugador::mover_barra(int mover)
{
    if(mover != 0)
    {
        if((y + mover) > 4 && (y + mover) < 23)
        {
            gotoxy(x,y-1);printf(" ");
            gotoxy(x,y);printf(" ");
            gotoxy(x,y+1);printf(" ");

            y = y + mover;

            gotoxy(x,y-1);printf("%c", 219);
            gotoxy(x,y);printf("%c", 219);
            gotoxy(x,y+1);printf("%c", 219);
        }
    }
}
