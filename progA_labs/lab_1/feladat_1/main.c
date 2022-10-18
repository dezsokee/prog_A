#include <stdio.h>

void f1 ()
{
    printf("Hello, Szabi!\n");
    printf("A Sapientian tanulok Informatika szakon, 19 eves vagyok!\n");
}

void f2 ()
{
    int szam1,szam2;
    scanf("%d%d", &szam1, &szam2);
    printf("A ket szam osszege: %d\n", szam1+szam2);
    printf("A ket szam kulonbsege: %d\n", szam1-szam2);
    printf("A ket szam szorzata: %d\n", szam1*szam2);
    printf("A ket szam hanyadosa: %d\n", szam1/szam2);
    printf("A ket szam maradeka: %d\n", szam1%szam2);
}

void f3()
{
    printf("*\n");
    printf("OOO\n");
    printf("*OOO*\n");
    printf("OOOOO\n");
    printf("*OOO*\n");
    printf("OOO\n");
    printf("*\n");
}

void f4()
{
    printf("Sikolt a zene, tornyosul, omlik\n"
           "Parfumos, boldog, forro, ifju para\n"
           "S a rozsakoszorus ifjak, leanyok\n"
           "Rettenve neznek egy fekete parra.\n"
           " \n"
           "Kik ezek? S mi bus csondben belepunk.\n"
           "Halal-arcunk sotet fatyollal ovjuk\n"
           "S hervadt, regi rozsa-koszoruinkat\n"
           "A vig teremben neman szerte-szorjuk.\n"
           " \n"
           "Elhal a zene s a vig teremben\n"
           "Teli szel zug s elalusznak a langok.\n"
           "Mi tancba kezdunk es sirva, dideregve\n"
           "Rebbennek szet a boldog matka-parok.");
}

void f5 ()
{
    float num1,num2,num3,num4;
    scanf("%f%f%f%f", &num1,&num2,&num3,&num4);
    float avg = (num1+num2+num3+num4)/4;
    printf("A negy szam atlaga: %f", avg);
}

void f8 ()
{
    int num1,num2,num3;
    scanf("%d%d", &num1,&num2);
    printf ("%d == %d \n", num1,num2,num1 == num2);
    printf ("%d != %d\n", num1,num2,num1 != num2);
}

void f6()
{
        int num1 = 10, num2 = 100;
        float num3 = 10.5, num4 = 100.5;
        printf("++num1 = %d \n", ++num1);
        printf("--num2 = %d \n", --num2);
        printf("num3++ = %f \n", num3++);
        printf("num4-- = %f \n", num4--);
}

void f7()
{
    char a,b,c;
    scanf("%c%c%c", &a, &b, &c);
    printf("%i%i%i",a, b, c);
}

void f9()
{
    int a,b,c;
    scanf("%i%i%i", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("Mindharom szam erteke egyenlo");
    }
    else
    {
        printf("A szamok nem egyenloek");
    }
}

void f10()
{
    char a;
    short int b;
    int c;
    long int d;
    float e;
    double f;
    printf("A char merete: %i\n", sizeof(a));
    printf("A short int merete: %i\n", sizeof(b));
    printf("Az int merete: %i\n", sizeof(c));
    printf("A long int merete: %i\n", sizeof(d));
    printf("A float merete: %i\n", sizeof(e));
    printf("A double merete: %i\n", sizeof(f));
}

int main() {

    //f1();
    //A ket szam osszege
    //f2();
    //A ket szam atlaga
    //f3();
    //tokeletes nyaklanc
    //f4();
    //kedvenc vers
    //f5();
    //operatorok kiiratasa
    //f8();
    //f6();
    //f7();
    //f9();
    //f10();

    //feladat11
    /*float a,b;
    if(!freopen("be.txt", "r", stdin))
    {
        //ha nem sikerul megnyitani
        printf("Error when opening file\n");
        return 1;
    }
    freopen("ki.txt", "w", stdout);
    scanf("%f%f", &a, &b);
    printf("Sum %f", a + b);*/

    return 0;
}
