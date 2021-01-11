//
//  ConstType.cpp
//  C++
//
//  Created by Rebecca on 2021/1/10.
//

#include "ConstType.hpp"

namespace ConstType {

/* C treats const like a normal value, reading data in memeory, C++ treats
   const more like a compile-time #deine, a compress of value substitute. */
void feature1() {
    // Here const value in C++ is similar to #define in C.
    const int constValue = 100;
       
    // Force the value of constValue to 200
    int *vp = (int *)&constValue;
    *vp = 200;
    
    // v is 200 ?
    int v = constValue;
    
    // 200
    std::cout << *vp << std::endl;
    // v is 100 not 200
    /* In C++, the value of v is assigned constValue(100) at compile time,
     so the expression `int v = constValue` is equal to `int v = 100`. */
    std::cout << v << std::endl;
}
}

void ConstType::test() {
    feature1();
}

// Declare a global value, you can assign it in other files.
 int consttype_globalValue = 100;

/* In C++, const global value can only be assigned in current file.
   it similar to static */
const int fileGlobalValue = 200;
