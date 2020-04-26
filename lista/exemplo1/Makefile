LIB_DIR = lib/clist/clist.a
TARGET = main
C_SOURCE=$(wildcard *.c)
H_SOURCE=$(wildcard *.h)

CC=gcc
CC_FLAGS= $(LIB_DIR) -o $(TARGET)

all:
	$(CC) $(C_SOURCE) $(CC_FLAGS)
    