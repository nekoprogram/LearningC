all: run
run: mainloops
	./mainloops
	
mainloops:
	rm -r mainloops 
	gcc mainloops.c -o mainloops
clean:
	rm -r mainloops 
	gcc mainloops.c -o mainloops 

.PHONY:
	all run
