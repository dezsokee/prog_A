#include <stdio.h>

int main() {

    int number;
    scanf("%d", &number);
    int fiboNumbers[100];

    //fibonacci szamok 1-tol n-ig

    fiboNumbers[0]=0;
    fiboNumbers[1]=1;
    int fibo = fiboNumbers[0]+fiboNumbers[1];
    int i = 2;

    while (fibo<=number)
    {
        fiboNumbers[i] = fibo;
        i++;
        fibo = fiboNumbers[i-2] + fiboNumbers[i-1];
    }

    int n = i;
    for (int j=0; j < i; j++)
    {
        printf("%i ", fiboNumbers[j]);
    }
    printf("\n");

    int egyutthatok[n];

    for (int j = 0; j< n; j++)
    {
        egyutthatok[j] = 0;
    }

    for (int j = 0; j< n; j++)
    {
        printf("%d ", egyutthatok[j]);
    }

    int maxPoz = n-1;

    while (number != 0)
    {
        if (number >= fiboNumbers[maxPoz])
        {
            number -= fiboNumbers[maxPoz];
            egyutthatok[n-maxPoz-1] = 1;
        }
        else
        {
            egyutthatok[n-maxPoz-1] = 0;
        }
        maxPoz --;
    }

    for (int j = 0;j< n; j++)
    {
        printf("%d - %d\n", egyutthatok[j], fiboNumbers[n-1-j]);
    }

    return 0;
}
