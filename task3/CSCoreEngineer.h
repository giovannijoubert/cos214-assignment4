#ifndef CSCOREENGINEER_H
#define CSCOREENGINEER_H

#include "Engineer.h"
#include "MSC.h"
#include "NetworkElement.h"
#include <string>


using namespace std;

  class CSCoreEngineer : public Engineer {
		
	    public:
            CSCoreEngineer(NetworkElement*, string);
             ~CSCoreEngineer();
            void update();
        private:
            string alarmStatus;
            NetworkElement* _networkElement;
	};

#endif