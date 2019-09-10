#ifndef ENGINEER_H
#define ENGINEER_H

#include <string>

using namespace std;

  class Engineer {
		
	    public:
            Engineer();
            virtual ~Engineer();
            virtual void update()=0;
            string Name;
            Engineer* getNext();
            void setNext(Engineer*);
      private:
            Engineer* nextEngineer;

	};

#endif