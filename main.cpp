//------------------------------------------------------------------------------
// main.cpp - contains main function for testing functional.
//------------------------------------------------------------------------------

#include <stdlib.h> // For rand().
#include <time.h>   // For time().
#include <string.h>
#include <stdio.h>

#include "Container.h"

void errMessage() {
    printf("incorrect!\n"
           "  Waited:\n"
           "     command -f infile outfile01 outfile02\n"
           "  Or:\n"
           "     command -n number outfile01 outfile02\n");
}

//------------------------------------------------------------------------------
int main(int argc, char* argv[]) {
    clock_t start = clock(); // Start time.

    if(argc != 5) {
        errMessage();
        return 1;
    }

    printf("Start\n");
    Container c;
    Init(c);
    char buffer[10];

    FILE *file;
    if(!strcmp(argv[1], "-f")) {
        file = fopen(argv[2], "r");
        In(c, file);
        fclose(file);
    }
    else if(!strcmp(argv[1], "-n")) {
        int size = atoi(argv[2]);
        if((size < 1) || (size > 15000)) {
            printf("incorrect number of matrices = ");
            snprintf(buffer, 10, "%d", size);
            printf(". Set 0 < number <= 15000\n");
            return 3;
        }
        // System clock.
        srand(static_cast<unsigned int>(time(0)));
        // Random data for container.
        InRnd(c, size);
    }
    else {
        errMessage();
        return 2;
    }

    // Output container data.
    FILE *fileOutput;
    fileOutput = fopen(argv[3], "w");
    Out(c, fileOutput);
    fclose(fileOutput);

    // The 2nd part of task.
    FILE *fileOutputSecond;
    fileOutputSecond = fopen(argv[4], "w");

    ShakerSort(c, c.len);
    Out(c, fileOutputSecond);
    fclose(fileOutputSecond);

    Clear(c);

    clock_t end = clock(); // End time.
    double total_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    printf("%s %lf %s \n", "Total time for program:", total_time, "seconds");
    printf("Stop");
    return 0;
}