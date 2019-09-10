#include "MSC.h"
#include <iostream>

MSC::MSC(string cName){
    name = cName;
    core = new ListOfCore();
}

MSC::~MSC(){

}

string MSC::getAlarm(){
    return alarmState;
}

string MSC::setAlarm(string Alarm){
    alarmState = Alarm;
}

void MSC::attach(Engineer* e){
   core->addEngineer(e);
}

void MSC::detach(Engineer* e){
  core->removeEngineer(e);
}

void MSC::notify(){
    EngineerIterator* it = core->createEngineerIterator();
    while(it->current() != NULL){
        it->current()->update();
        cout << name + " changed status to " + alarmState + "! Notifying " + it->current()->Name << endl;
        it->next();
    }  
}
