CC:=$(CC)
CFLAGS:= -O3 -save-temps
OBJ:=volatile_004.o

PROGRAMS:= volatile_004
all:	$(OBJ) $(PROGRAMS)

volatile_004.o:	volatile_004.c
	$(CC) -c $(CFLAGS) $<

volatile_004: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm -f $(PROGRAMS) $(OBJ) *.s *.i *~
