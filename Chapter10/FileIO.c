//
// file input output example
// Created by Junghun Lee on 1/8/24.
//

#include <stdio.h>

int main(void) {
    FILE *spTemps;
    int state;

    spTemps = fopen("TEMP.dat", "w");
    if (spTemps == NULL) {
        printf("file open error! \n"); // error exception
        return 1;
    }
    fprintf(spTemps, "%2d,%s\n", 10, "Hello");

    state = fclose(spTemps);
    if (state != 0) {
        printf("file close error!\n");
        return 1;
    }

    return 0;
}