Object.o :main.c swapping.c calculate_average.c unity.c 	
	gcc $^ -c
all:main.o swapping.o unity.o calculate_average.o
	gcc $^ -o all.out
run: all
	./all.out
clean:
	del *.o *.out
