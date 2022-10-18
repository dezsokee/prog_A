#include <stdio.h>

int main() {
    printf("Ird be hogy hany csokival szeretnel jatszani!\n");
    int db;
    scanf("%i", &db);
    printf("%i csokival jatszunk\n", db);
    if (db%4!=0)
    {
        printf("En kezdek es elveszek %i darab csokit\n", db%4);
        db -= db%4;
        printf("A kurrens csokiszam %i\n", db);
        while (db!=0)
        {
            printf("User, te jossz, hany csokit veszel el? (1,2,3)\n");
            int actual;
            scanf("%i", &actual);
            db-=actual;
            printf("A kurrens csokiszam %i\n", db);
            printf("En kovetkezek es elveszek %i csokit\n", db%4);
            db-=db%4;
            printf("A kurrens csokiszam %i\n", db);
        }
        printf("He te loser, megeheted a csipospaprikat!");
    }
    else
    {
        printf("Kezdj te!\n");
        while (db!=0)
        {
            printf("User, te jossz, hany csokit veszel el? (1,2,3)\n");
            int actual;
            scanf("%i", &actual);
            db-=actual;
            printf("A kurrens csokiszam %i\n", db);
            printf("En kovetkezek es elveszek %i csokit\n", db%4);
            db-=db%4;
            printf("A kurrens csokiszam %i\n", db);
        }
        printf("He te loser, megeheted a csipospaprikat!");
    }
    return 0;
     
}
