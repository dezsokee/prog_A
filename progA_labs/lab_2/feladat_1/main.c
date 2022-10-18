#include <stdio.h>
#include <math.h>
#include <time.h>
//#include <stdlib.h>

void f1()
{
    freopen("be.txt", "r", stdin);
    freopen("ki.txt", "w", stdout);

    float a;
    int db1=0,db2=0;

    for (int i=0;i<5;i++)
    {
        scanf("%f", &a);
        if (a<0) db2 ++; else db1++;
    }

    printf("%i negativ es %i pozitiv szam van az allomanyban", db2, db1);
}

void f2()
{
    int figy1 = 0, a;

    for (int i=0;i<5;i++)
    {
        scanf("%i", &a);
        if (a<0 && a % 2 == 1) figy1 = 1;
    }

    if (!figy1)
        printf("Van a szamok kozott negativ es paratlan");
}

void f3()
{
    float x,y;
    scanf("%f%f", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("Az elso negyedben van");
    }
    else if (x<0 && y>0)
    {
        printf("A masodik negyedben van");
    }
    else if (x<0 && y<0)
    {
        printf("A harmadik negyedben van");
    }
    else
    {
        printf("A negyedik negyedben van");
    }

}

void f4()
{
    int a, max;

    scanf("%i", &max);
    int min = max;

    for(int i=0;i<2;i++)
    {
        scanf("%i", &a);
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
    }

    printf("A maximum szam: %i\n", max);
    printf("A minimum szam: %i\n", min);
}

void f5()
{
    int language;

    scanf("%i", &language);

    switch (language)
    {
        case 1:
            printf("C#\n");
            break;
        case 2:
            printf("C\n");
            break;
        case 3:
            printf("C++\n");
            break;
        default:
            printf("Other programming language\n");
    }

}

void f6 ()
{
    int a1,a2,b1,b2;

    printf("Az elso tort szamlaloja majd nevezoje\n");
    scanf("%i%i", &a1, &a2);

    printf("A masodik tort szamlaloja majd nevezoje\n");
    scanf("%i%i", &b1, &b2);

    float ossz;

    if (a2 == b2)
    {
        ossz = (float)(a1+b1) / a2;
        printf("A ket tort osszege: %.2f\n", ossz);
    }
    else
    {
        ossz = (float)((a1*b2)+(a2*b1)) / (a2*b2);
        printf("A ket tort osszege: %.2f\n", ossz);
    }
};

void f7()
{
    int a,b;
    char c;

    scanf("%i%c%i", &a, &c, &b);

    switch (c) {
        case '+':
            printf("%i", a+b);
            break;
        case '-':
            printf("%i", a-b);
            break;
        case '*':
            printf("%i", a*b);
            break;
        case '/':
            printf("%i", a/b);
            break;
        case '%':
            printf("%i", a%b);
            break;
        default:
            printf("Ervenytelen muveletet adtal meg");
            break;
    }
}

void f8()
{
    int a,b;
    scanf("%i%i", &a, &b);
    int x = a / b, y = a % b;
    printf("%i = %i * %i + %i", a, x, b, y);
}

void f9()
{
    srand(time(0));
    int a, db = 0;
    for (int i=0;i<7;i++)
    {
        a = rand()%10;
        //printf("%i\n", a);
        if (a == 4)
        {
            db ++;
        }
    }
    printf("%i darab 4-es van a generalt szamok kozott.", db);
}

void f10()
{
    printf("A kovetkezo feladatok kozul valaszthatsz:\n");
    for (int i=1; i<=4;i++)
    {
        printf("%i . Feladat\n", i);
    }

    printf("5. Kilepes\n");
    printf("Add meg a kivalasztott feladatot: ");
    int valasztott;
    scanf("%i", &valasztott);

    switch (valasztott) {
        case 1:
            printf("Az 1. feladatot valasztottad\n");
            break;
        case 2:
            printf("A 2. feladatot valasztottad\n");
            break;
        case 3:
            printf("A 3. feladatot valasztottad\n");
            break;
        case 4:
            printf("A 4. feladatot valasztottad\n");
            break;
        case 5:
            printf("A kilepest valasztottad\n");
            break;
        default:
            printf("Nem megfelelo szamot adtal meg!");
            break;
    }
}

int main() {

    //5 szam kozul hany pozitiv es hany negativ
    //f1();
    //5 szam kozul van-e negativ paratlan
    //f2();
    //melyik siknegyedben van a pont
    //f3();
    //3 tetszoleges szam maximuma es minimuma
    //f4();
    //switch szerkezet programnyelvekkel
    //f5();
    //ket tort osszeadasa
    //f6();
    //muveletek switch-el
    //f7();
    //maradekos osztaly torvenye
    //f8();
    //7 veletlen szam kozul hany 4-es
    //f9();
    //feladatvalasztos menu
    //f10();

    return 0;
}
