#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//39
//Melyik fugvennyel lehet megnezni egy valtozo tipusat?
//Hanyadik emeleten talalhato a matematika-informatika tanszek?

int main() {

    int option;

    do {
        printf("1 - programozasi kerdes\n2 - egyetemmel kapcsolatos kerdes\n3 - kilepes\n");
        scanf("%i", &option);
        printf("On a %i opciot valasztotta!\n", option);
        srand(time(0));
        //freopen("kerdesek.txt", "r", "stdin");
        int x;

        switch (option) {
            case 1: {
                x = rand() % 6 + 1;

                char s[100];

                for (int i = 1; i <= x; ++i) {
                    scanf("%[^\n]\n", s);
                }
                printf("%s", s);

                //freopen("CON", "r", stdin);
                break;
            }

            case 2: {
                freopen("kerdesek_2.txt", "r", "stdin");
                int x = rand() % 6 + 1;
                char s[100];

                for (int i = 1; i <= x; ++i) {
                    scanf("%s", s);
                }
                printf("%s", s);
                freopen("CON", "r", stdin);
                break;
            }

            case 3:
                return 0;

        }
    } while (option != 3);

    return 0;
}