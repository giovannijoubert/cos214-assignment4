#ifndef POWERENGINEER_H
#define POWERENGINEER_H

#include "Engineer.h"
#include "BTS.h"
#include "NetworkElement.h"
#include <string>


using namespace std;

  class PowerEngineer : public Engineer {
		
	    public:
            PowerEngineer(NMS*, NetworkElement*, string);
            PowerEngineer(NetworkElement*, string);
            ~PowerEngineer();
            string getStatus();
            void setStatus(string);
            void statusChanged();
            void update();
        private:
            string status;
            string alarmStatus;
            NetworkElement* _networkElement;
	};

#endif