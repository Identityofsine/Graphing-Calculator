#include "table.h"
#include "includes.h"


double* returnTable(int min, int max, double deltaX, Equation equation){
    double* table = new double[(int)(abs((max - min)) / deltaX)];
    //(double *)malloc((sizeof(double) * (int)(abs((max - min)) / deltaX) ));
    //(double *)malloc((sizeof(double) * (max - min)) / deltaX);
    int size = abs((max - min)) / deltaX;
    double dX = min;
    int i = 0;
    while(dX < max && i < size){
        table[i++] = equation.inputX(dX);
        dX += deltaX;
    }
    return table;
}