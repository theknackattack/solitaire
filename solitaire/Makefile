COMPILER = g++
CPPFLAGS = --std=c++20 -Wall -Werror -pedantic
HEADERS = Headers/Cache.hpp Headers/Card.hpp Headers/Klondike.hpp Headers/Tableau.hpp Headers/Stock.hpp Headers/Foundation.hpp
OBJECTS = Cache.o Card.o Klondike.o Tableau.o Stock.o Foundation.o
LIBRARY = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system -lboost_unit_test_framework

.PHONY: all clean

all: Solitaire Test
Solitaire: Solitaire.o $(OBJECTS)
	$(COMPILER) $(CPPFLAGS) -o $@ $^ $(LIBRARY)
%.o: %.cpp $(HEADERS)
	$(COMPILER) $(CPPFLAGS) -c $<
Test: Test.o $(OBJECTS)
	$(COMPILER) $(CPPFLAGS) -o $@ $^ $(LIBRARY)
clean:
	rm Solitaire Test *.o
