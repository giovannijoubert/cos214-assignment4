#ifndef MSC_H
#define MSC_H

#include "NetworkElement.h"
#include <string>

using namespace std;

  class MSC : public NetworkElement {
		
	    public:
            MSC(string);
            ~MSC();
            string getAlarm();
            string setAlarm(string);
            
	};

#endif