#ifndef MSC_H
#define MSC_H

#include "NetworkElement.h"
#include "EngineerIterator.h"
#include "ListOfCore.h"
#include <string>

using namespace std;

  class MSC : public NetworkElement {
		
	    public:
            MSC(string);
            ~MSC();
            string getAlarm();
            string setAlarm(string);
            void attach(Engineer* );
            void detach(Engineer* );
            void notify();
      private:     
            ListOfCore* core;
            
	};

#endif