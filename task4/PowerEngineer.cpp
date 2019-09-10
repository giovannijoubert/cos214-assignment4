#include "PowerEngineer.h"
#include <iostream>

PowerEngineer::PowerEngineer(NetworkElement* n, string cName){
    _networkElement = n;
    Name = cName;
}

PowerEngineer::~PowerEngineer(){

}

PowerEngineer::PowerEngineer(NMS* e, NetworkElement* n, string cName){
    myNMS = e;
    _networkElement = n;
    Name = cName;
}

void PowerEngineer::update(){
    BTS* _bts = dynamic_cast<BTS*> (_networkElement);
    if(_bts != NULL)
    alarmStatus = _bts->getAlarm();
}

string PowerEngineer::getStatus(){
    return status;
}

void PowerEngineer::setStatus(string s){
    status = s;
    statusChanged();
}

void PowerEngineer::statusChanged(){
    myNMS->notify(this);
}