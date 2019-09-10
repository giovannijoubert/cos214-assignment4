#include "PowerEngineer.h"
#include <iostream>

PowerEngineer::PowerEngineer(NetworkElement* n, string cName){
    _networkElement = n;
    Name = cName;
}

PowerEngineer::~PowerEngineer(){

}

void PowerEngineer::update(){
    BTS* _bts = dynamic_cast<BTS*> (_networkElement);
    if(_bts != NULL)
    alarmStatus = _bts->getAlarm();
}