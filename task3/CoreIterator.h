#ifndef COREITERATOR_H
#define COREITERATOR_H

#include "Engineer.h"
#include "EngineerIterator.h"
#include "ListOfCore.h"
#include <string>

using namespace std;

  class CoreIterator : public EngineerIterator {
		
	    public:
            CoreIterator(Engineer*);
            ~CoreIterator();
            Engineer * first();
            Engineer * next();
            bool hasNext();
            Engineer * current();
      private:
            Engineer * firstEngineer;
            Engineer * currentEngineer;
	};

#endif