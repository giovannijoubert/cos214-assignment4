#include "MSC.h"
#include <iostream>

MSC::MSC(string cName){
    name = cName;
}

MSC::~MSC(){

}

string MSC::getAlarm(){
    return alarmState;
}

string MSC::setAlarm(string Alarm){
    alarmState = Alarm;
}