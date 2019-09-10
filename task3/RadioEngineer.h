#ifndef RADIOENGINEER_H
#define RADIOENGINEER_H

#include "Engineer.h"
#include "NetworkElement.h"
#include "BTS.h"
#include "BSC.h"
#include <string>


using namespace std;

  class RadioEngineer : public Engineer {
		
	    public:
            RadioEngineer(NetworkElement*, string);
             ~RadioEngineer();
            void update();
        private:
            string alarmStatus;
            NetworkElement* _networkElement;
	};

#endif