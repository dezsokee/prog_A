#include <stdio.h>

int kozepsoszamjegy(int);

void kiirstatisztika (int[], int);

int main() {
    if (!freopen("szamok.txt", "r", stdin))
    {
        printf("Hibas fajlkezeles!");
        return 0;
    }

    int a, db[10] = {0};

    while (a!=-1)
    {
        scanf("%d", &a);
        int x = kozepsoszamjegy(a);
        if (x==-1)
        {
            continue;
        }
        else
        {
            db[x]++;
        }
    }

    kiirstatisztika(db,10);

    return 0;
}

int kozepsoszamjegy(int a)
{
    int x=a,szj[10],db=0;

    while(x!=0)
    {
        szj[db]=x%10;
        db++;
        x=x/10;
    }

    if (db%2==1)
        return szj[db/2];
    else
        return -1;
}

void kiirstatisztika (int db[], int a)
{
    for (int i=0; i<a; i++)
    {
        printf("%d: %d\n", i, db[i]);
    }
    printf("\n");
}
