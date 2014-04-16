
hellomake: HelloWorld.c
	gcc -o hellomake HelloWorld.c x.c
#	gcc -o x.out x.c
clean:
	rm hellomake  2>&1
