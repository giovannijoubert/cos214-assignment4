#include "NetworkElement.h"
#include "CSCoreEngineer.h"
#include "MSC.h"

#include "Engineer.h"

#include <iostream>


int main() {
  
    MSC* msc = new MSC("MSC01");
    CSCoreEngineer* cs = new CSCoreEngineer(msc, "CSCoreEngineer Bob");
    CSCoreEngineer* cs2 = new CSCoreEngineer(msc, "CSCoreEngineer Fredrick");
   

    msc->attach(cs);
    msc->attach(cs2);

    msc->setAlarm("major");
 
    msc->notify();

    msc->setAlarm("clear");

    msc->notify();  

}