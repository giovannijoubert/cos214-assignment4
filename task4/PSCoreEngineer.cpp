#include "PSCoreEngineer.h"
#include <iostream>

PSCoreEngineer::PSCoreEngineer(NetworkElement* n, string cName){
    _networkElement = n;
    Name = cName;
}

PSCoreEngineer::~PSCoreEngineer(){

}

PSCoreEngineer::PSCoreEngineer(NMS* e, NetworkElement* n, string cName){
    myNMS = e;
    _networkElement = n;
    Name = cName;
}

void PSCoreEngineer::update(){ 
    GGSN* _ggsn = dynamic_cast<GGSN*> (_networkElement);
    if(_ggsn != NULL)
    alarmStatus = _ggsn->getAlarm();
}


string PSCoreEngineer::getStatus(){
    return status;
}

void PSCoreEngineer::setStatus(string s){
    status = s;
    statusChanged();
}

void PSCoreEngineer::statusChanged(){
    myNMS->notify(this);
}