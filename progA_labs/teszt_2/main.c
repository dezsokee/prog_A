#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    if (a[0] % 2 == a[n] % 2)
    {
        printf("Egyforma");
    }
    else
    {
        printf("Nem egyforma");
    }
    return 0;
}
