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
	@echo "build, run, clean"
build:
	gcc -g -Wall -ominutes_conversion minutes_conversion.c
run:
	./minutes_conversion
clean:
	rm -f minutes_conversion