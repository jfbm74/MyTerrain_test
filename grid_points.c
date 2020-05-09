#include "terrain.h"

int **alloc_grid(int width, int height)
{
    int **m;
    int i, x, y;

    if (width <= 0 || height <= 0)
        return (NULL);
    m = (int **)malloc(height * sizeof(int *));
    if (m == NULL)
    {
        return (0);
    }
    for (i = 0; i < height; i++)
    {
        m[i] = (int *)malloc(width * sizeof(int));
        if (m[i] == NULL)
        {
            while (i >= 0)
                free(m[i--]);
            free(m);
            return (0);
        }
    }
    for (x = 0; x < height; x++)
    {
        for (y = 0; y < width; y++)
        {
            m[x][y] = 0;
        }
    }
    return (m);
}

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }
}

int **insert_points(int rows, int cols, char c)
{
    int **m;
    int i, j;
    int val = 0;
    int dis_factor = 0;

    m = alloc_grid(rows, cols);
    //validate m
    if (c == 'x')
    {
        for (i = 0; i < rows; i++)
        {
            dis_factor = 0;
            for (j = 0; j < cols; j++)
            {
                m[i][j] = dis_factor;
                dis_factor = dis_factor + 150;
            }
        }
    }
    else if (c == 'y')
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
                m[i][j] = dis_factor;
            dis_factor = dis_factor + 150;
        }
    }
    
    
    
    
    return (m);
}