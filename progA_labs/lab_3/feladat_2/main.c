#include <stdio.h>
#include <string.h>
#include <malloc.h>

char *alphabetWar (char fight[])
{

    int rightScore = 0, leftScore = 0;
    char x;

    for (int i=0; i<strlen(fight); i++) {
        x = fight [i];
        switch (x) {
            case 'w':
                leftScore += 4;
                break;
            case 'p':
                leftScore += 3;
                break;
            case 'b':
                leftScore += 2;
                break;
            case 's':
                leftScore += 1;
                break;
            case 'm':
                rightScore += 4;
                break;
            case 'q':
                rightScore += 3;
                break;
            case 'd':
                rightScore += 2;
                break;
            case 'z':
                rightScore += 1;
                break;
        }
    }

    if (rightScore == leftScore)
    {
        return("Let's fight again!");
    }
    else if (rightScore > leftScore)
    {
        return("Right side wins!");
    }
    else
    {
        return("Left side wins!");
    }
}

char *sumOfSeries(int a)
{
    double sum = 0;
    float nev = 1;

    for (int i = 0; i < a; i++)
    {
        sum += 1/nev;
        nev += 3;
    }

    char *str =  (char *)malloc(50 * sizeof(char));;

    sprintf(str,  "%.2lf", sum);

    return str;
}

int main() {

    //printf("%s", alphabetWar("zdqmwpbs"));
    int a = 5;
    printf("%s", sumOfSeries(a));

    return 0;
}
