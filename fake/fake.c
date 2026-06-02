#include <time.h>
#include <stdio.h>

#include "fake.h"

void hello(){
    printf("fake!\n");
}

time_t time(time_t *tloc){
    return 1577836800;
}
