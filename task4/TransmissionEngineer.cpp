#include "TransmissionEngineer.h"
#include <iostream>

TransmissionEngineer::TransmissionEngineer(NetworkElement* n, string cName){
    _networkElement = n;
    Name = cName;
}

TransmissionEngineer::TransmissionEngineer(NMS* e, NetworkElement* n, string cName){
    _networkElement = n;
    Name = cName;
    myNMS = e;
}

TransmissionEngineer::~TransmissionEngineer(){

}

void TransmissionEngineer::update(){ 
    BTS* _bts = dynamic_cast<BTS*> (_networkElement);
    if(_bts != NULL){
        alarmStatus = _bts->getAlarm();
    }
}

string TransmissionEngineer::getStatus(){
    return status;
}

void TransmissionEngineer::setStatus(string s){
    status = s;
    statusChanged();
}

void TransmissionEngineer::statusChanged(){
    myNMS->notify(this);
}