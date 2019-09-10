#ifndef OPERATIONSITERATOR_H
#define OPERATIONSITERATOR_H

#include "EngineerIterator.h"
#include "Engineer.h"
#include <vector>
#include <string>

using namespace std;

  class OperationsIterator : public EngineerIterator {
		
	    public:
            OperationsIterator(vector<Engineer*>);
            ~OperationsIterator();
            bool hasNext();
            Engineer * first();
            Engineer * next();
            Engineer * current();
      private:
            int currentPos;
            vector<Engineer*> itList;

	};

#endif