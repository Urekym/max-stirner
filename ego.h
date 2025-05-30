#ifndef EGO_H
#define EGO_H

typedef struct {
    int awareness;
    int ownness;
    int rebellion;
    int submission;
    int fear_factor;
    int total_questions;
} Ego;

void init_ego(Ego* e);
void print_ego_stats(Ego* e);
void update_ego(Ego* e, int impacts[5]);
void print_bar(int val, int max_val, const char* name);

#endif
