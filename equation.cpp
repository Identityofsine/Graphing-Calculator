#include "equation.hpp"

void Equation::parseString(){
    char* _copy = strdup(this->string);
    const char* deliminators = " ";
    char* temp = strtok(_copy, deliminators);
    char* *_variables = (char**)malloc(100);
    int i = 0;
    while (temp != NULL){
        _variables[i++] = temp;
        //printf("#: %s\n", temp);
        temp = strtok(NULL, deliminators);
    }
    i = i;
    int q = 0;
    int p = 0;
    Variable* variables = (Variable*)malloc(sizeof(Variable) * (i - q) + 1);
    for(int z = 0; z < i; ++z){
        for(int f = 0; f < strlen(_variables[z]); f++){
            //std::cout << _variables[z] << std::endl; DEBUG
            if(z == 0 && (_variables[z][0] != '+' && _variables[z][0] != '-')){
                *((variables) + p++) = Variable(strdup(_variables[z]), false);
                break;
            }
            switch (_variables[z][f])
            {
            case '+':
                //printf("p:%d\n", p); DEBUG
                *((variables) + p++) = Variable(strdup(_variables[z + 1]), false);
                q++;
                continue;
                break;
            case '-':
                //printf("p:%d\n", q); DEBUG
                *((variables) + p++) = Variable(strdup(_variables[z + 1]), true);
                q++;
                continue;
                break;
            default:
                continue;
                break;
            }
        }
        
    }
    free(temp);
    free(_copy);
    free(_variables);
    this->vars = variables;
    this->varLength = i - q ;
    //free(variables);
}