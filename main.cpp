#include "includes.h"
#include "variable.hpp"
#include "equation.hpp"
#include "table.h"

using namespace std;
void userInput(char *equation, long buffer){
    cout << "Enter Equation" << endl;
    cin.getline(equation, buffer);
}

int main(){
    char equation[80];
    userInput(equation, sizeof(equation));
    Equation test = Equation(equation);
    int min,max;
    double deltaX;
    min = -10;
    max = 10 + 1;
    deltaX = .5;
    double* table = returnTable(min, max, deltaX, test);
    int size = (max - min) / deltaX;
    cout << "Equation : " << equation << endl;
    for(int i = 0; i < size; ++i){
        printf("#x : %f, f(x):%f\n", min + (double)(i * deltaX), table[i]);
    }
    return 0;
}
