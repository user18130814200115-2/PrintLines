#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>

#define LSIZ 900 

int getNumberOfLines(FILE *fp) {
    int numberOfLines = 0;
    char *buf = (char *)malloc(255);
    while ((buf = fgets(buf, 255, fp)) != NULL) {
        numberOfLines++;
    }
    return numberOfLines;
}

int main(int argc, char* argv[])  {
    FILE *fptr = NULL; 
    int i = 0;
    int index;

    fptr = fopen(argv[argc-1], "r");
    int noOfLines = 0;
    noOfLines = getNumberOfLines(fptr);
    rewind(fptr);

    char line[noOfLines][LSIZ];

    while(fgets(line[i], LSIZ, fptr)) {
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }

    for (int i = 1; i < argc-1; i++) {
	sscanf(argv[i], "%d", &index);;
	printf("%s\n", line[index-1]);
    }
    return 0;
}
