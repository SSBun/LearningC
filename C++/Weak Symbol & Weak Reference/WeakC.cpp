//
//  WeakC.cpp
//  C++
//
//  Created by caishilin on 2021/2/19.
//

#include "WeakC.hpp"

/// This is a strong symbol, the strong symbol can only was defined once, if other files redefine the same symbol will occur an compile error.
int WeakC::strongSymbol = 100;
/// This is a weak symbol, the weak symbol can be defined more than once, the compiler will choose the symbol that occupy the max memory space.
///  If other files have defined a strong symbol, choose that strong symbol.
int __attribute__((weak)) WeakC::weakSymbol;

void WeakC::test() {
    // Strong reference, if strongSymbol or weakSymbol was't defined, the compiler will take an error.
    int result = strongSymbol + weakSymbol;
    
    // The weak symbol's address is 0x0000
    if (&weakSymbol) {
        // The `weakSymbol` has been defined.
        printf("the weak symbol is: %d", weakSymbol);
    } else {
        printf("the weak symbol is not defined");
    }
}

