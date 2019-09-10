#include "FaultsNMS.h"
#include <iostream>

FaultsNMS::FaultsNMS(){
    
}

FaultsNMS::~FaultsNMS(){

}

void FaultsNMS::notify(Engineer * e){
   cout << e->Name + " changed status to " +e->getStatus() + "...notifying the others!" << endl;
}