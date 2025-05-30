#include "spook.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



// i'll add more spooks later, this is just for testing (remind me please, my ego)

static Spook all_spooks[15] = {
    {
        "Your family insists you must marry who THEY choose. It's tradition, they say.",
        "A) Fine. Family knows best, I'll respect their choice.",
        "B) Hell no. My life, my choice. I'll marry who I want.",
        {-1, -2, -2, 3, 1},
        {2, 3, 3, -2, -1}
    },
    {
        "Talking about sex is considered shameful and forbidden in your culture.",
        "A) Keep quiet. Some things are better left unspoken.",
        "B) Speak up. Ignorance and shame help nobody.",
        {-1, -1, -2, 2, 2},
        {3, 2, 2, -1, -2}
    },
    {
        "The government wants you to serve in the military for your country.",
        "A) Of course! Serving the nation is an honor.",
        "B) Screw that. I won't die for politicians' games.",
        {-1, -2, -3, 3, 0},
        {2, 3, 4, -2, 0}
    },
    {
        "Religious authorities tell you exactly how to live your life.",
        "A) I obey. God's will is above my own desires.",
        "B) I decide for myself. No invisible man rules me.",
        {-2, -3, -2, 3, 1},
        {3, 4, 2, -3, -1}
    },
    {
        "People judge you harshly for not fitting traditional gender expectations.",
        "A) I'll conform. It's easier to just fit in.",
        "B) Fuck their expectations. I am who I am.",
        {0, -2, -1, 2, 1},
        {2, 3, 2, -2, -1}
    },
    {
        "Your boss, teacher, or leader demands blind obedience without question.",
        "A) Yes sir/ma'am. Authority deserves respect.",
        "B) Earn my respect first. I'm not your slave.",
        {-1, -2, -3, 3, 0},
        {2, 2, 4, -3, 0}
    },
    {
        "Your family expects you to give up your dreams to take care of them.",
        "A) Family first. My dreams can wait.",
        "B) Sorry, but I'm living MY life, not yours.",
        {0, -3, -2, 3, 0},
        {1, 4, 2, -2, -1}
    },
    {
        "You have to work a degrading job just to survive in this economy.",
        "A) Work is work. At least I have a job.",
        "B) This is bullshit. I deserve better than this.",
        {-1, -2, -1, 2, 1},
        {2, 2, 3, -1, -1}
    },
    {
        "Society makes you feel guilty for having perfectly normal human desires.",
        "A) Maybe I should be ashamed. These feelings are wrong.",
        "B) Screw society's guilt trips. I'm human, not a robot.",
        {-2, -2, -1, 2, 3},
        {3, 3, 2, -2, -3}
    },
    {
        "Your social group demands loyalty even when they're clearly wrong.",
        "A) I stick with my people no matter what.",
        "B) Wrong is wrong. I won't compromise my values.",
        {0, -2, -2, 2, 1},
        {2, 3, 2, -2, 0}
    },
    {
        "Tradition says you must financially support your entire extended family.",
        "A) It's my duty. Family comes first, always.",
        "B) I'll help when I can, but I'm not a bank.",
        {-1, -2, -1, 2, 0},
        {1, 3, 1, -2, 0}
    },
    {
        "Social media mobs try to shame you for having unpopular opinions.",
        "A) Better stay quiet. Don't want to be canceled.",
        "B) Think for yourself, sheep. I don't care about likes.",
        {-1, -2, -2, 2, 2},
        {2, 3, 3, -2, -2}
    },
    {
        "School punishes you for thinking differently and rewards conformity.",
        "A) Just play the game. Good grades matter most.",
        "B) This system is broken. Real learning means questioning.",
        {-2, -2, -3, 3, 1},
        {3, 2, 4, -3, -1}
    },
    {
        "Laws exist that criminalize harmless behavior just because it's 'immoral'.",
        "A) Law is law. We need moral order in society.",
        "B) Stupid laws deserve to be broken or ignored.",
        {-1, -1, -3, 2, 0},
        {2, 2, 4, -2, 0}
    },
    {
        "People call you dangerous for questioning basic assumptions about life.",
        "A) Maybe I should stop thinking so much...",
        "B) Dangerous? Good. Truth scares the comfortable.",
        {-3, -3, -4, 3, 3},
        {4, 3, 4, -3, -2}
    }
};



void run_spook_test(Ego* ego) {

    char input;
    int i;
    
    for (i = 0; i < 15; i++) {
        printf("\n===============================================\n");
        printf("SPOOK #%d\n", i + 1);
        printf("===============================================\n");
        printf("\nSITUATION:\n%s\n\n", all_spooks[i].question);
        printf("%s\n", all_spooks[i].option_a);
        printf("%s\n\n", all_spooks[i].option_b);
        printf("Your choice (A/B): ");
        
        scanf(" %c", &input);
        
        if (input == 'A' || input == 'a') {
            update_ego(ego, all_spooks[i].effect_a);
            printf("\n>> You chose A\n");
        } else if (input == 'B' || input == 'b') {
            update_ego(ego, all_spooks[i].effect_b);
            printf("\n>> You chose B\n");
        } else {

            // default to A if the input is something weird like, Kraaakh Kraaakh bd7k
            update_ego(ego, all_spooks[i].effect_a);
            printf("\n>> Invalid input, defaulting to A\n");
        }
        
        usleep(500000);
        print_ego_stats(ego);
        
        printf("\nSpooks faced: %d/15\n", i + 1);
        
        if (i < 14) {
            printf("\n-----------------------------------------------\n");
            usleep(800000);
        }
    }
}
