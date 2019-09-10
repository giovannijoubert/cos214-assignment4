main: main.o BSC.o BTS.o CSCoreEngineer.o Engineer.o GGSN.o MSC.o NetworkElement.o PowerEngineer.o PSCoreEngineer.o RadioEngineer.o TransmissionEngineer.o CoreIterator.o ListOfCore.o OperationsIterator.o VectorOfOperations.o FaultsNMS.o NMS.o
	g++ -o main main.o BSC.cpp BTS.cpp CSCoreEngineer.cpp Engineer.cpp GGSN.cpp MSC.cpp NetworkElement.cpp PowerEngineer.cpp PSCoreEngineer.cpp RadioEngineer.cpp TransmissionEngineer.cpp CoreIterator.cpp ListOfCore.cpp OperationsIterator.cpp VectorOfOperations.cpp FaultsNMS.cpp NMS.cpp

main.o: main.cpp
	g++ -c main.cpp

BSC.o: BSC.h BSC.cpp
	g++ -c BSC.cpp
	
BTS.o: BTS.h BTS.cpp
	g++ -c BTS.cpp
	
CSCoreEngineer.o: CSCoreEngineer.h CSCoreEngineer.cpp
	g++ -c CSCoreEngineer.cpp

NMS.o: NMS.h NMS.cpp
	g++ -c NMS.cpp

Engineer.o: Engineer.h Engineer.cpp
	g++ -c Engineer.cpp
	
GGSN.o: GGSN.h GGSN.cpp
	g++ -c GGSN.cpp
	
MSC.o: MSC.h MSC.cpp
	g++ -c MSC.cpp
	
NetworkElement.o: NetworkElement.h NetworkElement.cpp
	g++ -c NetworkElement.cpp
	
PowerEngineer.o: PowerEngineer.h PowerEngineer.cpp
	g++ -c PowerEngineer.cpp

PSCoreEngineer.o: PSCoreEngineer.h PSCoreEngineer.cpp
	g++ -c PSCoreEngineer.cpp
	
RadioEngineer.o: RadioEngineer.h RadioEngineer.cpp
	g++ -c RadioEngineer.cpp
	
TransmissionEngineer.o: TransmissionEngineer.h TransmissionEngineer.cpp
	g++ -c TransmissionEngineer.cpp
	
CoreIterator.o: CoreIterator.h CoreIterator.cpp
	g++ -c CoreIterator.cpp

ListOfCore.o: ListOfCore.h ListOfCore.cpp
	g++ -c ListOfCore.cpp

OperationsIterator.o: OperationsIterator.h OperationsIterator.cpp
	g++ -c OperationsIterator.cpp

VectorOfOperations.o: VectorOfOperations.h VectorOfOperations.cpp
	g++ -c VectorOfOperations.cpp


FaultsNMS.o: FaultsNMS.h FaultsNMS.cpp
	g++ -c FaultsNMS.cpp

run:
	./main

clean:
	rm *.o main