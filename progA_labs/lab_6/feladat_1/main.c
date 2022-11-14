#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void kiir(int n, int a[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
}

void f1()
{
    int n;
    scanf("%d", &n);

    int a[n][n],ossz = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            ossz += a[i][j];
        }
    }

    kiir(n,a);

    printf("Az elemek osszege: %d\n",ossz);
}

void f2()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = i*j;
        }
    }

    kiir(n,a);
}

int f3_max(int n, int a[][n])
{
    int maxi = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > maxi)
            {
                maxi = a[i][j];
            }
        }
    }

    printf("A legnagyobb elem: %d\n",maxi);
}

void f4_f5_sor_osszeg_maximum(int n, int a[][n])
{
    int ossz,maxi;
    for (int i = 0; i < n; i++)
    {
        ossz = 0;
        maxi = a[i][0];
        for (int j = 0; j < n; j++)
        {
            ossz += a[i][j];
            if (a[i][j] > maxi)
            {
                maxi = a[i][j];
            }
        }
        printf("Az %d sor osszege: %d\n", i+1, ossz);
        printf("Az %d sor maximuma: %d\n", i+1, maxi);
    }
}

void f6_oszlop_minimum(int n, int a[][n])
{
    int mini, maxi=-1;

    for (int j = 0; j < n; j++)
    {
        mini = a[0][j];
        for (int i = 0; i < n; i++)
        {
            if (a[i][j] < mini)
            {
                mini = a[i][j];
            }
        }
        printf("A %d oszlop minimumja: %d\n", j+1, mini);
        if (mini > maxi)
        {
            maxi = mini;
        }
    }
    printf("Az oszlopnkenti minimumok maximuma: %d\n", maxi);
}

void f7_paros_osszeg(int n, int a[][n])
{
    int ossz = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i+j) % 2 == 0)
            {
                if (a[i][j] % 2 == 0)
                    ossz+=a[i][j];
            }
        }
    }

    printf("A tomb paros poziciojan levo paros szamok osszege: %d\n", ossz);
}

void f8_atlag()
{
    int a[10][15];
    float ossz=0;
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            a[i][j] = rand() % 500 + 1;
            printf("%4d ", a[i][j]);
            ossz += a[i][j];
        }
        printf("\n");
    }

    float avg = ossz/150;

    printf("Az atlag: %f\n", avg);

    printf("Az atlagnal nagyobb elemek:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (a[i][j] > avg)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

}

void tukrozes_2_vertival(int n, int a[][n])
{
    int csere;
    for (int i = 0; i <n; i++)
    {
        for (int e = 0, v = n-1; e <v; e++, v--)
        {
            csere  = a[i][e];
            a[i][e] = a[i][v];
            a[i][v] = csere;
        }
    }
}

void f9()
{
    int a[10][10],k=1;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = k;
            k++;
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int b = a[i][j];
            a[i][j] = a[i][10-1-j];
            a[i][10-1-j] =b;
        }
    }

    printf("A tukrozott matrix:\n");

    kiir(10,a);
    printf("\n");

}



int main() {

    /*int n;
    scanf("%d", &n);

    int a[n][n];
    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand()%10;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }*/

    //f3_max(n,a);
    //f4_f5_sor_osszeg_maximum(n,a);
    //f6_oszlop_minimum(n,a);
    //f7_paros_osszeg(n,a);
    //f8_atlag();
    //f9();

    return 0;
}
