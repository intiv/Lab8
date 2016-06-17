robots.exe:	main.o robot.o sirviente.o trabajador.o abastecedor.o
	g++ main.o robot.o sirviente.o trabajador.o abastecedor.o -o robots.exe

main.o:	main.cpp robot.h sirviente.h trabajador.h abastecedor.h
	g++ -c main.cpp
robot.o:	robot.cpp robot.h
	g++ -c robot.cpp
sirviente.o:	sirviente.cpp sirviente.h robot.h
	g++ -c sirviente.cpp
trabajador.o:	trabajador.cpp trabajador.h robot.h
	g++ -c trabajador.cpp
abastecedor.o:	abastecedor.cpp abastecedor.h robot.h
	g++ -c abastecedor.cpp
