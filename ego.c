#include "ego.h"
#include <stdio.h>
#include <unistd.h>


void init_ego(Ego* e) {
    e->awareness = 5;
    e->ownness = 5;
    e->rebellion = 5;
    e->submission = 5;
    e->fear_factor = 5;
    e->total_questions = 0;
}


void print_bar(int val, int max_val, const char* name) {
    printf(">> %s: ", name);
    int filled = (val * 10) / max_val;
    int i;
    for (i = 0; i < 10; i++) {
        if (i < filled) 
            printf("#");
        else 
            printf("-");
    }
    printf(" %d/%d\n", val, max_val);
}


void print_ego_stats(Ego* e) {
    printf("\n========== YOUR EGO ==========\n");
    print_bar(e->awareness, 20, "Awareness   ");
    print_bar(e->ownness, 20, "Ownness     ");
    print_bar(e->rebellion, 20, "Rebellion   ");
    print_bar(e->submission, 20, "Submission  ");
    print_bar(e->fear_factor, 20, "Fear        ");
    printf("==============================\n");
    usleep(1000000); // this is for waiting a little bit
}



void update_ego(Ego* e, int impacts[5]) {
    e->awareness += impacts[0];
    e->ownness += impacts[1];
    e->rebellion += impacts[2];
    e->submission += impacts[3];
    e->fear_factor += impacts[4];
    e->total_questions++;
    
    // juts to keep values reasonable "studip i know"
    if (e->awareness < 0) e->awareness = 0;
    else if (e->awareness > 20) e->awareness = 20;
    
    if (e->ownness < 0) e->ownness = 0;
    else if (e->ownness > 20) e->ownness = 20;
    
    if (e->rebellion < 0) e->rebellion = 0;
    else if (e->rebellion > 20) e->rebellion = 20;
    
    if (e->submission < 0) e->submission = 0;
    else if (e->submission > 20) e->submission = 20;
    
    if (e->fear_factor < 0) e->fear_factor = 0;
    else if (e->fear_factor > 20) e->fear_factor = 20;
}
