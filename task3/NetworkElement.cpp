#include "NetworkElement.h"
#include <iostream>

NetworkElement::NetworkElement(){

}

NetworkElement::~NetworkElement(){

}

void NetworkElement::attach(Engineer* e){
    engList.push_back(e); 
}

void NetworkElement::detach(Engineer* e){
  engList.remove(e);
}

void NetworkElement::notify(){ 
    list <Engineer*> :: iterator it; 
    for(it = engList.begin(); it != engList.end(); ++it) {
        (*it)->update();
        cout << name + " changed status to " + alarmState + "! Notifying " + (*it)->Name << endl;
    } 
}
