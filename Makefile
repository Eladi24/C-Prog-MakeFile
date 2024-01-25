CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_L=advancedClassificationLoop.o
OBJECTS_LIB_R=advancedClassificationRecursion.o
OBJECTS_LIB_B=basicClassification.o
FLAGS= -Wall -g
CFLAGS= -Wall -fPIC
#libclassloops.a, libclassrec.a, libclassrec.so, libclassloops.so


all: loops loopd recursives recursived mains maindloop maindrec
mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so
loops: libclassloops.a
loopd: libclassloops.so
libclassloops.a: advancedClassificationLoop.o basicClassification.o
	$(AR) -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o
libclassloops.so: advancedClassificationLoop.o basicClassification.o
	$(CC) -shared -fPIC -o libclassloops.so advancedClassificationLoop.o basicClassification.o
main.o: main.c NumClass.h
	gcc -c main.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -Wall -g -c advancedClassificationLoop.c
basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -g -c basicClassification.c
recursives: libclassrec.a 
recursived: libclassrec.so
libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	$(AR) -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o
libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	$(CC) -shared -fPIC -o libclassrec.so advancedClassificationRecursion.o basicClassification.o
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -Wall -g -c advancedClassificationRecursion.c
.PHONY: clean all

clean:
	rm -f *.o *.a *.so loops loopd recursives recursived mains maindloop maindrec
