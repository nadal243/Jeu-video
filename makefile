space : main.c affichage.c alien.c
	gcc main.c affichage.c alien.c -o space -lX11
	./space

clean :
	rm -f space