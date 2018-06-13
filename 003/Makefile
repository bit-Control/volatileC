CC:=$(CC)
CFLAGS:= -O3 -save-temps
OBJ:=volatile_003.o

PROGRAMS:= volatile_003
all:	$(OBJ) $(PROGRAMS)

volatile_003.o:	volatile_003.c
	$(CC) -c $(CFLAGS) $<

volatile_003: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm -f $(PROGRAMS) $(OBJ) *.s *.i *~
