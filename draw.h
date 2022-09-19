#include "includes.h"
#include <algorithm>

/*
[x x x x x,
 x x x x x,
 x x x x x,
 x x x x x,
 x x x x x] 
 be able to print like this and edit x with a #, simple drawing.
*/

template <typename T>
T clip(const T& n, const T& lower, const T& upper) {
  return std::max(lower, std::min(n, upper));
}

class Graph{
    char** graph;// multi dimensonial array 5x5;
    int size = 5;
    public:
    Graph(int size){
        this->size = size;
        graph = new char*[size];
        fillGraph();
    }
    void fillGraph(){
        for(int i = 0; i < size; i++){
            graph[i] = new char[size];
            for(int j = 0; j < size; j++){
                if(j == size / 2)
                    graph[i][j] = '|';
                else if(i == size / 2)
                    graph[i][j] = '-';
                else
                    graph[i][j] = ' ';
            }
        }
    }
    void displayGraph(){
        std::cout << "\n[\n";
        for(int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                printf("%c ",graph[i][j]);
            }
            if(i != size - 1)
                std::cout << "\n";
        }
        std::cout << "\n]";
    }
    void plotPoint(int x, int y){
        int middleX = (int)clip(size / 2 - x, 0, size - 1);
        int middleY = (int)clip(size / 2 + (1 * y), 0, size - 1);
        graph[middleY][middleX] = 'x';
    }
};

