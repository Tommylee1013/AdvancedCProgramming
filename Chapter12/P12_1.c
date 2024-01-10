//
// Practice 12-1
// Created by Junghun Lee on 1/10/24.
//
#include <stdio.h>

int main(void) {
    enum TV {
        fox = 2,
        nbc = 4,
        cbs = 5,
        abc = 11,
        hbo = 15,
        show = 17,
        max = 31,
        espn = 39,
        cnn = 51
    };

    printf("Here are my favorite cable stations:\n");
    printf("   ABC: \t%2d\n", abc);
    printf("   CBS: \t%2d\n", cbs);
    printf("   CNN: \t%2d\n", cnn);
    printf("   ESPN: \t%2d\n", espn);
    printf("   Fox: \t%2d\n", fox);
    printf("   HBO: \t%2d\n", hbo);
    printf("   Max: \t%2d\n", max);
    printf("   NBC: \t%2d\n", nbc);
    printf("   Show: \t%2d\n", show);
    printf("End of my favorite stations.\n");

    return 0;
}