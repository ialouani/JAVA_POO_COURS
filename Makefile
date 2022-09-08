project: test 
clean:
	rm -rf *.c~ *.h~ a.out *.o Makefile~ *.txt~
test: charniere.c telecommande.c test_les_deux.c
	gcc -o $@ $^
