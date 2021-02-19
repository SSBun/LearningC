//
//  InlineFunction.hpp
//  C++
//
//  Created by caishilin on 2021/2/19.
//

#ifndef InlineFunction_hpp
#define InlineFunction_hpp

#include <stdio.h>

namespace InlineFunction {

/// I suggest implement it where the inline function is declared. And only write it in header file.
inline int SQ(int y) { return y * y; }

/// The inline function can be used to replace the macro #define.
#define SQ(y) ((y) * (y))

}

#endif /* InlineFunction_hpp */
