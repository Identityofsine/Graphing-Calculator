#include "table.h"
#include "includes.h"


double* returnTable(int min, int max, double deltaX, Equation equation){
    double* table = (double *)malloc((sizeof(double) * (int)(abs((max - min)) * (1 / deltaX)) ));
    //(double *)malloc((sizeof(double) * (max - min)) / deltaX);
    int size = abs((max - min)) / deltaX;
    int dX = min;
    for(int i = 0; i < size; ++i){
        table[i] = equation.inputX(dX);
        dX += deltaX;
    }
    return table;
}