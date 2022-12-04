


all: helloworld

%.o : %.c
	@echo [CC]	$^ 
	@$(CC) $(CFLAGS) -c -o $@ $^


helloworld : helloworld.o
	@echo [LD] 	$@
	@$(CC) $(CFLAGS) $(LDFLAGS) $(LIBS) -o $@ $^

clean:
	rm -rf helloworld
	rm -rf *.o *.a *.so
