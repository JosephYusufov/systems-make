# Joseph Yusufov
# 2019-09-25
all: main.o functions.o
	gcc -o program main.o functions.o

main.o: main.c functions.h
	gcc -c main.c

functions.o: functions.c
	gcc -c functions.c