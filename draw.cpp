#include "includes.h"
/*
[x x x x x,
 x x x x x,
 x x x x x,
 x x x x x,
 x x x x x] 
 be able to print like this and edit x with a #, simple drawing.
*/

class Graph{
    char* *graph;// multi dimensonial array 5x5;
    int size;
    Graph(){
        size = (sizeof(char*) * sizeof(char) * 5) * 5;
        graph = (char **)malloc(size);
        printf("size:%d,", size);
        
    }
    public:
    void fillGraph(){
        
    }
};