#ifndef ENTORNO_H
#define ENTORNO_H

#include "bola.h"

void gotoxy(int x, int y);
void ocultarCursor();
void entorno();
void Puntos(int jugador_puntos, int pc_puntos);
int evaluar(bola bol);

#endif // ENTORNO_H
