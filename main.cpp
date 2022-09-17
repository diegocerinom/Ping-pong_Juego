#include <iostream>
#include<conio.h>
#include<windows.h>

#include "entorno.h"
#include "jugador.h"
#include "bola.h"
#include "robot.h"

using namespace std;

#define ARRIBA 72
#define ABAJO 80

/*Juego de Ping pong un jugador contra la PC*/
int main()
{
    ocultarCursor();
    entorno();
    Puntos(0, 0);

    jugador jugador_1(4, 13);
    jugador pc(78, 13);
    bola bol(41, 13);
    robot rob(bol.x, bol.y);

    char boton;
    while(true)
    {
        if(kbhit()){
            boton = getch();
            if(boton == ARRIBA){
                jugador_1.mover_barra(-1);
            }
            else if(boton == ABAJO){
                jugador_1.mover_barra(1);
            }
        }

        bol.mover(jugador_1, pc);

        pc.mover_barra(rob.control(bol));

        if(evaluar(bol) == 1)
        {
            pc.puntos+=1;
            Puntos(jugador_1.puntos, pc.puntos);
            bol.saque();
        }
        else if(evaluar(bol) == 2)
        {
            jugador_1.puntos+=1;
            Puntos(jugador_1.puntos, pc.puntos);
            bol.saque();
        }
        Sleep(100);
    }
    return 0;
}
