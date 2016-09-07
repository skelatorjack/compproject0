# Makefile for Compilers project 0
CC = gcc
CFLAGS = -g -o




main: node.h buildTree.h traversals.h buildTree.c traversals.c main.c 
	$(CC) $(CFLAGS) main node.h buildTree.h traversals.h buildTree.c traversals.c main.c

clean: 
	rm main



