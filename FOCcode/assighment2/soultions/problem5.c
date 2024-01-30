#include <stdio.h>

int main() {
    int rounds;
    scanf("%d", &rounds);

    int leenaWins = 0;
    int samarWins = 0;

    for (int i = 0; i < rounds; i++) {
        int challenges;
        scanf("%d", &challenges);

        int leenaScore = 0;
        int samarScore = 0;

        for (int j = 0; j < challenges; j++) {
            char winner;
            scanf(" %c", &winner);

            if (winner == 'L') {
                leenaScore++;
            } else if (winner == 'S') {
                samarScore++;
            }

            if (leenaScore > challenges / 2) {
                leenaWins++;
                printf("Leena\n");
                break;
            } else if (samarScore > challenges / 2) {
                samarWins++;
                printf("Samar\n");
                break;
            }
        }

        if (leenaScore==samarScore) {
            printf("Tie\n");
        }
    }

    if (leenaWins > samarWins) {
        printf("Leena won the contest with %d round(s)\n", leenaWins);
    } else if (samarWins > leenaWins) {
        printf("Samar won the contest with %d round(s)\n", samarWins);
    } else {
        printf("It is a tie with %d round(s) each\n", leenaWins);
    }

    return 0;
}
