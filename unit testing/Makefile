# target name : dependencies
# <tab> commands to generate target

object.o : *.c
	gcc -c *.c
#make.exe  

all : *.o 
	gcc *.o -o all.out
#make.exe all

run : all
	./all.out
#make.exe run

clean :
	del *.o all.out
#make.exe clean
	