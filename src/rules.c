#include "rules.h"

bool cell_alive(bool alive_now, int neighbors)
{
    if (neighbors >= 2){
        return true;
    }
    return false;
}