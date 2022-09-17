#ifndef ROBOT_H
#define ROBOT_H
#include "bola.h"

class robot
{
    public:
        int arriba=-1;
        int abajo=1;
        int x, y;

        robot(int x_, int y_);
        int control(bola bol);

    protected:

    private:
};

#endif // ROBOT_H
