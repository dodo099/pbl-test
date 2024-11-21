#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void ) {
    srand (time(NULL));
    int random_number = rand() % 6 + 1;
    printf ( "Rzuciles: %d\n", random_number);
}