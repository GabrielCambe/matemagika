cFLAGS = -lm -Wall
OBJs = calc2.o algebra.o

matemagika: $(OBJs)
	gcc main.c $(OBJs) -o matemagika $(cFLAGS)
calc2.o:
	gcc calc2.c -c $(cFLAGS)
algebra.o:
	gcc algebra.c -c $(cFLAGS)
