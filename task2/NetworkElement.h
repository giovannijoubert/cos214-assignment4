#ifndef NETWORKELEMENT_H
#define NETWORKELEMENT_H

#include "Engineer.h"
#include <string>
#include <list> 

using namespace std;

  class NetworkElement {
		
	    public:
            NetworkElement();
            virtual ~NetworkElement();
            void attach(Engineer* );
            void detach(Engineer* );
            void notify();
            string name;
            string alarmState;
        private:
             
            list<Engineer*> engList;

	};

#endif