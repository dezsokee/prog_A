#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void general_szamsor(int [], int );
void kiir_szamsor(int [], int );
void insertion_sort(int [], int );
void shell_sort(int [], int );
void masol_szamsor(int [], int , int []);
void new_insertion_sort(int [], int, int);
void new_shell_sort(int [], int);

int main() {
    int n;
    clock_t start, final;

    scanf("%d", &n);

    int a[n], b[n];

    general_szamsor(a,n);
    masol_szamsor(a, n, b);
    kiir_szamsor(a, n);
 /*   start = clock();
    insertion_sort(a, n);
    final = clock();
    double ido = (double)(final-start)/CLOCKS_PER_SEC;
    printf("Az algoritmus ideje: %.3lf\n", ido);
    kiir_szamsor(a, n);*/
    /*start = clock();
    shell_sort(b, n);
    final = clock();*/
    //ido = (double)(final-start)/CLOCKS_PER_SEC;
    //printf("Az algoritmus ideje: %.3lf\n", ido);
    //kiir_szamsor(b, n);
    new_insertion_sort(a, n, 1);
    kiir_szamsor(a, n);

    new_shell_sort(b, n);
    kiir_szamsor(b, n);

    return 0;
}

void general_szamsor(int a[], int n)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
}

void masol_szamsor(int a[], int n, int b[])
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}

void kiir_szamsor(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertion_sort(int a[], int n)
{
    int gap = 1;

    for (int i = gap; i < n; i++)
    {
        int j = i;
        while (a[j] < a[j - gap] && j-gap >= 0)
        {
            int p = a[j];
            a[j] = a[j - gap];
            a[j-gap] = p;
            j=j-gap;
        }
    }
}

void shell_sort(int a[], int n)
{
    for (int gap = n/2; gap >=1; gap/=2)
    {
        for (int i = gap; i <= n; i++)
        {
            int j = i;
            while (a[j] < a[j - gap] && j-gap >= 0)
            {
                int p = a[j];
                a[j] = a[j - gap];
                a[j-gap] = p;
                j=j-gap;
            }
        }
    }
}

void new_insertion_sort(int a[], int n, int gap)
{
    for (int i = gap; i < n; i++)
    {
        int j = i;
        while (a[j] < a[j - gap] && j-gap >= 0)
        {
            int p = a[j];
            a[j] = a[j - gap];
            a[j-gap] = p;
            j=j-gap;
        }
    }
}

void new_shell_sort(int a[], int n)
{
    for (int gap = n/2; gap >=1; gap/=2)
    {
        new_insertion_sort(a, n, gap);
    }
}