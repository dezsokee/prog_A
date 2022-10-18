#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //freopen("szamok.txt", "r", stdin);
    //freopen("szamok2.txt", "w", stdout);
    int x,a,b;
    srand(time(0));
    printf("Ird be az intevallum hatarait!\n");
    scanf("%i%i", &a, &b);

    while (1)
    {

        x = rand()%(b-a+1) + a;
        if (0 == x)
            break;
        else if (0 > x)
        {
            x*=-1;
        }

        int last = x%10;
        switch (last) {
            case 0:
                printf("%i, nulla\n", x);
                break;
            case 1:
                printf("%i, egy\n", x);
                break;
            case 2:
                printf("%i, ketto\n", x);
                break;
            case 3:
                printf("%i, harom\n", x);
                break;
            case 4:
                printf("%i, negy\n", x);
                break;
            case 5:
                printf("%i, ot\n", x);
                break;
            case 6:
                printf("%i, hat\n", x);
                break;
            case 7:
                printf("%i, het\n", x);
                break;
            case 8:
                printf("%i, nyolc\n", x);
                break;
            case 9:
                printf("%i, kilenc\n", x);
                break;
            default:
                printf("Negativ\n");
                break;
        }
    }
    //freopen("CON", "r", stdin);
    //freopen("CON", "w", stdout);

    return 0;
}
