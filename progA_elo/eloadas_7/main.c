#include <stdio.h>

void szekvencia_valtozokkal()
{
    int n, a, b, sz = 1, maxi = 0;

    scanf("%d",&n);

    scanf("%d",&a);

    for (int i=1; i<n; i++)
    {
        scanf("%d",&b);
        if (b > a)
        {
            sz++;
        }
        else
        {
            if (sz > maxi)
            {
                maxi = sz;
            }
            sz = 1;
        }
        a = b;
    }

    if (sz > maxi)
    {
        maxi = sz;
    }

    printf("%d\n",maxi);

}

void beolvas_szamsor(int [], int);
void kiir_szamsor(int [], int);
int szekvencia_tombokkel(int [], int);
void szekvencia_tombokkel_1(int [], int);

int main() {

    if(!freopen("szamok.txt", "r", stdin))
    {
        printf("Hibas fajlkezeles!");
        return -1;
    }

    int n;

    scanf("%d",&n);

    int a[n];

    beolvas_szamsor(a,n);
    kiir_szamsor(a,n);

    freopen("CON", "r", stdin);

    printf("A leghosszabb reszsorozat hossza: %d\n", szekvencia_tombokkel(a,n));

    szekvencia_tombokkel_1(a,n);

    return 0;
}

void beolvas_szamsor(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
}

void kiir_szamsor(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int szekvencia_tombokkel(int a[], int n)
{
    int sz = 1, maxi = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i-1])
        {
            sz++;
        }
        else
        {
            if (sz > maxi)
            {
                maxi = sz;
            }
            sz = 1;
        }
    }

    if (sz > maxi)
    {
        maxi = sz;
    }

    return maxi;
}

void szekvencia_tombokkel_1(int a[], int n)
{
    int sz = 1, maxi = 0, j = 0,k = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i-1])
        {
            sz++;
        }
        else
        {
            if (sz > maxi)
            {
                maxi = sz;
                k = j;
            }
            sz = 1;
            j = i;
        }
    }

    if (sz > maxi)
    {
        maxi = sz;
        k = j;
    }

    for (int i = k; i < k+ maxi; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}