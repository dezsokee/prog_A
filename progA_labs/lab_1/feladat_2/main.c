#include <stdio.h>
#include <stdlib.h>

int main()
{
    int osszcsokiszam, usercsokiszam;
    printf("Add meg, hogy hany csokival szeretnel jatszani: ");
    scanf("%i", &osszcsokiszam);
    printf("A kurrens csokiszam: %i\n", osszcsokiszam);
    if ( osszcsokiszam % 4 != 0 ){
        printf("En kezdek, es leveszek %i csokit\n", osszcsokiszam % 4);
        osszcsokiszam -= (osszcsokiszam % 4);
        printf("A kurrens csokiszam: %i\n", osszcsokiszam);
    }
    else{
        printf("Te kezdesz\n");
    }

    while ( osszcsokiszam > 0 ){
        printf("Ird be, hogy hany csokit veszel el (1/2/3): ");
        scanf("%i", &usercsokiszam);
        osszcsokiszam -= usercsokiszam;
        printf("A kurrens csokiszam: %i\n", osszcsokiszam);
        printf("Nyomj le egy billentyut, hogy megtudd a PC valasztasat!");
        getch();
        printf("\nA PC levett %i csokit\n", 4 - usercsokiszam);
        osszcsokiszam -= (4-usercsokiszam);
        printf("A kurrens csokiszam: %i\n", osszcsokiszam);
    }
    printf("LOSER kerlek edd meg a csipospaprkikat! Koszonom!\n");
    return 0;
}