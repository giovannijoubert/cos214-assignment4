#ifndef ENGINEERCOLLECTION_H
#define ENGINEERCOLLECTION_H

#include "Engineer.h"
#include "EngineerIterator.h"
#include <string>

using namespace std;

  class EngineerCollection {
		
	    public:
            EngineerCollection(){};
            virtual EngineerIterator* createEngineerIterator(){};
            virtual void addEngineer(Engineer*){};
            virtual void removeEngineer(){};
            virtual bool isEmpty(){};      
	};

#endif