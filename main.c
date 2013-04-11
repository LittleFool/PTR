/* 
 * File:   main.c
 * Author: littlefool
 *
 * Created on December 13, 2012, 10:47 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    FILE *file;
    file = fopen("ptr.txt", "w");
    // if this doesn't work we note the user and exit
    if (file == NULL) {
        printf("Can't write the file here! Check folder permissions or chose another path.\n");
        return EXIT_FAILURE;
    }
    
    int i;
    char in[] = "IN";
    char ptr[] = "PTR";
    char dns1[] = "46-227-95-";
    char dns2[] = "-dynip.emslandtel.net.";
    
    for (i = 1; i <= 254; i++) {
        fprintf(file, "%i       %s      %s      %s%i%s\n", i, in, ptr, dns1, i, dns2);
    }
    
    
    return (EXIT_SUCCESS);
}

