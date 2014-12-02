
onewayconvo : main.o hello.o goodbye.o speaklib.o
	gcc main.o hello.o goodbye.o speaklib.o -o onewayconvo

main: main.c goodbye.h hello.h speaklib.h
	gcc -c main.c

hello.o : hello.c speaklib.h
	gcc -c hello.c

goodbye.o : goodbye.c speaklib.h
	gcc -c goodbye.c

speaklib.o : speaklib.c
	gcc -c speaklib.c

clean:
	rm *.o onewayconvo
