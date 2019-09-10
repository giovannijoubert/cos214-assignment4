#include "BTS.h"
#include <iostream>

BTS::BTS(string cName){
    name = cName;
    operations = new VectorOfOperations();
}

BTS::~BTS(){

}

string BTS::getAlarm(){
    return alarmState;
}

string BTS::setAlarm(string s){
    alarmState = s;
}

void BTS::attach(Engineer* e){
    operations->addEngineer(e);
}

void BTS::detach(Engineer* e){
    operations->removeEngineer(e);
}

void BTS::notify(){
    EngineerIterator* it = operations->createEngineerIterator();
    while (it->hasNext()){
        it->current()->update();
        cout << name + " changed status to " + alarmState + "! Notifying " + it->current()->Name << endl;
        it->next();
    }  
  
}