#include <iostream>

bool divide(unsigned weight)
{
    if(weight == 2) {
      return false;
    }
    if ((weight - 2) % 2 == 0) {
      return true;
    }
    return false;
}

