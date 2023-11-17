CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
OBJS = _putchar.o _islower.o _isalpha.o _abs.o _isupper.o _isdigit.o _strlen.o _puts.o _strcpy.o _atoi.o _strcat.o _strncat.o _strncpy.o main.o
TARGET = myprogram
LIB = libmy.a

all: $(TARGET)

$(TARGET): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) -L. -lmy

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

%.o: %.c main.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET) $(LIB)

