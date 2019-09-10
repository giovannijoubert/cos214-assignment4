#include "CSCoreEngineer.h"
#include <iostream>

CSCoreEngineer::CSCoreEngineer(NetworkElement* n, string cName){
    _networkElement = n;
    Name = cName;
}

CSCoreEngineer::~CSCoreEngineer(){

}

void CSCoreEngineer::update(){
    MSC* _msc = dynamic_cast<MSC*> (_networkElement);
    if(_msc != NULL)
    alarmStatus = _msc->getAlarm();
}