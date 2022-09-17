#include "robot.h"
#include <iostream>
#include "bola.h"

using namespace std;

robot::robot(int x_, int y_): x(x_), y(y_){}

int robot::control(bola bol)
{
    if(bol.x > 39 && bol.dx == 1)
    {
        int probabilidad=rand()%2;
        if(probabilidad == 1)
        {
            if(bol.dy == 1)
            {
                return 1;
            }
            else if(bol.dy == -1)
            {
                return -1;
            }
            else{
                return 0;
            }
        }
        else{
                return 0;
            }
    }
    else{
                return 0;
            }
}
