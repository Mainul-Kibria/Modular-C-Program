#include "Initializer.h"

Initializer::Initializer(){
    std::cout << "Constructor initiated from Initializer class \n";
}

Input& Initializer::getinputaddress(){
    return input;
}

Output& Initializer::getoutputaddress(){
    return output;
}


Initializer::~Initializer(){
    std::cout << "Destructor initiated from Initializer class\n";
}