#include "Engineer.h"
#include <iostream>

Engineer::Engineer(){
    nextEngineer = NULL;
}

Engineer::~Engineer(){

}

Engineer* Engineer::getNext(){
    return nextEngineer;
}

void Engineer::setNext(Engineer* e){
    nextEngineer = e;
}


void Engineer::statusChaged(){
}

string Engineer::getStatus(){
    return "";
}