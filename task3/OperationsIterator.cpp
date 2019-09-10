#include "OperationsIterator.h"
#include <iostream>


OperationsIterator::OperationsIterator(vector<Engineer*> v){
    cout << v.at(0)->Name << endl;
    currentPos = 1;
    itList.assign(v.begin(),v.end());
}

OperationsIterator::~OperationsIterator(){

}


bool OperationsIterator::hasNext(){
    if (current()->getNext() != NULL)
        return true;

    return false;
}

Engineer * OperationsIterator::first(){
    itList.front();
}

Engineer * OperationsIterator::next(){
    currentPos++;
    itList.at(currentPos);
 
}

Engineer * OperationsIterator::current(){
    itList.at(currentPos);
}