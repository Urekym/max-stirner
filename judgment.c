///those judgments are AI made, what what do you think who IAM max? 
///i fucking barely read his book with three fucking languages just to understand what does 
/// "Der Einzige wird erst dadurch, daß er sich selber sein Eigentum nennt, erst dadurch ein Eigentümer" fucking meaaaans, so mercy 


#include "judgment.h"
#include <stdio.h>
#include <unistd.h>


void print_stirner() {
    printf("\n************************************************\n");
    printf("*              MAX STIRNER SPEAKS              *\n");
    printf("*                                              *\n");
    printf("*     \"I have based my affair on nothing\"      *\n");
    printf("************************************************\n\n");
    usleep(1500000);
}


void stirner_judges_you(Ego* ego) {
    print_stirner();
    
    printf("Stirner examines your soul...\n\n");
    usleep(1000000);
    
    int conformist_score = ego->submission + ego->fear_factor;
    int rebel_score = ego->ownness + ego->rebellion + ego->awareness;
    
    printf("VERDICT:\n\n");
    

    // this is when the player completely owned by society "poor guy"
    if (ego->submission >= 15 && ego->fear_factor >= 12) {
        printf("*** THE OWNED SOUL ***\n\n");
        printf("\"Pathetic. You are completely owned by phantoms - duty, honor, \n");
        printf("tradition, what mommy and daddy think. Your 'self' is just a \n");
        printf("collection of other people's expectations.\n\n");
        printf("You bow to every sacred cow, worship every false idol. \n");
        printf("Nation, family, God - these ghosts own you completely. \n");
        printf("You're not even a person, just a walking rule book.\"\n\n");
    }


    // this is like Ammmm rebellious but inconsistent
    else if (ego->rebellion >= 15 && ego->awareness >= 12 && ego->submission > 8) {
        printf("*** THE CONFUSED REBEL ***\n\n");
        printf("\"Hmm. You fight sometimes, submit other times. You're awake \n");
        printf("but still sleepwalking half the time. Better than most sheep, \n");
        printf("I suppose.\n\n");
        printf("You've tasted freedom but keep going back to your cage. \n");
        printf("Maybe you like being owned? Or maybe you just need more \n");
        printf("practice being your own person.\"\n\n");
    }


    // here, the player is true egoist true stirnerian, just dont die from a mosquito bite
    else if (ego->ownness >= 16 && ego->rebellion >= 14 && ego->fear_factor <= 6) {
        printf("*** THE FREE EGO ***\n\n");
        printf("\"Now THIS is what I'm talking about! You get it. You own \n");
        printf("yourself instead of being owned by ghosts and phantoms.\n\n");
        printf("State, society, family, God - you see them all for what they \n");
        printf("really are: useful when they serve YOU, garbage when they don't. \n");
        printf("You are your own person. I respect that.\"\n\n");
    }


    // its like: sees clearly but doesn't act, he want piece, (please please, i also hate that word
    // matrix wla ZBI, anyways its just for the test hehe)
    else if (ego->awareness >= 14 && ego->rebellion <= 8 && ego->ownness <= 10) {
        printf("*** THE PARALYZED OBSERVER ***\n\n");
        printf("\"You see the matrix but won't take the red pill. What's the \n");
        printf("point of awareness if you don't DO anything with it?\n\n");
        printf("You know society is bullshit but keep playing along anyway. \n");
        printf("Coward. Knowledge without action is just mental masturbation.\"\n\n");
    }

    //i would say "the state's beloved"  traditional/nationalist
    else if (ego->submission >= 12 && ego->rebellion <= 8) {
        printf("*** THE GOOD LITTLE CITIZEN ***\n\n");
        printf("\"Ugh. Another true believer. You've swallowed every lie they \n");
        printf("fed you and asked for seconds. Country, duty, tradition - \n");
        printf("you worship them all like a good little slave.\n\n");
        printf("You think your chains are jewelry. You call your slavery \n");
        printf("'honor' and your fear 'respect'. Disgusting.\"\n\n");
    }

    // just mixed/conflicted, idk
    else if (conformist_score > 15 && rebel_score > 15) {
        printf("*** THE TORN SOUL ***\n\n");
        printf("\"You're at war with yourself. Part of you wants to be free, \n");
        printf("part wants to be owned. Must be exhausting.\n\n");
        printf("Maybe this internal conflict IS your path? Always questioning, \n");
        printf("never fully settled? Not the worst fate, I suppose.\"\n\n");
    }
    // default case for the player who wants to fuck with the choices, GG man, (girl contact me (>ᴗ•) !)
    else {
        printf("*** THE ENIGMA ***\n\n");
        printf("\"Interesting. You don't fit my usual categories. Maybe that's \n");
        printf("your own form of rebellion - refusing to be pigeonholed even \n");
        printf("by someone like me.\n\n");
        printf("Keep being unpredictable. Consistency is overrated anyway.\"\n\n");
    }
    
    printf("================================================\n");
    printf("\"Remember: I'm not here to tell you what to do.\n");
    printf("That would make me just another authority figure.\n");
    printf("Figure out your own damn life.\"\n");
    printf("                              - Max Stirner\n");
    printf("================================================\n\n");
}
