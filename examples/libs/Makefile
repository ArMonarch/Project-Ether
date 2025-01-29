# default compiler as etherc
cc = etherc

#default target
all: libadd.a libsub.a libmultiply.a libfindmax.a libfindmin.a

add: libadd.a
	@echo "Building libadd.a"

libadd.a: etherc_src/simple_add
	$(cc) < etherc_src/simple_add
	mv build.o libadd.a
	
libsub.a: etherc_src/simple_sub
	$(cc) < etherc_src/simple_sub
	mv build.o libsub.a

libmultiply.a: etherc_src/simple_multiply
	$(cc) < etherc_src/simple_multiply
	mv build.o libmultiply.a

libfindmax.a: etherc_src/simple_find_max
	$(cc) < etherc_src/simple_find_max
	mv build.o libfindmax.a

libfindmin.a: etherc_src/simple_find_min
	$(cc) < etherc_src/simple_find_min
	mv build.o libfindmin.a

clean:
	rm libadd.a
	rm libsub.a
	rm libmultiply.a
	rm libfindmax.a
	rm libfindmin.a
