#ifndef NMS_H
#define NMS_H
class Engineer;
#include "Engineer.h"
#include <string>

using namespace std;

  class NMS {
		
	    public:
           NMS();
           ~NMS();
           virtual void notify(Engineer*)=0;
           virtual void createEngineer()=0;
            
	};

#endif