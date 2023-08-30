#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int randchar(){ // function that selects a random letter
    // going to use ascii values to represent letters, Capital A is 65 in ASCII, Z is 90 in ASCII
    srand(time(NULL));

    // this command will go through ASCII values 65-90 which represents Captial letters A-Z
    (rand()%(90-65)) + 65;
                        




}