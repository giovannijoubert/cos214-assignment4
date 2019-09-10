#include "BTS.h"
#include <iostream>

BTS::BTS(string cName){
    name = cName;
}

BTS::~BTS(){

}

string BTS::getAlarm(){
    return alarmState;
}

string BTS::setAlarm(string s){
    alarmState = s;
}