# target name : dependencies
# <tab> commands to generate target


# SRCS =main.c sum.c square.c divide.c
# OBJS =main.o sum.o square.o divide.o

# # object.o : *.c
# object.o : $(SRCS)
# 	gcc $^ -c
# #make.exe  

# # all : *.o 
# all : $(OBJS)
# 	gcc $^ -o all.out
# #make.exe all

# run : all
# 	./all.out
# #make.exe run

# clean :
# 	del *.o all.out
# #make.exe clean


# test commands
Object.o :main.c sum.c square.c divide.c unity.c
	gcc $^ -c
all:main.o sum.o square.o divide.o unity.object
	gcc $^ -o all.out
run: all
	./all.out
clean:
	del *.o all.out
# test commands