


SRC = main.c\
src/booking_operations.c\
 
OBJ = main.o\
booking_operations.o

INC =inc
CFLAGS =-I$(INC)

all.out : $(OBJ)
    gcc $^ -I$(INC) -O $@


%.o:src/%.c 
    gcc $^ -I$(INC) -c 

run: target
    ./all.out

clean:
    rm all.out

