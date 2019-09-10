#ifndef CSCOREENGINEER_H
#define CSCOREENGINEER_H

#include "Engineer.h"
#include "MSC.h"
#include "NetworkElement.h"
#include "NMS.h"
#include <string>


using namespace std;

  class CSCoreEngineer : public Engineer {
		
	    public:
            CSCoreEngineer(NMS*, NetworkElement*, string);
            CSCoreEngineer(NetworkElement*, string);
             ~CSCoreEngineer();
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