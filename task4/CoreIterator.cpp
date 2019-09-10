#include "CoreIterator.h"
#include <iostream>

CoreIterator::CoreIterator(Engineer* e){
    firstEngineer = e;
    currentEngineer = e;
}

CoreIterator::~CoreIterator(){

}

    Engineer * CoreIterator::first(){
        return firstEngineer;
    }

    Engineer * CoreIterator::next(){
        currentEngineer = currentEngineer->getNext();
        return currentEngineer;
    }

    bool CoreIterator::hasNext(){
        if(currentEngineer->getNext() != NULL)
            return true;

        return false;
    }

    Engineer * CoreIterator::current(){
        return currentEngineer;
    }