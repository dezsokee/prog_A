#include <stdio.h>
#include <stdbool.h>

bool isEven(int x)
{
    if (x % 2 == 0)
        return true;
    else
        return false;
}

int negyzetSzam(int x)
{
    for (int i=0; i<=x/2; i++)
    {
        if (i*i==x)
        {
            return 1;
        }
    }
    return 0;
}

int forditottSzam(int x)
{
    int t= 0;
    while (x!=0)
    {
        t = (t * 10) + x%10;
        x=x/10;
    }
    return t;
}

void binary(int x)
{
    int a[16],n=0;
    while (x!=0)
    {
        a[n]= x%2;
        n++;
        x=x/2;
    }

    for (int i=n; i>=0; i--)
    {
        printf("%d", a[i]);
    }
}

void szamjegyekOsszege ()
{
    int x, ossz = 0;
    scanf("%i", &x);
    while (x!=0)
    {
        ossz += x % 10;
        x = x / 10;
    }
    printf("%i",ossz);
}

void szamjegyekDarabja ()
{
    int x, db = 0;
    scanf("%i", &x);
    while (x!=0)
    {
        db++;
        x = x / 10;
    }
    printf("%i",db);
}

int rekurziv_term(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        printf("%i ", x);
        rekurziv_term(x-1);
    }
}

int rekurziv_ossz(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return x + rekurziv_ossz(x-1);
    }
}

int tukorszam(int x)
{
    int e=x,t=0;

    while (e!=0)
    {
        t = (t * 10) + e%10;
        e=e/10;
    }

    if (x==t)
    {
        return 1;
    } else
    {
        return 0;
    }
}

int amstrong(int x)
{
    int y=x,db=0;

    while (y!=0)
    {
        db++;
        y/=10;
    }

    y=x;
    int ossz = 0;

    while (y!=0)
    {
        int a=y%10;
        for (int j=0; j<db-1; j++)
        {
            a = a * (y%10);
        }
        ossz+=a;
        y/=10;
    }

    if (x == ossz)
        return 1;
    else
        return 0;
}

int tokeletes(int x) {
    int ossz = 0;

    for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0)
        {
            ossz += i;
        }
    }

    if (x == ossz)
        return 1;
    else
        return 0;
}

char nagybetu(char a)
{
    char b;

    b = a - ('a'-'A');

    return b;
}

void osszes_amstrong(int a, int b)
{
    for (int i=a; i<=b; i++)
    {
        if (amstrong(i))
        {
            printf("%i ",i);
        }
    }
}

void osszes_tokeletes(int a, int b)
{
    for (int i=a; i<=b; i++)
    {
        if (tokeletes(i))
        {
            printf("%i ",i);
        }
    }
}

void osszes_negyzet(int a, int b)
{
    for (int i=a; i<=b; i++)
    {
        if (negyzetSzam(i))
        {
            printf("%i ",i);
        }
    }
}

void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("%i %i ", a, b);

    for (int i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%i ", c);
    }
}

void fibonacci2(int n) {
    int a = 0, b = 1, c;

    printf("%i %i ", a, b);

    while (c<=n)
    {
        c = a + b;
        a = b;
        b = c;
        if (c>n)
            break;
        printf("%i ", c);
    }
}

int main() {
    //printf("%i\n", rekurziv_term(6));
    //printf("%i\n", rekurziv_ossz(6));
    //printf("%i", forditottSzam(123));
    //binary(7);
    //printf("%i", negyzetSzam(15));
    //printf("%i", tukorszam(121));
    //printf("%i", amstrong(153));
    //printf("%i", tokeletes(6));
    //printf("%c", nagybetu('a'));
    //osszes_amstrong(100,200);
    //osszes_tokeletes(1, 1000);
    //osszes_negyzet(1,100);
    //fibonacci(10);
    //fibonacci2(13);
    return 0;
}
