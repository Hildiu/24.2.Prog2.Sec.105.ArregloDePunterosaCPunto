//
// Created by Hilda Bermejo on 22/10/24.
//

#ifndef INC_01_ARREGLO_DE_OBJETOS_CPUNTO_H
#define INC_01_ARREGLO_DE_OBJETOS_CPUNTO_H

#include <iostream>
#include <cmath>
using namespace std;

class CPunto
{
private:
    double x;
    double y;
public:
    CPunto(){x=0; y=0;}
    CPunto(double _x, double _y):x(_x), y(_y){}
    ~CPunto(){ cout << "\nDestruyendome";}
    double distancia(CPunto & otroPunto);
    void setX(double _x){ x=_x; }
    double getX(){ return x;}
    void setY(double _y){ y = _y;}
    double getY() { return y;}
};


#endif //INC_01_ARREGLO_DE_OBJETOS_CPUNTO_H
