#include <stdio.h>

void linear_search()
{
    int t[100],n,k,ok=0,db=0;
    printf("n=");
    scanf("%i", &n);

    for (int i=0; i<n; ++i)
    {
        scanf("%i", &t[i]);
    }

    for (int i=0; i<n; ++i)
    {
        printf("%i ", t[i]);
    }
    printf("\n");

    printf("Add meg a keresett erteket!\n");
    scanf("%i", &k);

    for (int i = 0; i < n; ++i) {
        if (t[i] == k)
        {
            printf("%i. helyen talalhato a szam", i+1);
            ok = 1;
            db++;
        }
    }

    if (!ok)
        printf("Nem talalhato meg a keresett ertek!");
    else
    {
        printf("%i db van belole a tombben", db);
    }

}

void binary_search()
{
    int t[10],n;
    printf("n=");
    scanf("%i",&n);

    printf("Add meg a tomb elemeit kizarolag novekvo sorrendben!");
    for (int i = 0; i < n; ++i) {
        scanf("%i",&t[i]);
    }

    for (int i = 0; i < n; ++i) {
        printf("%i ", t[i]);
    }

    int a_h=0,f_h=n-1,kozep,keresett,ok=0;

    printf("Ird be a keresett erteket!\n");
    scanf("%i", &keresett);

    while (a_h <= f_h)
    {
        kozep = (a_h+f_h)/2;

        if (keresett == t[kozep])
        {
            printf("Megtalaltam az erteket a %i pozicioban!\n", kozep+1);
            ok = 1;
            break;
        }
        else if (keresett < t[kozep])
        {
            f_h = kozep - 1;
        }
        else
        {
            a_h = kozep +1;
        }
    }
    if (!ok)
        printf("Nem talaltam meg az erteket a tombben!");
}

int main() {

    binary_search();
    return 0;
}
