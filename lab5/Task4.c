#include<stdio.h>

int main(void) {
    char category;
    int sub_category;

    printf("\nEnter conversation category (G: greeting, S: study, W: weather, H: help): ");
    scanf("%c", &category);

    switch(category) {
        case 'G': {
            printf("\nChoose:\n1: hello\n2: how are you?\n3: Goodbye\n");
            scanf(" %d", &sub_category);
            switch(sub_category) {
                case 1: {
                    printf("\nHello there!");
                    return 0;
                }
                case 2: {
                    printf("\nI'm doing well, thank you!");
                    return 0;
                }
                case 3: {
                    printf("\nGoodbye! Have a great day!");
                    return 0;
                }
                default: {
                    printf("\nInvalid input");
                    return 0;
                }
            }
        }
        case 'S': {
            printf("\nChoose:\n1: programming\n2: Mathematics\n3: AI\n");
            scanf(" %d", &sub_category);
            switch(sub_category) {
                case 1: {
                    printf("\nLet's talk C programming!");
                    return 0;
                }
                case 2: {
                    printf("\nMath is the key to logic.");
                    return 0;
                }
                case 3: {
                    printf("\nAI simulates human intelligence.");
                    return 0;
                }
                default: {
                    printf("\nInvalid input");
                    return 0;
                }
            }
        }
        case 'W': {
            printf("\nChoose:\n1: Today\n2: Tomorrow\n3: Forecast\n");
            scanf(" %d", &sub_category);
            switch(sub_category) {
                case 1: {
                    printf("\nToday's weather is clear and pleasant.");
                    return 0;
                }
                case 2: {
                    printf("\nTomorrow expect light rain showers.");
                    return 0;
                }
                case 3: {
                    printf("\nThe 7-day forecast shows sunny skies ahead.");
                    return 0;
                }
                default: {
                    printf("\nInvalid input");
                    return 0;
                }
            }
        }
        case 'H': {
            printf("\nChoose:\n1: About\n2: Commands\n3: Exit\n");
            scanf(" %d", &sub_category);
            switch(sub_category) {
                case 1: {
                    printf("\nI am a rule-based AI assistant written in C.");
                    return 0;
                }
                case 2: {
                    printf("\nSelect alphabets (G,S,W,H) for main options and numbers 1-3 for sub-options.");
                    return 0;
                }
                case 3: {
                    printf("\nExiting session. Goodbye!");
                    return 0;
                }
                default: {
                    printf("\nInvalid input");
                    return 0;
                }
            }
        }
    }
}