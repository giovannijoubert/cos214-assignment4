#include "GGSN.h"
#include <iostream>

GGSN::GGSN(string cName){
    name = cName;
    core = new ListOfCore();
}

GGSN::~GGSN(){

}

string GGSN::getAlarm(){
    return alarmState;
}

string GGSN::setAlarm(string Alarm){
    alarmState = Alarm;
}

void GGSN::attach(Engineer* e){
   core->addEngineer(e);
}

void GGSN::detach(Engineer* e){
  core->removeEngineer(e);
}

void GGSN::notify(){
    EngineerIterator* it = core->createEngineerIterator();
    while(it->current() != NULL){
        it->current()->update();
        cout << name + " changed status to " + alarmState + "! Notifying " + it->current()->Name << endl;
        it->next();
    }  
}