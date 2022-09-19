#include "variable.hpp"

char* appendCharToCharArray(char* array, char a)
{
    size_t len = strlen(array);

    char* ret = new char[len+2];

    strcpy(ret, array);    
    ret[len] = a;
    ret[len+1] = '\0';

    return ret;
}

void Variable::parseVars(){
    bool isNeg = true;
    int varLen = strlen(variables) + 1;
    int i;
    int _x = 0;
    this->power = 1;
    this->constant = 1;
    //std::cout << variables << std::endl;
    for(i = 0; i < varLen; ++i){
        if(i == 0){
            int j = 0;
            char* constant = "";
                while(variables[j] != NULL && variables[j] != 'x' && variables[j] != '^'){ 
                    // keep checking if there is constants before X.
                    if((char)variables[i] != 'x'){
                       constant = appendCharToCharArray(constant, (char)variables[j]);
                    } 
                    j++;
                }
                if(constant == ""){
                    this->constant = 1.0;
                    continue;
                } else{
                        this->constant = strtod(constant, NULL);
                        std::cout << this->constant << std::endl;
                }
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
            continue;
        }
    }
    this->power = this->power + _x;
    //printf("\nstring : %s, power:%f\n", variables, power);
}

float Variable::getY(float x){
    //printf("c:%f", constant);
    return this->isNeg ? -(constant * pow(x, power)) : (constant * pow(x, power));
}
