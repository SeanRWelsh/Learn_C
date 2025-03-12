#
#            Makefile for UNIX systems
#            using a GNU C complier
#
# Compiler flags:
#    -g    -- Enable debugging
#    -Wall   -- Turn on all warnings
#    -lm   --links the math library
#Using @ at the start of an action tells Make not to print this action. 
#So, by using @echo instead of echo , we can see the result of echo (the variable's value being printed) but not the echo command itself.

all:
	@echo "build, run, clean"
build:
	gcc -g -Wall -ovolume_of_a_sphere volume_of_a_sphere.c -lm
run:
	./volume_of_a_sphere
clean:
	rm -f volume_of_a_sphere