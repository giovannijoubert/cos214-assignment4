#include "GGSN.h"
#include <iostream>

GGSN::GGSN(string cName){
    name = cName;
}

GGSN::~GGSN(){

}

string GGSN::getAlarm(){
    return alarmState;
}

string GGSN::setAlarm(string Alarm){
    alarmState = Alarm;
}