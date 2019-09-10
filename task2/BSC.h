#ifndef BSC_H
#define BSC_H

#include "NetworkElement.h"
#include <string>

using namespace std;

  class BSC : public NetworkElement {
		
	    public:
            BSC(string);
            ~BSC();
            string getAlarm();
            string setAlarm(string);
        
            
	};

#endif