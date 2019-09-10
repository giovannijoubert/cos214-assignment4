#include "RadioEngineer.h"
#include <iostream>

RadioEngineer::RadioEngineer(NetworkElement* n, string cName){
    _networkElement = n;
    Name = cName;
}

RadioEngineer::~RadioEngineer(){

}

void RadioEngineer::update(){ 
    BSC* _bsc = dynamic_cast<BSC*> (_networkElement);
    if(_bsc != NULL){
        alarmStatus = _bsc->getAlarm(); 
    }else{
        BTS* _bts = dynamic_cast<BTS*> (_networkElement);
        if(_bts != NULL){
            alarmStatus = _bts->getAlarm();
        }
    }
}