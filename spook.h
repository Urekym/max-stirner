#ifndef SPOOK_H
#define SPOOK_H

#include "ego.h"

typedef struct {
    char* question;
    char* option_a;
    char* option_b;
    int effect_a[5]; 
    int effect_b[5];
} Spook;

void run_spook_test(Ego* ego);

#endif
