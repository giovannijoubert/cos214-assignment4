#ifndef BTS_H
#define BTS_H

#include "NetworkElement.h"
#include <string>

using namespace std;

  class BTS : public NetworkElement {
		
	    public:
            BTS(string);
            ~BTS();
            string getAlarm();
            string setAlarm(string);
	};

#endif