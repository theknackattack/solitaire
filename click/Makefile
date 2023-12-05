GCC = gcc
GPP = g++
CFLAGS = --std=c2x -Wall -Werror -pedantic
CPPFLAGS = --std=c++23 -Wall -Werror -pedantic
LIBRARY = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system -lboost_unit_test_framework

.PHONY: all clean

all: main
main: main.o
	$(GCC) $(CFLAGS) -o $@ $^ $(LIBRARY)
main.o: main.c
	$(GCC) $(CFLAGS) -c $<
clean:
	rm main main.o