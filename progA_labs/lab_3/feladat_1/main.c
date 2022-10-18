#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Udvozollek a lotto programban!\n");

    int nums[5],my[5],db = 0;

    printf("Add meg az otos lotto szamait!\n");
    for (int i=0; i<5; ++i)
    {
        scanf("%i", &my[i]);
        printf("%i", i);
    }

    printf("Az altalad beirt szamok: \n");
    for (int i=0; i<5; ++i)
    {
        printf("%i\n", my[i]);
    }

    printf("Az otos lotto e havi nyero szamai: \n");

    srand(time(0));
    for (int i =0; i<5; ++i)
    {
        nums[i]=rand()%100+1;
        printf("%i\n", nums[i]);
        for (int j=0;j<5;j++)
        {
            if (nums[i] == my[j])
            {
                db++;
            }
        }
    }

    switch (db) {
        case 0:
            printf("0 talalatod van!\n");
            break;
        case 1:
            printf("1 talalatod van!\n");
            break;
        case 2:
            printf("2 talalatod van!\n");
            break;
        case 3:
            printf("3 talalatod van!\n");
            break;
        case 4:
            printf("4 talalatod van!\n");
            break;
        case 5:
            printf("Telitalalat!\n");
            break;
    }


    return 0;
}
