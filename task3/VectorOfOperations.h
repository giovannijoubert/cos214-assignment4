#ifndef VECTOROFOPERATIONS_H
#define VECTOROFOPERATIONS_H

#include "Engineer.h"
#include "EngineerCollection.h"
#include "EngineerIterator.h"
#include "OperationsIterator.h"
#include <vector>
#include <string>

using namespace std;

  class VectorOfOperations : public EngineerCollection {
		
	    public:
            VectorOfOperations();
            ~VectorOfOperations();
            EngineerIterator* createEngineerIterator();
            void addEngineer(Engineer*);
            void removeEngineer(Engineer*);
            bool isEmpty();      
        private:
            vector<Engineer*> list;
	};

#endif