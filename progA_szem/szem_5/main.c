#include <stdio.h>

void beolvasSzamsorozat(int [], int);

void rendezSzamsorozat(int [], int);

int HodokSzama(int [], int);

int main() {

    freopen("pontszamok.txt", "r", stdin);

    int n;
    scanf("%d", &n);
    int a[n];
    beolvasSzamsorozat(a, n);
    rendezSzamsorozat(a, n);
    printf("Hodok szama: %i\n", HodokSzama(a, n));
    printf("Viperak szama: %i\n", n-HodokSzama(a, n));

    freopen("CON", "r", stdin);
    return 0;
}

void beolvasSzamsorozat(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void rendezSzamsorozat(int a[], int n) {
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j-1>=0 && a[j] > a[j - 1])
        {
            int p = a[j];
            a[j] = a[j - 1];
            a[j - 1] = p;
            j--;
        }
    }
}

int HodokSzama(int a[], int n)
{
   int db = 0,i;

   for (i = 1; i < n; i++)
   {
       if (a[i] ==a[i - 1])
           break;
   }

   db = i;

   return i;
}
