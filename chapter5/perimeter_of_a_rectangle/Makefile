##########################################################################################
#                             Makefile for UNIX systems                                  #
#                               using a GNU C complier                                   #
#                                                                                        #
# Compiler flags:                                                                        #
#    -g    -- Enable debugging                                                           #
#    -Wall   -- Turn on all warnings                                                     #
#                                                                                        #
# Using @ at the start of an action tells Make not to print this action.                 #
#   So, by using @echo instead of echo , we can see the result of echo (the variable's   #
#   value being printed) but not the echo command itself.                                #
##########################################################################################


all:
	@echo "build, run clean"
build:
	gcc -g -Wall -operimeter_of_a_rectangle perimeter_of_a_rectangle.c
run:
	./perimeter_of_a_rectangle
clean:
	rm -f perimeter_of_a_rectangle 