/*----------------------------------------------------------------------------------------------------
 * El programa permite hallar el perimetro de un poligono, ingresando como datos la cantidad de lados
 * del poligono y las coordenadas de cada punto.
 * Dato de Entrada: lados (int)   numero de lados de un poligono
 *                  las coordenadas de cada punto.
 * Dato de Salida:  perimetro  (double)
 * Usa un arreglo de punteros a CPunto
 ---------------------------------------------------------------------------------------------------*/
#include "CPunto.h"

int main()
{ int nlados;
  double x,y;

    cout << "Numero de lados del poligono: ";
    cin >> nlados;
    //-- se crea un arreglo dinamico, en donde en cada casillero luego habra un \
    //-- puntero a un objeto CPunto
    CPunto **pAdeDirec = new CPunto*[nlados];
    //--- se leen los valores de los puntos
    for(int i=0; i<nlados; i++)
    {
      cout << "\n";
      cout << "Punto " << i+1 <<  "\n";
      cout << "x : "; cin >> x;
      cout << "y : "; cin >> y;
      pAdeDirec[i] = new CPunto(x,y);  //-- se crea el Punto y se enlaza
    }
    //--- Hallamos el perimetro
    double perimetro =0;
    for(int i=0; i<nlados-1; i++)
        perimetro += pAdeDirec[i]->distancia(*(pAdeDirec[i+1])) ;

    //--- se halla el ultimo lado
    perimetro += pAdeDirec[nlados-1]->distancia(*(pAdeDirec[0]));
    cout << "El perimetro del poligono es: " << perimetro<< "\n";
    //-- liberamos memoria---
    for(int i=0; i<nlados; i++)
        delete pAdeDirec[i];  //--- libera el objeto
    delete []pAdeDirec;
    pAdeDirec= nullptr;
    return 0;
}
