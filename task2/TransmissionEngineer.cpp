#include "TransmissionEngineer.h"
#include <iostream>

TransmissionEngineer::TransmissionEngineer(NetworkElement* n, string cName){
    _networkElement = n;
    Name = cName;
}

TransmissionEngineer::~TransmissionEngineer(){

}

void TransmissionEngineer::update(){ 
    BTS* _bts = dynamic_cast<BTS*> (_networkElement);
    if(_bts != NULL){
        alarmStatus = _bts->getAlarm();
    }
}