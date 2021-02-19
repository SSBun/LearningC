//
//  FunctionOverloading.cpp
//  C++
//
//  Created by caishilin on 2021/2/19.
//

#include "FunctionOverloading.hpp"

/// When we voerloading a function, we can wreite them with same name, but use different params list.
/// What is params list?  Like these:

/// Different Type
void static swapV(int *a, int *b) {}
void static swapV(char *a, char *b) {}
/// Different Order
void static swapV(double *a, int *b) {}
void static swapV(int *a, double *b) {}
/// Different Count
void static swapV(int *a, int *b, int *c) {}

void FunctionOverloading::test() {
    int a = 100, b = 200;
    swapV(&a, &b);
    // When we invoke the function swapV(int *a, int *b), the compiler will generate a new function like '_Swap_int_int',
    // So in fact, the functin overloading is just to convert the function to several different functions.
}
