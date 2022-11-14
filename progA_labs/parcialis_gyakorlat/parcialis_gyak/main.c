#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void kiir(int n, int a[]);

int magassag_atlag(int n, int a[]);

int melyseg_atlag (int n, int a[]);

void legmelyebb_buvar(int n, int a[]);

void statisztika(int n, int a[]);

int main() {
    srand(time(NULL));
    int n;

    printf("n= ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = -200 + rand()%(3201);
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Melysegek es magassagok kulon-kulon sorba rendezve: \n");
    kiir(n,a);

    printf("A magassagok atlaga: %i \n", magassag_atlag(n,a));
    printf("A melysegek atlaga: %i \n", melyseg_atlag(n,a));

    legmelyebb_buvar(n,a);

    statisztika(n,a);

    return 0;
}

void kiir(int n, int a[])
{
    printf("Melysegek: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    printf("Magassagok: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int magassag_atlag(int n, int a[])
{
    int ossz = 0, db= 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            ossz += a[i];
            db++;
        }
    }

    return (float)(ossz/db);
}

int melyseg_atlag (int n, int a[])
{
    int ossz = 0, db= 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            ossz += a[i];
            db++;
        }
    }

    if (db ==0)
    {
        return 0;
    }
    else
        return (float)(ossz/db);
}

void legmelyebb_buvar(int n, int a[])
{
    int min = a[0], q=0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min && a[i] < 0)
        {
            min = a[i];
            q=i+1;
        }
    }

    if (q == 0)
    {
        printf("Nincs buvar melyseg\n");
    }
    else
    {
        printf("A legmelyebbre a %i buvar merult, es ennek a melyesege: %i \n", q, min);
    }

}

void statisztika(int n, int a[])
{
    int db[10]={0};

    for (int i = 0; i < n; i++)
    {
        while (a[i] >= 10)
        {
            a[i] /= 10;
        }
        db[a[i]] ++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (db[i] != 0)
            printf("%i -> %i\n", i, db[i]);
    }
}