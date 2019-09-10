#include "BSC.h"
#include <iostream>

BSC::BSC(string cName){
    name = cName;
    operations = new VectorOfOperations();
}

BSC::~BSC(){

}

string BSC::getAlarm(){
    return alarmState;
}

string BSC::setAlarm(string Alarm){
    alarmState = Alarm;
}

void BSC::attach(Engineer* e){
    operations->addEngineer(e);
}

void BSC::detach(Engineer* e){
    operations->removeEngineer(e);
}

void BSC::notify(){
    EngineerIterator* it = operations->createEngineerIterator();
    while (it->hasNext()){
        it->current()->update();
        cout << name + " changed status to " + alarmState + "! Notifying " + it->current()->Name << endl;
        it->next();
    }  
}
  