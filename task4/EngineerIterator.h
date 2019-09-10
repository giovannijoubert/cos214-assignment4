#ifndef ENGINEERITERATOR_H
#define ENGINEERITERATOR_H

#include "Engineer.h"
#include <string>

using namespace std;

  class EngineerIterator {
		
	    public:
            EngineerIterator(){};
            virtual Engineer * first(){};
            virtual Engineer * next(){};
            virtual bool hasNext(){};
            virtual Engineer * current(){};
	};

#endif