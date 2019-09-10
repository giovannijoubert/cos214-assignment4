#ifndef TRANSMISSIONENGINEER_H
#define TRANSMISSIONENGINEER_H

#include "Engineer.h"
#include "BTS.h"
#include "NetworkElement.h"
#include <string>


using namespace std;

  class TransmissionEngineer : public Engineer {
		
	    public:
            TransmissionEngineer(NetworkElement*, string);
             ~TransmissionEngineer();
            void update();
        private:
            string alarmStatus;
            NetworkElement* _networkElement;
	};

#endif