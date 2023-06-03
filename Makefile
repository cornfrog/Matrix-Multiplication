all:
	@gcc matrix-mul.c -o mm
	@mv mm bin/
	@echo MAKE Success: use \'make run\' to run

run:
	@./bin/mm

clean:
	@rm bin/mm
	@echo MAKE CLEAN Success: use \'make\' to get program back 
