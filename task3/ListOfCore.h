#ifndef LISTOFCORE_H
#define LISTOFCORE_H

#include "Engineer.h"
#include "EngineerCollection.h"
#include "EngineerIterator.h"
#include "CoreIterator.h"
#include <string>

using namespace std;

  class ListOfCore : public EngineerCollection {
		
	    public:
            ListOfCore();
            ~ListOfCore();
            EngineerIterator* createEngineerIterator();
            void addEngineer(Engineer*);
            void removeEngineer(Engineer*);
            bool isEmpty();      
        protected:
            Engineer * startingPoint;
	};

#endif