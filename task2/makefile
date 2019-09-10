main: main.o BSC.o BTS.o CSCoreEngineer.o Engineer.o GGSN.o MSC.o NetworkElement.o PowerEngineer.o PSCoreEngineer.o RadioEngineer.o TransmissionEngineer.o
	g++ -o main main.o BSC.cpp BTS.cpp CSCoreEngineer.cpp Engineer.cpp GGSN.cpp MSC.cpp NetworkElement.cpp PowerEngineer.cpp PSCoreEngineer.cpp RadioEngineer.cpp TransmissionEngineer.cpp

main.o: main.cpp
	g++ -c main.cpp

BSC.o: BSC.h BSC.cpp
	g++ -c BSC.cpp
	
BTS.o: BTS.h BTS.cpp
	g++ -c BTS.cpp
	
CSCoreEngineer.o: CSCoreEngineer.h CSCoreEngineer.cpp
	g++ -c CSCoreEngineer.cpp

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
	

run:
	./main

clean:
	rm *.o main