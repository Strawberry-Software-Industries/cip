csource:
	@shc -f cpi.sh 
	@rm cpi.sh.x
	@mv cpi.sh.x.c cpi.c

c: csource
	gcc cpi.c -o cpi

shc: 
	shc -f cpi.sh -o cpi
	@rm cpi.sh.x.c

clean: 
	rm cpi.c cpi