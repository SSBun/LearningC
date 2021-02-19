//
//  main.cpp
//  C++
//
//  Created by Rebecca on 2021/1/2.
//

#include <iostream>
#include "Namespace.hpp"
#include "ConstType.hpp"
#include "CMemory.hpp"

int main(int argc, const char * argv[]) {
//    Namespace::test();
//    ConstType::test();
//    CMemory::checkAddress();
    using namespace std;
    cout << "------------" << endl;
    int *ages = new int[10];
    cout << "ages size: " << sizeof(*ages) << endl;
    
    delete[] ages;
    
    return 0;
}
