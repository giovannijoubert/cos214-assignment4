#ifndef FAULTSNMS_H
#define FAULTSNMS_H
#include "NMS.h"
#include "Engineer.h"
#include <string>

using namespace std;

  class FaultsNMS : public NMS {
		
	    public:
           FaultsNMS();
           ~FaultsNMS();
           void notify(Engineer *);
          void createEngineer(){};    
	};

#endif