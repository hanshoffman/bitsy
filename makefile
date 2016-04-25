CC = gcc
CFLAGS = -std=c99 -Ofast
BASIC = bitsy

all: $(BASIC) $(SPEEDUP)

$(BASIC): $(BASIC).c
	$(CC) $(CFLAGS) -o $(BASIC) $(BASIC).c

clean: 
	rm -rf $(BASIC) *.o *.dSYM/
