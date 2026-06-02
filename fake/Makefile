CC = gcc
CFLAGS = -Wall

all: libfake.so

libfake.so: fake.c fake.h
    $(CC) $(CFLAGS) fake.c - shared -fPIC -ldl -o libfake.so
    
clean:
    $(CC) 
