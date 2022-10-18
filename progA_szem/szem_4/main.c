#include <stdio.h>

int main() {
    freopen("szamsor.txt", "r", stdin);

    int n, a[10], db = 0;
    scanf("%d", &n);
    printf("n = %d\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j-1 >=0 && a[j-1] > a[j])
        {
            int p = a[j];
            a[j] = a[j-1];
            a[j-1]=p;
            db++;
            j--;
        }
    }

    printf("A rendezett sorozat: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    freopen ("CON", "r", stdin);
    return 0;
}
