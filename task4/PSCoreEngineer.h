#ifndef PSCOREENGINEER_H
#define PSCOREENGINEER_H

#include "Engineer.h"
#include "GGSN.h"
#include "NetworkElement.h"
#include "NMS.h"
#include <string>


using namespace std;

  class PSCoreEngineer : public Engineer {
		
	    public:
            PSCoreEngineer(NMS*, NetworkElement*, string);
            PSCoreEngineer(NetworkElement*, string);
             ~PSCoreEngineer();
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