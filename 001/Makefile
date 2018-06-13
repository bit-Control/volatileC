CC:=$(CC)
CFLAGS:= -save-temps
OBJ:=volatile_001.o

PROGRAMS:= volatile_001
all:	$(OBJ) $(PROGRAMS)

volatile_001.o:	volatile_001.c
	$(CC) -c $(CFLAGS) $<

volatile_001: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm -f $(PROGRAMS) $(OBJ) *.s *.i *~
