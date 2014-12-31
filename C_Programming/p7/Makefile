#Author: fvijayku (FNU Vijay Kumar)
#Makefile

rsvp.out: rsvp.o course.o vector.o
	gcc -Wall -g -o rsvp.out rsvp.o course.o vector.o

rsvp.o: rsvp.c course.h
	gcc -Wall -g -c rsvp.c

course.o: course.c course.h vector.h
	gcc -Wall -g -c course.c

vector.o: vector.c vector.h
	gcc -Wall -g -c vector.c

clean:
	rm -f vector.o rsvp.o course.o rsvp.out
