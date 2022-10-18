#include <stdio.h>

int paros(int x)
{
    int db = 0;
    while (x!=0)
    {
        if (x%2==0)
        {
            db++;
        }
        x=x/10;
    }
    return db;
}

int main() {
    printf("%i", paros(2468));
    return 0;
}
