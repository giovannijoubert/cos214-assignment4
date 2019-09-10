#include "CSCoreEngineer.h"
#include <iostream>

CSCoreEngineer::CSCoreEngineer(NetworkElement* n, string cName){
    _networkElement = n;
    Name = cName;
}

CSCoreEngineer::~CSCoreEngineer(){

}

CSCoreEngineer::CSCoreEngineer(NMS* e, NetworkElement* n, string cName){
    myNMS = e;
    _networkElement = n;
    Name = cName;
}

void CSCoreEngineer::update(){
    MSC* _msc = dynamic_cast<MSC*> (_networkElement);
    if(_msc != NULL)
    alarmStatus = _msc->getAlarm();
}

string CSCoreEngineer::getStatus(){
    return status;
}

void CSCoreEngineer::setStatus(string s){
    status = s;
}


void CSCoreEngineer::statusChanged(){
    myNMS->notify(this);
}