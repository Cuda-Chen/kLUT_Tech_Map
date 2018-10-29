CPP = g++
CPPFLAGS = -Wall -g
OBJS = main.o
DEPS = 

kLUT:${OBJS}
	${CPP} ${CPPFLAGS} -o $@ ${OBJS}

%o.: %.cpp ${DEPS}
	${CPP} -c -o $@ $< ${CPPFLAGS}

clean: 
	-rm -r *.o
