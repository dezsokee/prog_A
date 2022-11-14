#include <stdio.h>

int main() {

    int n = 10;
    int a[n][n];

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j == n-1)
                printf("%d ", a[i][j]);
        }
    }
    return 0;
}
