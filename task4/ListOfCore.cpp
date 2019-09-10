#include "ListOfCore.h"
#include <iostream>

ListOfCore::ListOfCore(){
    startingPoint = NULL;
}

ListOfCore::~ListOfCore(){

}

EngineerIterator* ListOfCore::createEngineerIterator(){
    return new CoreIterator(startingPoint);
}

void ListOfCore::addEngineer(Engineer* e){
        if (isEmpty()) {
           startingPoint = e;
           startingPoint->setNext(NULL);
        } else {
            Engineer * traverser = startingPoint;
            while(traverser->getNext() != NULL)
                traverser = traverser->getNext();
            traverser->setNext(e);
        }
}

void ListOfCore::removeEngineer(Engineer* e){
    if(! isEmpty()){
            Engineer * traverser = startingPoint;
            while(traverser->getNext() != NULL){
                if(traverser->getNext() == e){
                    traverser->setNext(e->getNext());
                    break;
                }
            }
    }
}

bool ListOfCore::isEmpty(){
   if(startingPoint == NULL)
    return true;

    return false;
}
