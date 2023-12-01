#include <stdio.h>

// Opening input file in read-only mode
int fd1 = open(“sample.txt”, O_RDONLY);
if (fd1 == -1) {
	perror("Open Failed For Input File:\n");
	exit(1);
}

// Creating output file in write mode
int fd2 = open(“sample - compressed.txt”,
			O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
if (fd2 == -1) {
	perror("Open Failed For Output File:\n");
	exit(1);
}