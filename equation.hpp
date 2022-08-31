#include "includes.h"
#include "variable.hpp"
#pragma once
class Equation{
    const char* string;
    Variable* vars;
    int varLength;
    double (*_inputX)(float x);
    public:
        Equation(){
            string = "x^2 + x^3 - x^6";
            parseString();
        }
        Equation(const char * equation){
            string = equation;
            parseString();
        }
        void setInputX(double (*new_func)(float x))
        {
            this->_inputX = new_func;
        }
        void parseString();
        void test(){
            for (int t = 0; t < 5; t++) {
                printf("%c sex", t);
            }
        };
        float inputX(float x){
            float y = 0;
            int len = varLength;
            for(int i = 0; i < len; ++i){
                float _temp = this->vars[i].getY(x);
                //printf("i:%d, f(x):%s%s, y:%f\n",i, this->vars[i].isNegative() ? "-" : "",this->vars[i].variables,_temp);
                y += _temp;
            }
            return y;
        };
};

