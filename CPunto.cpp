//
// Created by Hilda Bermejo on 22/10/24.
//

#include "CPunto.h"


double CPunto::distancia(CPunto & otroPunto)
{
    return  sqrt( pow( (otroPunto.getX() - x), 2) + pow( (otroPunto.getY()- y),2));
}