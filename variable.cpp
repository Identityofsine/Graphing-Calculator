#include "variable.hpp"

void Variable::parseVars(){
    bool isNeg = true;
    int varLen = strlen(variables) + 1;
    int i;
    int _x = 0;
    this->power = 0;
    this->constant = 1;
    //std::cout << variables << std::endl;
    for(i = 0; i < varLen; ++i){
        if(i == 0){
            if((char)variables[i] != 'x'){
                this->constant = strtod(&variables[i], NULL);
                continue;
            } 
            else{}
            this->constant = 1.0;
        }
        if(variables[i] == 'x'){
            _x + 1;
            continue;
        }
        if(variables[i] == '^'){
            try
            {
                this->power = _x + atof((&variables[i + 1]));
            }
            catch(const std::exception& e)
            {
                std::cout << "Missing Power..." << std::endl;
                this->power = _x + 1;
            }
            
        }
    }
    this->power = this->power + _x;
    //printf("\nstring : %s, power:%f\n", variables, power);
}

double Variable::getY(float x){
    //printf("c:%f", constant);
    return this->isNeg ? -(constant * pow(x, power)) : (constant * pow(x, power));
}