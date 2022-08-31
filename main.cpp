#include "includes.h"
#include "variable.hpp"
#include "equation.hpp"

double sex(float x){
    //unsafe!!!
    return x;
}

int main(){
    Equation test = Equation("x^4 - x^3 + x^2 - x^1 + 5");
    std::cout << test.inputX(3) << std::endl;
    return 0;
}
