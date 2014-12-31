progam: main.o CommissionEmployee.o BasePlusEmp.o
	g++ -o myprogram main.o BasePlusEmp.o CommissionEmployee.o

main.o: main.cpp BasePlusEmp.h
	g++ -c main.cpp

BasePlusEmp.o: BasePlusEmp.cpp BasePlusEmp.h CommissionEmployee.h
	g++ -c BasePlusEmp.cpp

CommissionEmployee.o: CommissionEmployee.cpp CommissionEmployee.h
	g++ -c CommissionEmployee.cpp

clean:
	rm -f $ myprogram main.o BasePlusEmp.o CommissionEmployee.o