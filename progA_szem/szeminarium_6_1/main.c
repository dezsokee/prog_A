#include <stdio.h>

void rendez(int [], int);
void rendez2(int [], int);

int main() {
    if (!freopen("szamok.txt", "r", stdin))
    {
        printf("Hibas megnyitas!");
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

    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            rendez(a[i], n);
        }
        else
        {
            rendez2(a[i], n);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void rendez(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j=i;
        while (a[j] < a[j - 1] && j-1 >=0)
        {
            int p = a[j];
            a[j]=a[j-1];
            a[j-1]=p;
            j--;
        }
    }
}

void rendez2(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j=i;
        while (a[j] > a[j - 1] && j-1 >=0)
        {
            int p = a[j];
            a[j]=a[j-1];
            a[j-1]=p;
            j--;
        }
    }
}