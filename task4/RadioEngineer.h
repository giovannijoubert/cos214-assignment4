#ifndef RADIOENGINEER_H
#define RADIOENGINEER_H

#include "Engineer.h"
#include "NetworkElement.h"
#include "BTS.h"
#include "BSC.h"
#include "NMS.h"
#include <string>


using namespace std;

  class RadioEngineer : public Engineer {
		
	    public:
            RadioEngineer(NMS*, NetworkElement*, string);
            RadioEngineer(NetworkElement*, string);
             ~RadioEngineer();
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