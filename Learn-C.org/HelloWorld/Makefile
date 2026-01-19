CC = clang
CFLAGS = -Wall -Wextra -g

# Dit pakt de naam van de huidige map als naam voor je programma
TARGET = $(shell basename $(CURDIR))

# Vertel make dat 'all' en 'clean' geen echte bestanden zijn
.PHONY: all clean

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) main.c -o $(TARGET)

clean:
	rm -f $(TARGET)