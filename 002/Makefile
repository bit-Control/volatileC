CC:=$(CC)
CFLAGS:= -O3 -save-temps
OBJ:=volatile_002.o

PROGRAMS:= volatile_002
all:	$(OBJ) $(PROGRAMS)

volatile_002.o:	volatile_002.c
	$(CC) -c $(CFLAGS) $<

volatile_002: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm -f $(PROGRAMS) $(OBJ) *.s *.i *~
