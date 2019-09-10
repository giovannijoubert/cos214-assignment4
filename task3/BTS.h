#ifndef BTS_H
#define BTS_H

#include "NetworkElement.h"
#include "VectorOfOperations.h"
#include "OperationsIterator.h"
#include <string>

using namespace std;

  class BTS : public NetworkElement {
		
	    public:
            BTS(string);
            ~BTS();
            string getAlarm();
            string setAlarm(string);

            void attach(Engineer* );
            void detach(Engineer* );
            void notify();
      private: 
            VectorOfOperations* operations;
	};

#endif