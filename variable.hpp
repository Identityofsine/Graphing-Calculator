#include "includes.h"
#ifndef VARIABLE // include guard
#define VARIABLE

    class Variable{
        bool isNeg = false;
        double constant = 0;
        float power = 0;
        public:
            const char* variables;
            Variable(const char* sorted, bool isNeg){
                //MAKE SURE THE VARS ARE SORTED ALREADY
                char temp[strlen(sorted) + 1];
                strcpy(temp, sorted);
                variables = strdup(temp);
                this->parseVars();
                this->isNeg = isNeg;
            }
            void parseVars();
            float getY(float x);
            bool isNegative(){return isNeg;}
            const char* getChar(){ return variables;}

    };


#endif