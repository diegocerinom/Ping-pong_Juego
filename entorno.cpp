#include "entorno.h"
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include <iostream>
#include "bola.h"

using namespace std;

/*
Funciones para el entorno de juego
*/

/*Posici�n del car�cter de salida en la pantalla*/
void gotoxy(int x, int y){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon, dwPos);
}

/*Oculta el cursor*/
void ocultarCursor()
{
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = FALSE;
	cursor.dwSize = sizeof(cursor);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(handle, &cursor);
}

/*Definir el dise�o del entorno de juego*/
void entorno()
{
    /*Imprime el nombre del juego*/
    gotoxy(32,0);
    printf("Ping-pong Game");
    /*Imprime el nombre de los jugadores y la legenda de puntos*/
    gotoxy(5,2);
    printf("Jugador");
    gotoxy(36,1);
    printf("Puntos");
    gotoxy(74,2);
    printf("PC");

    /*Imprime los limites en x*/
    for(int x=3; x<80; x++){
        gotoxy(x,3);
        printf("%c",177);
        gotoxy(x,24);
        printf("%c",177);
    }

    /*Imprime los limites en y*/
    for(int y=4; y<24; y++){
        gotoxy(3,y);
        printf("%c",177);
        gotoxy(79,y);
        printf("%c",177);
    }
}

/*Imprime los puntos de los jugadores*/
void Puntos(int jugador_puntos, int pc_puntos)
{
    gotoxy(36,2);
    printf("%d vs %d", jugador_puntos, pc_puntos);
}

/*Evalua si la bola esta en el limite de x, para retornar un punto al jugador*/
int evaluar(bola bol)
{
    if(bol.x == 4)
    {
        return 1;
    }
    else if(bol.x == 78)
    {
        return 2;
    }
    else{
        return 0;
    }
}
