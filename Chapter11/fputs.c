//
// Chapter 11. fputs & puts
// Created by Junghun Lee on 1/10/24.
//

#include <stdio.h>
int main(void) {
    char str[] = "Necessity is the Mother of Invention.";
    char * pstr = str;

    fputs("\n*************using fputs", stdout); // stdout하면 moniter로 출력된다
    fputs(pstr, stdout);
    fputs("\n", stdout);

    fputs(pstr + 13, stdout);
    fputs("\n", stdout);

    puts("\n\n*************using puts");
    puts(pstr);
    puts("\n");
    puts(pstr + 13);
    puts("\n");

    return 0;
}