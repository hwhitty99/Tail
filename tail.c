/*
   Course:      COMP-381 Systems Programming
   Program:     tail.c
   Description: prints the last -n number lines of input from stdin
   Instructions:	run "tail -n numberOfLinesToPrint"
   Author:      Hudson Whittaker
   Date:        2/18/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tail(int nltp);

int main(int argc, char *argv[]) {
	int nltp;		/* will be number of lines to print */
	if(argc == 1)	/* if no arguments besides tail are given then run the default */
		tail(10);
	else if(argc == 2)				/* there should be either one or three args total */
		printf("ERROR: not enough args\n");
	else if(argc == 3) {
		if(strcmp(argv[1],"-n") == 0) {
			nltp = atoi(argv[2]);	/* converts argv[2] to an integer */
			if(nltp >= 0) {			/* makes sure it is positive */
				tail(atoi(argv[2]));
				printf("arg[2] = %d\n", nltp);
			}
			else 
				printf("ERROR: argv[2] is not a positive integer\n");
		}
		else
			printf("ERROR: argv[1] is not -n\n");
	}
	return 0;
}
void tail(int nltp) {
	char *line;
	line = (char *) malloc(sizeof(nltp));
	printf("void tail(int nltp) has ran\n");
	return;
}