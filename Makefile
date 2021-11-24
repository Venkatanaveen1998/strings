CC=gcc
final:firstoccurance.o firstoccurancefunction.o
	$(CC) $^ -o $@
%o:%c
	$(CC) -c $<
clean:
	rm -f *.o final
