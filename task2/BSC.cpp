#include "BSC.h"
#include <iostream>

BSC::BSC(string cName){
    name = cName;
}

BSC::~BSC(){

}

string BSC::getAlarm(){
    return alarmState;
}

string BSC::setAlarm(string Alarm){
    alarmState = Alarm;
}