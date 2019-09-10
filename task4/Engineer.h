#ifndef ENGINEER_H
#define ENGINEER_H

class NMS;
#include <string>
#include "NMS.h"

using namespace std;

  class Engineer {
		
	    public:
            Engineer(NMS*);
            Engineer();
            virtual void statusChaged();
            virtual ~Engineer();
            virtual void update()=0;
            string Name;
            Engineer* getNext();
            void setNext(Engineer*);
            NMS* myNMS;
            virtual string getStatus();
      private:
            Engineer* nextEngineer;
           

	};

#endif