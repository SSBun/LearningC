//
//  Namespace.cpp
//  C++
//
//  Created by Rebecca on 2021/1/10.
//

#include "Namespace.hpp"
#include <iostream>

using namespace std;

void Namespace::AreaOne::run() {
    cout << "Running from area one" << endl;
}

void Namespace::AreaTwo::run() {
    cout << "Running from area two" << endl;
}

void Namespace::run() {
    cout << "Running from origin area" << endl;
}

void Namespace::test() {
    run();
    AreaOne::run();
    AreaTwo::run();
    // Here we create an alias "AreaTwo" for "AreaOne".
    namespace AreaTwo = AreaOne;
    // This method calls the method 'run()' in "AreaOne".
    AreaTwo::run();
}
