
testsecurity : test_code.o
	gcc test_code -L ../libsecurity -lsecurity -o testsecurity

test_code : test_code.c
	gcc -I ../libsecurity -c test_code.c


clean:
	rm *.o testsecurity
