#include "NetworkElement.h"
#include "RadioEngineer.h"
#include "PowerEngineer.h"
#include "TransmissionEngineer.h"
#include "BTS.h"

#include "Engineer.h"

#include <iostream>


int main() {
  
    BTS* bts = new BTS("BTS01");
    RadioEngineer* r = new RadioEngineer(bts, "RadioEngineer Bob");
    PowerEngineer* p = new PowerEngineer(bts, "PowerEngineer Sam");
    TransmissionEngineer* t = new TransmissionEngineer(bts, "TransmissionEngineer Fred");
    
    bts->attach(r);
    bts->attach(p);
    bts->attach(t); 

    bts->setAlarm("critical");
 
    bts->notify();

    bts->setAlarm("clear");

    bts->notify();  

}