CPP=g++
CXXFLAGS:=-g -Wall -D_REENTRANT -O2 -Wno-deprecated
# CXXFLAGS:=-g -Wno-deprecated -Wall -I/usr/local/include/
LDFLAGS:=-levent -lpcre 

# compile source file
dbProxy:dbProxy.cpp heuristic_based_detection.cpp patterns.cpp misc.cpp parser/parser.o parser/sql.o parser/sql.tab.o
	g++ -o $@ $^ $(CXXFLAGS) $(LDFLAGS)

run:
	./dbProxy