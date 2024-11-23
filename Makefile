L7T3: L7T3_io.c L7T3_io.o L7T3_muisti.c L7T3_muisti.o
	gcc -o L7T3 L7T3.o L7T3_io.o L7T3_muisti.o
L7T3.o: L7T3.c L7T3_io.h L7T3_muisti.h
	gcc -c L7T3.c -std=c99 -pedantic -Wall
L7T3_io.o: L7T3_io.c L7T3_io.h
	gcc -c L7T3_io.c -std=c99 -pedantic -Wall
L7T3_muisti.o: L7T3_muisti.c L7T3_muisti.h
	gcc -c L7T3_muisti.c -std=c99 -pedantic -Wall

L7T2: L7T2_lista.c L7T2_lista.o
	gcc -o L7T2 L7T2.o L7T2_lista.o
L7T2.o: L7T2.c L7T2_lista.h
	gcc -c L7T2.c -std=c99 -pedantic -Wall
L7T2_lista.o: L7T2_lista.c L7T2_lista.h
	gcc -c L7T2_lista.c -std=c99 -pedantic -Wall

L7T1: L7T1_io.c L7T1_io.o
	gcc -o L7T1 L7T1.o L7T1_io.o
L7T1.o: L7T1.c L7T1_io.h
	gcc -c L7T1.c -std=c99 -pedantic -Wall
L7T1_io.o: L7T1_io.c L7T1_io.h
	gcc -c L7T1_io.c -std=c99 -pedantic -Wall

