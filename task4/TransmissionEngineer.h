#ifndef TRANSMISSIONENGINEER_H
#define TRANSMISSIONENGINEER_H

#include "Engineer.h"
#include "BTS.h"
#include "NetworkElement.h"
#include "NMS.h"
#include <string>


using namespace std;

  class TransmissionEngineer : public Engineer {
		
	    public:
            TransmissionEngineer(NMS*, NetworkElement*, string );
            TransmissionEngineer(NetworkElement*, string);
             ~TransmissionEngineer();
            void update();
            string getStatus();
            void setStatus(string);
            void statusChanged();
        private:
            string status;
            string alarmStatus;
            NetworkElement* _networkElement;
	};

#endif