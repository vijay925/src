progam: main.o CommissionEmployee.o
	g++ -o myprogram main.o CommissionEmployee.o

main.o: main.cpp CommissionEmployee.h
	g++ -c main.cpp

CommissionEmployee.o: CommissionEmployee.cpp CommissionEmployee.h
	g++ -c CommissionEmployee.cpp

clean:
	rm -f $ myprogram main.o CommissionEmployee.o