# Graphing-Calculator

## This Program is in it's infancy state.
There is really nothing too crazy about this program **YET**.However it eventually will be able to calculate any function defined by f(x) = x^2.
Currently it can take functions like
>x^2 + x^1 + 5x - 1 + 1x^2 - 3 or -x^2 + x...

As of right now it is limited, all numbers must be in 0-9 range, writing an algorithm that sorts this issue is a big TODO 
## Usage
*In it's current state many things are hard-coded in*
To play around with it in it's current state, edit the parameter in main.cpp.

```C++
int main(){
    Equation test = Equation(YOUR EQUATION INPUT HERE);
    std::cout << test.inputX(3) << std::endl;
    return 0;
}
```
<sub>Eventually, equations will be able to be inputed from the console.</sub>

### Build and Run
>g++ main.cpp variable.cpp equation.cpp table.cpp -o calc.out; ./calc.out;