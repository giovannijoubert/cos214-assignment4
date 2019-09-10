#ifndef GGSN_H
#define GGSN_H

#include "NetworkElement.h"
#include <string>

using namespace std;

  class GGSN : public NetworkElement {
		
	    public:
            GGSN(string);
            ~GGSN();
            string getAlarm();
            string setAlarm(string);
	};

#endif