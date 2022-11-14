#include <stdio.h>
#include <stdlib.h>

int main() {
    if (!freopen("adat.txt", "r", stdin))
    {
        printf("Hibas input allomanymegnyitas!");
    }

    int n;
    scanf("%d", &n);

    int *a = (int*)malloc(n * sizeof(int));

    if (!a)
    {
        printf("Sikertelen dinamikus helyfoglalas!");
    }

    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (!freopen("ki.txt", "w", stdout))
    {
        printf("Hibas output allomanymegnyitas!");
    }

    for (int i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    freopen("CON", "r", stdin);
    freopen("CON", "w", stdout);

    return 0;
}
