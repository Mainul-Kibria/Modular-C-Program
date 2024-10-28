#include "Input.h"
#include "Output.h"
#include "Initializer.h"

int main(){

Initializer initializer;
Input& inpt = initializer.getinputaddress();
Output& otpt = initializer.getoutputaddress();

while(true){
    inpt.getinput();
    if(inpt.storage == "exit" || inpt.storage == "x" || inpt.storage == "close"){
        break;
    }

    else {
        otpt.print(inpt.storage);
    }

}
    return 0;
}