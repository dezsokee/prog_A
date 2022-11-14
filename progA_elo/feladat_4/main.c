#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generalSzamsor(int [], int);

int nyeroStrategia(int [], int);

void kiirKurrensSzakasz(int [], int, int);

int main() {

    int n;
    printf("Add meg a fordulok szamat!\n");
    scanf("%d", &n);
    n*=2;

    int a[n];
    generalSzamsor(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int nyst = nyeroStrategia(a, n);

    int sumPC = 0, sumUser = 0;
    int bal = 0, jobb = n/2-1;

    for (int i = 1; i <= n/2; i++) {
        if (nyst == bal % 2) {
            sumPC += a[bal];
            bal++;
        } else {
            sumPC += a[jobb];
            jobb--;
        }

        printf("A PC lepett es a kurrens szakasz most: \n");
        kiirKurrensSzakasz(a,bal,jobb);

        printf("Melyiket valasztok User? Bal (b) vagy jobb (j)? \n");
        //char userChoice = getchar();
        char userChoice;
        scanf("%c", &userChoice);

        if (userChoice == 'b') {
            sumUser += a[bal];
            bal++;
        } else if (userChoice == 'j') {
            sumUser += a[jobb];
            jobb--;
        }
        printf("A kurrens szakasz: \n");
        kiirKurrensSzakasz(a,bal,jobb);
    }

    printf("PC osszege: %d\n", sumPC);
    printf("User osszege: %d\n", sumUser);

    return 0;
}

void generalSzamsor(int a[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%100;
    }
}

int nyeroStrategia(int a[], int n)
{
    int ossz = 0, ossz1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            ossz += a[i];
        }
        else
        {
            ossz1 += a[i];
        }
    }

    if (ossz > ossz1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void kiirKurrensSzakasz(int a[], int bal, int jobb)
{
    for (int i = bal; i <= jobb; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

