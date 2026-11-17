space : main.c affichage.c
	gcc main.c affichage.c -o space -lX11
	./space

clean :
	rm -f space