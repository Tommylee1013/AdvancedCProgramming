//
// Practice 12-4
// Created by Junghun Lee on 1/11/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uchar;
typedef unsigned long ulong;
typedef union {
    uchar chAddr[4];
    ulong numAddr;
} IP_ADDR;

int main(void) {
    IP_ADDR addr;
    char * parser;
    char strAddr[16] = "153.18.8.105";

    parser = strtok(strAddr, ".");
    addr.chAddr[3] = strtol(parser, (char **)NULL, 10);

    for (int i = 2; i >= 0; i--) {
        parser = strtok(NULL, ".");
        addr.chAddr[i] = strtol(parser, (char **)NULL, 10);
    }

    printf("IP decimal dot : %d.%d.%d.%d\n",
           addr.chAddr[3], addr.chAddr[2],
           addr.chAddr[1], addr.chAddr[0]);
    printf("IP binary : %lu\n", addr.numAddr);

    return 0;
}

