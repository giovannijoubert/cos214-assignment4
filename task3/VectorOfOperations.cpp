#include "VectorOfOperations.h"
#include <iostream>
#include <algorithm>

VectorOfOperations::VectorOfOperations(){
}

VectorOfOperations::~VectorOfOperations(){

}

EngineerIterator* VectorOfOperations::createEngineerIterator(){
    EngineerIterator* e = new OperationsIterator(list);
    return e;
}

void VectorOfOperations::addEngineer(Engineer* e){
    list.push_back(e);
}
void VectorOfOperations::removeEngineer(Engineer* e){
    list.erase(std::remove(list.begin(), list.end(), e), list.end());
}
bool VectorOfOperations::isEmpty(){
    if(list.empty())
        return true;
    
    return false;
}
