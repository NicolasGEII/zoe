/**
    @name zoe
    @author Valois Nicolas
    @brief le but de ce programme est de refaire la fonction "cat" disponible sur tout les OS.
*/
#include <stdlib.h>
#include <stdio.h>
#include "my_cat.h"

/** 
    @param argc est le nombre d'argument
    @param argv est le fichier à lire
*/
int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("usage: zoe <filename>\n");  // Check for filename argument
        return 1;
    }
    return read_file(argv[1]);
}

// Lit un fichier
int read_file(char *file)
{
    FILE *fp = fopen(file,"r");
    if (fp == NULL)
    {
        puts("Error opening file\n");
        return 1;
    }

    while((carac = getc(fp)) != EOF) {putchar(carac);}

    if (fclose(fp) == 1)
    {
        printf("Error closing file\n");
        return 1;
    }
    return 0;
}
