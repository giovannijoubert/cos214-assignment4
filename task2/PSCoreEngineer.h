#ifndef PSCOREENGINEER_H
#define PSCOREENGINEER_H

#include "Engineer.h"
#include "GGSN.h"
#include "NetworkElement.h"
#include <string>


using namespace std;

  class PSCoreEngineer : public Engineer {
		
	    public:
            PSCoreEngineer(NetworkElement*, string);
             ~PSCoreEngineer();
            void update();
        private:
            string alarmStatus;
            NetworkElement* _networkElement;
	};

#endif