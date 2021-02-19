//
//  FunctionDefaultParameter.cpp
//  C++
//
//  Created by caishilin on 2021/2/19.
//

#include "FunctionDefaultParameter.hpp"

///  When you declare a function that has default params, the one default param can only be declared once.
void static runExample(int, int, char = 'c');
void static runExample(int, int = 200, char);

void FunctionDefaultParameter::test() {
    runExample(100);
    runExample(100, 200);
    runExample(100, 200, 's');
}

/// The default params must be seted at the end of the function.
void static runExample(int param1, int param2, char param3) {
    
}
