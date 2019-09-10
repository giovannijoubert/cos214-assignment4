#ifndef POWERENGINEER_H
#define POWERENGINEER_H

#include "Engineer.h"
#include "BTS.h"
#include "NetworkElement.h"
#include <string>


using namespace std;

  class PowerEngineer : public Engineer {
		
	    public:
            PowerEngineer(NetworkElement*, string);
             ~PowerEngineer();
            void update();
        private:
            string alarmStatus;
            NetworkElement* _networkElement;
	};

#endif