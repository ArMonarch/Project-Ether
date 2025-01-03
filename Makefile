# Makefile for building etherc
etherc:
	g++ -o build/etherc src/etherc.cpp `llvm-config --cxxflags --ldflags --system-libs --libs all`
