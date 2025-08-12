Object.o :main.c leapYear.c unity.c 	
	gcc $^ -c
all:main.o leapYear.o unity.o
	gcc $^ -o all.out
run: all
	./all.out
clean:
	del *.o *.out