#include "NetworkElement.h"
#include "RadioEngineer.h"
#include "TransmissionEngineer.h"
#include "PowerEngineer.h"
#include "PSCoreEngineer.h"
#include "CSCoreEngineer.h"
#include "BSC.h"
#include "Engineer.h"
#include "FaultsNMS.h"

#include <iostream>


int main() {
    BSC* bsc = new BSC("BSC01");
    
    FaultsNMS* fnms = new FaultsNMS(); 

    RadioEngineer* r = new RadioEngineer(fnms, bsc, "RadioEngineer Bob");
    TransmissionEngineer* t = new TransmissionEngineer(fnms, bsc, "TransmissionEngineer Rob");
    PowerEngineer* p = new PowerEngineer(fnms, bsc, "PowerEngineer Fred");
    PSCoreEngineer* ps = new PSCoreEngineer(fnms, bsc, "PSCoreEngineer Greg");
    CSCoreEngineer* cs = new CSCoreEngineer(fnms, bsc, "CSCoreEngineer Dan");

 
    bsc->setAlarm("minor");

    r->setStatus("busy");
}