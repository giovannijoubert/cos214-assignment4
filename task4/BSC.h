#ifndef BSC_H
#define BSC_H

#include "NetworkElement.h"
#include "VectorOfOperations.h"
#include "OperationsIterator.h"
#include <string>

using namespace std;

  class BSC : public NetworkElement {
		
	    public:
            BSC(string);
            ~BSC();
            string getAlarm();
            string setAlarm(string);
        
            void attach(Engineer* );
            void detach(Engineer* );
            void notify();
      private: 
            VectorOfOperations* operations;
            
	};

#endif