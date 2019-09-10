#include "PSCoreEngineer.h"
#include <iostream>

PSCoreEngineer::PSCoreEngineer(NetworkElement* n, string cName){
    _networkElement = n;
    Name = cName;
}

PSCoreEngineer::~PSCoreEngineer(){

}

void PSCoreEngineer::update(){ 
    GGSN* _ggsn = dynamic_cast<GGSN*> (_networkElement);
    if(_ggsn != NULL)
    alarmStatus = _ggsn->getAlarm();
}