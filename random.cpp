//Random function implementations



#include <cstdlib>
#include "range.h"
#include <ctime>




int random(range r)
{

    srand(time(0));
    return r.low + rand() % ((r.high + 1) - r.low);

}


int random(int high,int low)
{

    srand(time(0));
    return low + rand() % ((high + 1) - low);


}