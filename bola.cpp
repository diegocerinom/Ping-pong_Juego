#include "bola.h"
#include <iostream>
#include "entorno.h"
#include "jugador.h"

using namespace std;

/*Constructor inicia el objetivo*/
bola::bola(int x_, int y_): x(x_), y(y_)
{
    gotoxy(x,y);printf("%c", 79);
    dx = 1;
    dy = 1;
}

/*Mueve lo bola con un incremento de 1*/
void bola::mover(jugador jugador_1, jugador pc)
{
    gotoxy(x,y);printf(" ");
    /*incremento en "x" y "y"*/
    x+=dx;
    y+=dy;

    /**/
    if(jugador_1.x+1 == x){
            if(jugador_1.y == y || jugador_1.y-1 == y || jugador_1.y+1 == y || jugador_1.y-2 == y || jugador_1.y+2 == y){
                dx= -dx;
                dy= +dy;
                x+=dx;
                y+=dy;
            }
    }

    if(pc.x-1 == x){
            if(pc.y == y || pc.y-1 == y || pc.y+1 == y || pc.y-2 == y || pc.y+2 == y){
                dx= -dx;
                dy= +dy;
                x+=dx;
                y+=dy;
            }
    }

    /*si esta en los limites cambia la direccion*/
    if(x == 4 || x == 78)
    {
        dx = - dx;
    }
    if(y == 4 || y == 23)
    {
        dy = - dy;
    }

    gotoxy(x,y);printf("%c", 79);
}

void bola::saque()
{
    gotoxy(x,y);printf(" ");
    x=41;
    y=13;
    gotoxy(x,y);printf("%c", 79);
}
