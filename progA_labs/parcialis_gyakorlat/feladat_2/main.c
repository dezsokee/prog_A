#include <stdio.h>

void write (int n, int a[][n]);

void arany(int n, int a[][n]);

void highest(int n, int a[][n]);

int main() {
    freopen("terulet.txt", "r", stdin);

    if (!freopen("terulet.txt", "r", stdin))
    {
        printf("Problema van a fajl megnyitasaval\n");
    }

    int n;

    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    freopen("CON", "r", stdin);

    int problem;
    printf("Add meg hanyas feladatod szeretned!\n");
    scanf("%d", &problem);

    switch (problem)
    {
        case 1:
        {
            write(n,a);
            break;
        }
        case 2:
        {
            arany(n,a);
            break;
        }
        case 3:
        {
            highest(n,a);
            break;
        }
        default:
        {
            printf("Nincs ilyen feladat");
            break;
        }
    }

    return 0;
}

void write(int n, int a[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

void arany(int n, int a[][n])
{
    int db1 = 0, db2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
                db1++;
            if (a[i][j] < 0)
                db2++;
        }
    }

    float arany = (float)db1 / (float)db2;

    printf("A tenger boritotta terulet atlaga: %f\n",arany);
}

void highest(int n, int a[][n])
{
    int ossz1 = 0, ossz2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
                ossz1+=a[i][j];
            if (i+j==n-1)
                ossz2+=a[i][j];
        }
    }

    if (ossz1 > ossz2)
        printf("A foatlo magasabb");
    else
        printf("A mellekatlo magasabb");
}