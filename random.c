#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"
//test
// gcc -c random.c
// gcc random.o print_random.c -o print_random.out
// ./print_random.out 
int randchar(){ // function that selects a random letter
    // going to use ascii values to represent letters, Capital A is 65 in ASCII, Z is 90 in ASCII
    

    // this command will go through ASCII values 65-90 which represents Captial letters A-Z
    for(int i=0; i<25; i++){
        printf("%c", (rand()%(90-65)) + 65);
        return 0;
    }
    //char randletter = 'A' +(rand() % 26);
                        




}