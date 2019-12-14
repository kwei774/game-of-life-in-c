#include "rules.h"

bool cell_alive(bool alive_now, int neighbors)
{
    if (neighbors == 2 && alive_now){
        return true;
    }
    else if (neighbors == 3){
        return true;
    }
    return false;
}