#include <stdio.h>

void piramis()
{
    //beolvasas, kiiras
    freopen("szamok.txt", "r", stdin);
    int n;
    scanf("%i", &n);

    int a[n][n];

    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<=i; ++j)
        {
            scanf("%i", &a[i][j]);
            printf("%3i", a[i][j]);
        }
        printf("\n");
    }

    freopen("CON", "r", stdin);

    //moho modszer fentrol lefele
    int ossz = 0, j=0;
    for(int i=0; i<n; i++)
    {
        ossz += a[i][j];
        if (i<n-1 && a[i+1][j] < a[i+1][j+1])
            ++j;
    }

    printf("%i\n", ossz);

    int ossz2 = 0;
    int jmax = 0;

    for (int j=1; j<n; ++j)
    {
        if (a[n-1][j] > a[n-1][jmax])
        {
            jmax = j;
        }
    }

    j=jmax;

    for (int i=n-1; i>=0; --i)
    {
        ossz2 += a[i][j];
        if (i==j)
        {
            --j;
        }
        else if (j==0)
        {
            continue;
        }
        else if (i>0 && a[i-1][j] < a[i-1][j-1])
        {
            --j;
        }
    }

    printf("%i\n", ossz2);

    //dinamikus modszer
    for (int i=n-2; i>=0; --i)
    {
        for (j=0; j<=i; ++j)
        {
            a[i][j] += (a[i+1][j] > a[i+1][j+1]) ? a[i+1][j] : a[i+1][j+1];
        }
    }

    printf("%i\n", a[0][0]);

    //kiiratas vegere, osszegekkel
    for (int i=0; i<n; ++i)
    {
        for (int j=0; j<=i; ++j)
        {
            printf("%3i", a[i][j]);
        }
        printf("\n");
    }

}

int main() {

    piramis();
    return 0;
}