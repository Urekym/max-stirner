#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ego.h"
#include "spook.h" 
#include "judgment.h"






	/// hehehehe a big intro right!?
void intro(void) {
    printf("\n");
    printf(" ██████████                                                    \n");
    printf("░░███░░░░███                                                   \n");
    printf(" ░███   ░░███  ██████  ████████                                \n");
    printf(" ░███    ░███ ███░░███░░███░░███                               \n");
    printf(" ░███    ░███░███████  ░███ ░░░                                \n");
    printf(" ░███    ███ ░███░░░   ░███                                    \n");
    printf(" ██████████  ░░██████  █████                                   \n");
    printf("░░░░░░░░░░    ░░░░░░  ░░░░░                                   \n");
    printf("                                                               \n");
    printf("                                                               \n");
    printf("                                                               \n");
    printf(" ██████████  ███                         ███                   \n");
    printf("░░███░░░░░█ ░░░                         ░░░                    \n");
    printf(" ░███  █ ░  ████  ████████    █████████ ████   ███████  ██████ \n");
    printf(" ░██████   ░░███ ░░███░░███  ░█░░░░███ ░░███  ███░░███ ███░░███\n");
    printf(" ░███░░█    ░███  ░███ ░███  ░   ███░   ░███ ░███ ░███░███████ \n");
    printf(" ░███ ░   █ ░███  ░███ ░███    ███░   █ ░███ ░███ ░███░███░░░  \n");
    printf(" ██████████ █████ ████ █████  █████████ █████░░███████░░██████ \n");
    printf("░░░░░░░░░░ ░░░░░ ░░░░ ░░░░░  ░░░░░░░░░ ░░░░░  ░░░░░███ ░░░░░░  \n");
    printf("                                              ███ ░███         \n");
    printf("                                             ░░██████          \n");
    printf("                                              ░░░░░░           \n");
    printf("\n");
    printf("           FACING SPOOKS: The Ego Test\n");
    printf("===========================================\n");
    printf("\n");
    
    usleep(1500000);
    
    printf("\"All things are nothing to me.\"\n");
    printf("                    - Max Stirner\n\n");
    
    usleep(1500000);
    
    printf("Time to face the spooks, those sacred ideas that try to own you.\n");
    printf("Family duty, national pride, religious morality, social expectations...\n\n");
    
    printf("Each choice reveals who really owns your mind:\n");
    printf("Is it YOU, or is it THEM?\n\n");
    
    printf("Max Stirner will judge your ego at the end.\n");
    printf("Don't disappoint him.\n\n");
    
    printf("Ready? Hit Enter...");
    getchar();
}



int main() {
    Ego player;
    
    intro();
    init_ego(&player);
    
    printf("\nStarting ego state:\n");
    print_ego_stats(&player);
    
    printf("\nLet's begin...");
    getchar(); // waiting for the ENTEEEER, PRESS THE FUCKING ENTER AND PLAY please
    
    run_spook_test(&player);
    
    printf("\n\nAll 15 spooks confronted!\n");
    printf("Time for judgment...\n");
    usleep(1500000);
    
    stirner_judges_you(&player);
    
    printf("Game over. Hope you learned something about yourself.\n\n");
    
    return 0;
}
