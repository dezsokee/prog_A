#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//kiiratas
void kiir(int n, int a[]);

//hanyszor mertek 0 alatti homersekletet
int nulla_alatti(int n, int a[]);

//a pozitiv homersekletek atalaga
float pozitiv_atlag(int n, int a[]);

//a legalacsonyabb homerseklet es annak pozicioja
int min_homerseklet(int n, int a[]);

//a veletlenszeruen generalt tomb es a beolvasott tomb atlagainak osszehasonlitasa
void general(int n, int a[]);

//maximum homerseklet az 5-os feladathoz
int max_homerseklet(int n, int a[]);

int main() {

    freopen("weather.txt", "r", stdin);

    //az allomany megnyitas ellenorzese
    if (!freopen("weather.txt", "r", stdin))
    {
        printf("Baj van az allomany megnyitasaval!");
        return -1;
    }

    //alomanybol valo kiolvasas
    int n;
    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &x[i]);
    }

    freopen("CON", "r", stdin);

    //projekt strukturalasa
    int problem;
    printf("A 2-es feladat hanyadik alpontjat szeretned?\n");
    scanf("%d", &problem);

    switch (problem)
    {
        case 1:
        {
            //kiiratas
            printf("Az allomanyban eltarolt homersekeletek:\n");
            kiir(n, x);
            break;
        }

        case 2:
        {
            //hanyszor mertek 0 alatti homersekletet
            printf("Nulla alatti homersekletek szama: %d ", nulla_alatti(n,x));
            break;
        }

        case 3:
        {
            //a pozitiv homersekletek atalaga
            printf("A szigoruan pozitiv homersekletek atlaga: %.2f ", pozitiv_atlag(n,x));
            break;
        }

        case 4:
        {
            //a legalacsonyabb homerseklet es annak pozicioja
            printf("A legalacsonyabb homerseklet pozicioja: %d es ez a %d ertek", min_homerseklet(n,x)+1, x[min_homerseklet(n,x)]);
            break;
        }

        case 5:
        {
            //a veletlenszeruen generalt tomb es a beolvasott tomb atlagainak osszehasonlitasa
            general(n,x);
            break;
        }

        default:
            printf("Nincs ilyen feladat!");
            break;

    }
    return 0;
}

void kiir(int n, int a[])
{
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int nulla_alatti (int n, int a[])
{
    int db= 0;

    for(int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
        {
            db++;
        }
    }

    return db;
}

float pozitiv_atlag(int n, int a[])
{
    float ossz = 0, db = 0;

    for(int i = 0; i < n; ++i)
    {
        if (a[i] > 0)
        {
            ossz += a[i];
            db++;
        }
    }

    return ossz/db;
}

int min_homerseklet(int n, int a[])
{
    int min = a[0],p=0;

    for(int i = 1; i < n; ++i)
    {
        if (a[i] < min)
        {
            min = a[i];
            p=i;
        }
    }

    return p;
}

int max_homerseklet(int n, int a[])
{
    int maxi = a[0];

    for(int i = 1; i < n; ++i)
    {
        if (a[i] > maxi)
        {
            maxi = a[i];
        }
    }

    return maxi;
}

void general(int n, int a[])
{
    int mini = a[min_homerseklet(n, a)];
    int maxi = max_homerseklet(n, a);
    int m = n;
    int y[m];
    float ossz1=0,ossz2=0;


    srand(time(NULL));

    for(int i = 0; i < m; ++i)
    {
        y[i]= -13 + rand() % 20;
        printf("%d ", y[i]);
    }
    printf("\n");

    for (int i = 0; i < n; ++i)
    {
        ossz1 += a[i];
    }

    for(int i = 0; i < m; ++i)
    {
        ossz2 += y[i];
    }

    float atlag1 = ossz1/n;
    float atlag2 = ossz2/m;

    printf("Az eredeti tombben levo homersekletek atalga: %.2f\n", atlag1);
    printf("A generalt tombben levo homersekletek atalga: %.2f\n", atlag2);

    if (atlag1 < atlag2)
    {
        printf("A generalt homersekletek atlaga magasabb, mint a beolvasott homersekletek atlaga");
    }
    else if (atlag1 > atlag2)
    {
        printf("A beolvasott homersekletek atlaga magasabb, mint a generalt homersekletek atlaga");
    }
    else
    {
        printf("A beolvasott es a generalt homersekletek atlaga megegyezik!");
    }


}