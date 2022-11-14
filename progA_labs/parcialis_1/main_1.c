#include <stdio.h>
#include <math.h>

//a terulet kiszamitasa heron kepletet hasznalva
float terulet(int a, int b, int c);

int main() {
    int a,b,c;

    //az oldalak beolvasasa billenytuzetrol
    printf("a=");
    scanf("%d", &a);

    printf("b=");
    scanf("%d", &b);

    printf("c=");
    scanf("%d", &c);

    //az oldalak hosszusaganak az ellenorzese
    if (a>0 && b>0 && c>0)
    {
        float ter  = terulet(a,b,c);
        printf("A haromszog terulete: %.2f", ter);
    }
    else {
        printf("Mind a 3 ertek nem pozitiv ertek!");
    }

    return 0;
}

float terulet(int a, int b, int c)
{
    int p = (a+b+c)/2;

    float ter = sqrt(p*(p-a)*(p-b)*(p-c));

    return ter;
}
