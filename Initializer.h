#pragma once
#include "Input.h"
#include "Output.h"
class Initializer{
    public:
    Initializer();
    Input input;
    Output output;
   Input& getinputaddress();
   Output& getoutputaddress();
    ~Initializer();
    
};