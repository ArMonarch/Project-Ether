# Makefile for building etherc
ether:
	g++ -o build/etherc src/main.cpp `llvm-config --cxxflags --ldflags --system-libs --libs all`

etherc:
	g++ -o build/etherc src/etherc.cpp `llvm-config --cxxflags --ldflags --system-libs --libs all`
