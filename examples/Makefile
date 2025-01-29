# rust compiler
cc = rustc

# default targe rule
all: add sub multiply max min
	@echo "Running all Codes"

add:
	$(cc) -o build/add src/simple_add.rs -l add  -L libs/
	./build/add

sub:
	$(cc) -o build/sub src/simple_sub.rs -l sub  -L libs/
	./build/sub

multiply:
	$(cc) -o build/multiply src/simple_multiply.rs -l multiply  -L libs/
	./build/multiply

max:
	$(cc) -o build/max src/simple_find_max.rs -l findmax  -L libs/
	./build/max

min:
	$(cc) -o build/min src/simple_find_min.rs -l findmin  -L libs/
	./build/min
