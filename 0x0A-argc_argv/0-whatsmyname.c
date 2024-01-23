#include "main.h"
#include <libgen.h>

/*
 * this an app to print the name of the program using argc , argv[] 
 */

int main (int argc, char *argv[]) {

	char *programName = basename(argv[0]);

	printf("%s\n", programName);
}

