EXECNAME=blackjack
TEST=test

OBJS = main.o blackjack.o

CXX=clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -Wpedantic
LD=clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lpthread -lm

all : $(EXECNAME)

$(EXECNAME) : $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXECNAME)

main.o : main.cpp blackjack.h
	$(CXX) $(CXXFLAGS) main.cpp

blackjack.o : blackjack.cpp blackjack.h
	$(CXX) $(CXXFLAGS) blackjack.cpp


test : test.o blackjack.o
	$(LD) test.o blackjack.o $(LDFLAGS) -o test

test.o : test.cpp
	$(CXX) $(CXXFLAGS) test.cpp

clean : 
	-rm -f *.o $(EXECNAME) test
