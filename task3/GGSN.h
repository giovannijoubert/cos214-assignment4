#ifndef GGSN_H
#define GGSN_H

#include "NetworkElement.h"
#include "EngineerIterator.h"
#include "ListOfCore.h"
#include <string>

using namespace std;

  class GGSN : public NetworkElement {
		
	    public:
            GGSN(string);
            ~GGSN();
            string getAlarm();
            string setAlarm(string);
            void attach(Engineer* );
            void detach(Engineer* );
            void notify();
      private:     
            ListOfCore* core;
	};

#endif