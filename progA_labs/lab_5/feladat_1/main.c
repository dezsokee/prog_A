#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void f1()
{
    int n, a[20], p=-1;
    scanf("%i", &n);
    printf("n= %d\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (a[i]>=0)
        {
            p = i;
            break;
        }
    }

    if (p== -1)
    {
    printf("Nincs pozitiv");
    }
    else
    {
        printf("%d pozicioban talalhato az elso pozitiv szam", p);
    }
}

void f2() {
    int n, a[20];

    freopen("szamok.txt", "r", stdin);

    scanf("%i", &n);

    printf("n= %i\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
    }

    freopen("CON", "r", stdin);

    for (int i = 0; i < n; i++)
    {
        printf("%i ", a[i]);
    }
    printf("\n");

    for (int i=0; i<n-1;i++)
    {
        float atlag = (float)((a[i]+a[i+1])/2.0);
        printf("%.2f ", atlag);
    }
}

void f3()
{
    int n, a[20];
    freopen("szamok.txt", "r", stdin);

    scanf("%i", &n);
    printf("n= %i \n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
        printf("%i ", a[i]);
    }
    printf("\n");

    for (int i = 1; i < n; i++)
    {
        printf("%i ", a[i]-a[i-1]);
    }

    freopen("CON", "r", stdin);
}

void f4()
{
    int n, a[20], b[20], q=0;
    freopen("szamok.txt", "r", stdin);

    scanf("%i", &n);
    printf("n= %i \n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
        printf("%i ", a[i]);
        int k = 0;

        for (int j=2; j <= (a[i]/2); j++)
        {
            if (j*j == a[i])
            {
                k ++;
            }
        }

        if (k != 0)
        {
            b[q] = a[i];
            q++;
        }
    }

    printf("\n");

    for (int i = 0; i < q; i++)
    {
        printf("%i ", b[i]);
    }

    freopen("CON", "r", stdin);
}

void f5()
{
    int n, a[20], b[20], q=0, ossz = 0, c[20], r = 0;
    freopen("szamok.txt", "r", stdin);

    scanf("%i", &n);
    printf("n= %i \n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
        printf("%i ", a[i]);
        int k = 0;

        for (int j=2; j <= (a[i]/2); j++)
        {
            if (j*j == a[i])
            {
                k ++;
                c[r]= i;
                r++;
            }
        }

        if (k != 0)
        {
            b[q] = a[i];
            ossz+=a[i];
            q++;
        }
    }

    printf("\n");
    printf("%i db negyzetszam van", q);
    printf("\n");
    printf("%i a negyzetszamok osszege", ossz);
    printf("\n");

    for (int i = 0; i < q; i++)
    {
        printf("%i ", b[i]);
    }

    printf("\n");
    printf("Poziciojuk:\n");

    for (int i=0; i<r; i++)
    {
        printf("%i ", c[i]);
    }

    freopen("CON", "r", stdin);
}

void f6()
{
    int original[20], n, newArray[20],a,b,j=0;
    printf("Enter the size of array: ");
    scanf("%i", &n);
    for (int i=0; i<n; ++i)
    {
        scanf("%i", &original[i]);
    }
    scanf("%i%i", &a, &b);

    for (int i=0; i<n; ++i)
    {
        if (original[i] >=a && original[i] <= b)
        {
            newArray[j]=original[i];
            j++;
        }
    }

    for (int i=0; i<j; ++i)
    {
        printf("%d ", newArray[i]);
    }
}

void f10(int n)
{
    srand((unsigned int)time(NULL));
    int a[20],b[20];
    for (int i=0; i<n; i++)
    {
        a[i] = rand()%10;
        printf("%d ", a[i]);
    }
    printf("\n");

    int j = 0,k=n;
    for (int i=0; i<n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            b[k-1]=a[i];
            k--;
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", b[i]);
    }
}

void f15(int n)
{
    int x[20]={23, 12, 18, 4, 0, 23, 5},k=3, b[20], j=0, c[20], p;
    for (int i=0; i<k; i++)
    {
        b[j] = x[i];
        j++;
    }

    bool cs;
    do
    {
        cs = false;
        for (int i=0; i<k-1; i++)
        {
            if (b[i] > b[i+1])
            {
                p = b[i];
                b[i] = b[i+1];
                b[i+1] = p;
                cs = true;
            }
        }
    }
    while (cs);

    j= 0;
    for (int i =n-k-1; i < n; i++)
    {
        c[j] = x[i];
        j++;
    }

    do
    {
        cs = false;
        for (int i=0; i<n-k-1; i++)
        {
            if (c[i] < c[i+1])
            {
                p = c[i];
                c[i] = c[i+1];
                c[i+1] = p;
                cs = true;
            }
        }
    }
    while (cs);

    for (int i=0; i<k; i++)
    {
        printf("%d ", b[i]);
    }

    for (int i=0; i<n-k; i++)
    {
        printf("%d ", c[i]);
    }
}

void f16(int n)
{
    int a[20] = {2, 33, 1, 4, 5, 3, 12}, max = 0, db,p,q,l;
    for (int i = 0; i < n; i++)
    {
        db = 1;
        if (a[i] < a[i+1])
        {
            q = i;
            while (a[i] < a[i+1])
            {
                db++;
                i++;
            }
        }
        if (db > max)
        {
            l = q;
            p = i;
            max = db;
        }
    }

    for (int i = l; i<=p; i++)
    {
        printf("%d ", a[i]);
    }
}

void f17(int n)
{
    int a[7]={23, 98, 0, 67, 0, 0, 24},k=n;
    for (int i=0; i<k; i++)
    {
        if (0 == a[i])
        {
            int aktualis = a[i];
            for (int j = i; j < k; j++)
            {
                a[j] = a[j+1];
            }
            a[k-1] = aktualis;
            k--;
        }
        if (a[i] == 0)
        {
            i--;
        }
    }

    for (int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

void f20(int n, int m)
{
    int x[100] = {1,0,1,0, 1}, y[100] = {1,1,0}, e[100]={0};

    int start  = n > m ? n : m;
    for (int i=0; i<start; i++)
    {
        e[i] = x[i]+y[m-i];
    }

    for (int i=0; i<start; i++)
    {
        if (e[i]==2)
        {
            e[i]= 0;
            e[i-1] +=1;
            i--;
        }
        printf("%d ", e[i]);
    }
}

int main() {
    //f15(7);
    //f17(7);
    //f20(5,3);
    //f10(9);
    //f16(7);
    //f6();
    //f1();
    //f2();
    //f3();
    //f4();
    f5();
    return 0;
}
