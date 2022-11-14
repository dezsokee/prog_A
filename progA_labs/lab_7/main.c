#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int can_enter_cell (int n, int a[][n], int is_visited[][n], int row, int col)
{
    if (row < 0 || row >= n || col < 0 || col >= n || is_visited[row][col] || a[row][col] == 0)
    {
        return 0;
    }
    return 1;
}

void korbe_jaras(int n, int a[][n], int is_visited[][n], int row, int col)
{
    is_visited[row][col] = 1;

    for (int i = -1; i<=1; i++)
    {
        for (int j = -1; j<=1; j++)
        {
            int is_safe_cell = can_enter_cell (n, a, is_visited, row + i, col + j);

            if (is_safe_cell)
                korbe_jaras(n, a, is_visited, row+i, col+j);
        }
    }
}

int find_islands(int n, int a[][n])
{
    int is_visited[n][n];
    int count=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            is_visited[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] && !is_visited[i][j])
            {
                korbe_jaras(n, a, is_visited, i, j);
                count++;
            }
        }
    }

    return count;
}

int main() {

    freopen("adat.txt","r", stdin);
    int n;
    scanf("%d",&n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < n; j++)
        {
            scanf("%d", a[i][j]);
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    f.close();
    return 0;
}
