gcc -Iinclude -c src/bit_def.c -o bin/bit_def.o
gcc -Iinclude -c src/byte.c -o bin/byte.o

gcc -Iinclude -c src/ALU/logic_gates.c -o bin/ALU/logic_gates.o
gcc -Iinclude -c src/ALU/adder.c -o bin/ALU/adder.o

gcc -Iinclude -c src/instructions/logical.c -o bin/instructions/logical.o
gcc -Iinclude -c src/instructions/shifter.c -o bin/instructions/shifter.o

gcc -Iinclude -c src/unit_test.c -o bin/unit_test.o
gcc -Iinclude -c src/main.c -o bin/main.o

gcc bin/bit_def.o bin/byte.o bin/ALU/logic_gates.o bin/ALU/adder.o bin/instructions/logical.o bin/instructions/shifter.o bin/unit_test.o bin/main.o -o 6502
./6502